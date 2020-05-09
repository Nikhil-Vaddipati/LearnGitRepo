#include<stdio.h>
int main()
{
    int arr[5] = {-1,2,4,6,8};
    int x;
    printf("Enter the value of x\n");
    scanf("%d",&x);
    twoPointer(arr,x);

}

void twoPointer(int arr[],int x)
{   int i=0,j=4;
    while(i<j)
    {
        if(arr[i] + arr[j] > x)
        {
            j--;
        }
        else if(arr[i]+arr[j] < x)
        {
            i++;
        }
        else
        {
            printf("%d %d",arr[i],arr[j]);
            break;
        }
    }
}
