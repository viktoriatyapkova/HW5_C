#include <stdio.h>
struct Move
{
	int x;
	int y;
};
struct Move getFinishPoint(struct Move arr[], int n){
    struct Move flower={0,0};
    for (int i=0; i<n; i++){
        flower.x+=arr[i].x;
        flower.y+=arr[i].y;
    }
    return flower;
}
int main(){
    struct Move arr[3]={{4,7}, {-6, 6}, {0, 2}};
    printf("%d", getFinishPoint(arr, 3).y);
} 
