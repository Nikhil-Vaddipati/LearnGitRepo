#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int i,j,sum,k;

    for(i=0;i<5;i++)
    {
            for(j=i;j<5;j++)
            {
                for(k=i;k<=j;k++)
                {
                    printf("%d ",a[k]);
                }
                printf("\n");
            }
    }

printf("Oka pranam,oka tyagam \n");

}
