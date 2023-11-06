#include <stdio.h>
#include <stdlib.h>



   int f(int a)
{
 if(a<0)
    return 0;
 else{

 int b=a;
 int t=0;
 while(b!=0)
 {
  t=t*10+b%10;
  b/=10;
 }

 if(a==t)
   return 1;
 else
   return 0;
    }
}





int main() {

int c;
scanf("%d",&c);

if(f(c))
  printf("true");
else
 printf("false");





















    return 0;
}
