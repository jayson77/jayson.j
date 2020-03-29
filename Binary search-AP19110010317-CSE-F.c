#include<stdio.h>
void main()
{
   int i, a, b, c, n, s, array[100];
   printf("Enter number of elements");
   scanf("%d",&n); 
   printf("Enter %d integers",n);
   for (i = 0; i < n; i++)
      scanf("%d",&array[i]); 
   printf("Enter the value to find out");
   scanf("%d", &s);
   a=0;
   b=n-1;
   c=(a+b)/2;
   while(a<=b) {
      if(array[c]<s)
         a=c+1;    
      else if(array[c] == s){
         printf("%d is present at index %d", s, c+1);
         break;
      }
      else
         b=c-1;
      c=(a+b)/2;
   }
   if(a>b)
      printf(" %d is not present", s);
}