// Number is Positive or Negative or Equals to 0
#include <stdio.h>
main(){
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
    (number>0)?printf("Positive"):(number<0)?printf("Negative"):printf("Equals to zero");
    
}