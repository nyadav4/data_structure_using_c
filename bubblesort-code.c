#include<stdio.h>
void print (int a[],int n)
{
  int i;
  for(i=0;i<n;i++)
  {
  	printf("%d",a[i]);
  }
}
void bubble(int a[],int n)
{
  int i,j,temp;
  for(i=0;i<n;i++)
  {
  	for(j=i+1;j<n;j++)
	{
 		if(a[j]<a[i])
		{
 			temp=a[i];
 			a[i]=a[j];
 			a[j]=temp;
    		}
   	}
  }
}
 
void main(){
 int i,j,temp;
 int a[6]={46,98,12,67,32,99};
 int n=sizeof(a)/sizeof(a[0]);
 printf("before sorting elements\n");
 print(a,n);
 bubble(a,n);
 printf("\n after sorting elements\n");
 print(a,n);
}