#include <stdio.h>
struct Person
{
	int age; // возраст
	char name[30]; // имя
};
float averageAge(struct Person arr[], int n){
    float g=0;
    for (int i=0; i<n; i++){
        g+=arr[i].age;
    }
    return g/(float)n;
}
int main(){
    struct Person arr[3]={{.age=1, .name="rauf"}, {.age=4, .name="rehreq"}, {.age=5, .name="ayhu"}};
    printf("%f", averageAge(arr, 3));
}