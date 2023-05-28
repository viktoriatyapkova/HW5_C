#include <stdio.h> 
void reduce_fraction(int * a, int * b){
    int ch=*a, zn=*b;
    while(ch != 0 && zn != 0){
        if(ch>zn){
            ch= ch % zn;
        }
        else{
            zn = zn % ch;
        }
    }
    int NOD=ch + zn;
    *a = *a / NOD;
    *b = *b / NOD;
}

int main(){
    int a=14, b=49;
    reduce_fraction(&a, &b);
    printf("%d %d", a, b);
}