#include<stdio.h>

int getinput(int *a,int *b)
 {
    printf("Enter the two numbers:\n");
    scanf("%d%d",a,b);
 }
 int add(int a, int b)
 { 
   int sum;
   return sum=a+b;
 } 
 void output(int a, int b, int c)
 {
    printf("\n%d+%d=%d",a,b,c);
 }
void main()
{
  int x,y,z;
  getinput(&x,&y);
  z=add(x,y);
  output(x,y,z);
}
