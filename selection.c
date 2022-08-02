#include<stdio.h>
 int main()
   
     int a[100],number,i,jtemp;
     printf("\n please enter the total number of element:");
     scanf("%d",&number);
     printf("\n please enter the array elements:");
     for(i=0;i<number;i++)
       scanf("%d",&a[i]);
    
     for(i=0;i<number;i++){
     for(j=i+1;j<number;j++){
       if(a[i]>a[j]){
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
      }
    }
  }
  printf("\n selection sort result:");
  for(i=o;i<number;i++){
    printf("%d\t",a[i]);
 }
  printf("\n");
  return 0;
 }