#include<stdio.h>
int main(){
    int a,i,c=0;
    scanf("%d",&a);
    for(i=2;i<=a/2;i++){
        if(a%i==0){
            c=1;
            break;
        }
    }
    if(c==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return o;
}