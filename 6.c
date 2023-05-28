#include <stdio.h> 
int abs_arr(int arr[], int n){
    int negative=0;
    for(int *i=arr; i<arr+n; i++){
        if(*i<0){
            *i*=-1;
            negative++;
        }
    }
    return negative;
}
int main(){
    int n; scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d ", abs_arr(arr, n));
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}