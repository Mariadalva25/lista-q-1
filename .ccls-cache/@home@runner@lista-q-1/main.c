#include <stdio.h>

int main(void) {
 int x,y;
  char operadr;
  printf("digite o primeiro número:");
  scanf("%d",&x); 
  
  printf("digite o segundo número:");
  scanf("%d",&y);
  
  printf("qual a operação?");
  setbuf(stdin,NULL);
  scanf("%c",&operadr);

   switch(operadr){
    case '+':printf("soma %d",x+y);
    break;
     
     case '-':printf("sub %d",x-y);
     break;
     
      case '*':printf("multiplicação %d",x*y);
      break;
     
        case '/': printf("divisão %d",x/y); 
         break;
     
        default:printf("operação invalida")
          ;  
     }
     
  
  
  return 0;
}