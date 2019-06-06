#include<stdio.h>

int a,b,sum;
void getinput()
 {
   printf("Enter the two elements:");
    scanf("%d %d",&a,&b);
  }
 int add()
 {
   int sum=a+b;
   return sum;
 }

 void putoutput()
 {
   printf("The sum of num is:%d",sum);
   int add();
 }

void main()
 {
   void getinput();
   void putoutput();
 } 
   
