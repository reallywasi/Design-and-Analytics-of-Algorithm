#include<stdio.h>
int main()
{


int temp;

   int  arr[]={3,5,9,4,2};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {

if(arr[j]>arr[j+1])
{
temp= arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
        }
    }



for(int i=0;i<5;i++)
{

printf("%d",arr[i]);
}
    return 0;

}
