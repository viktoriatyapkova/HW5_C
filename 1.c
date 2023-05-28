#include <stdio.h>
int main(){
    int n; scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int k=n/2;
    for (int i=0; i<k; i++){
        int l=arr[i];
        arr[i]=arr[k+i];
        arr[k+i]=l;
    }

    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}