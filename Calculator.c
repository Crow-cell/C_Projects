#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long fastpow(int a,int b){
   long long p=1;
    while(b)
   {
     if((b&1))
        p*=a;
      a*=a;
     b>>=1;
   }
   return p;
}

int main(){
  char symbol;
  printf("Enter the symbol of the operation that you want to do (+ - / * % ^): \n");
  scanf("%c",&symbol);
  char valid_symbols[] = "+ - / * % ^";
  char *ptr=strchr(valid_symbols,symbol);
  if(ptr==NULL)
  {
    printf("Invalid Operand\n");
    return 0;
  }
  else{
    int a=0,b=0;
    scanf("%d %d",&a,&b);
    switch(symbol){
    case '+':
       printf("%d\n",a+b);
       break;
    case '-':
       printf("%d\n",a-b);
       break;
    case '/':
       if(b==0)
        {
          printf("Invalid Divisor\n");
          return 0;
        }
       printf("%lf\n",a/b);
       break;
    case '*':
         printf("%lld\n",a*b);
         break;
    case '%':
         printf("%d\n",a%b);
         break;
    case '^':
         printf("%lld\n",fastpow(a,b));
         break;
   }
   printf("Thank you for using my calculator!");
  }
}
