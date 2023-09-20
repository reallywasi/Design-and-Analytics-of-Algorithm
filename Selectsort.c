

#include<stdio.h>
void main()
{
    int i,min;
int arr[]={2,5,6,3,1,8,7};
for( i=0;i<7;i++)
{
for(int j=i+1;j<7;j++)
{
if(arr[min]>arr[j])
{
min=j;
} 
}

int temp=arr[i];
arr[i]=arr[min];
arr[min]=temp;
}


for( i=0;i<7; i++)
{

    printf("%d",arr[i]);
}



}




























