#include<stdio.h>
int main()
{
    int a,i,count=0;
    scanf("%d",&a);
    for (i=2;i<=a/2;i++)
    {
        if (a%i==0)
        {
            count =1;
            break;
        }

        else
        {
            count =0;
        }

    }

    if (count==1)
    {
        printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }

    return 0;

}
