#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>0 || a<=100){
        printf("In Range");
    }
    else{
        printf("Out Of Range");
    }
    return 0;
}