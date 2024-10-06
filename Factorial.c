//Factorial Program 
#include<stdio.h>
int factorial(int x){
    if(x<=1){
        return 1;
    }
    return x*factorial(x-1);
}
main(){
    int num,fact,fact1=1;
    printf("enter a number\n");
    scanf("%d",&num);
    // fact=factorial(num);
    for(int i=1;i<=num;i++){
        fact1=fact1*i;
    }
    printf("Factorial of %d is %d",num,fact1);
}