#include<stdio.h>
#include<conio.h>
int sumof1darray(int a[],int n)/*This is a logic of adding the array elment*/
{
  for(int i=1;i<n;i++)
  {
    a[i]+=a[i-1];/*add each elment to preayus elment*/
  }
  return (a,n);
}

int main()
{
    int n;
    printf("\nEnter the array size\n");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elment of array\n");
    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    
    sumof1darray(a,n);/*call in function*/
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}