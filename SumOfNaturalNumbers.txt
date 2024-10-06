//Sum of Natural Numbers
#include<stdio.h>

// int add(int a){
//     if(a<=0){
//         return 0;
//     }
//     return a+add(a-1);
// }

main(){
    int x,sum;
    printf("enter the natural number\n");
    scanf("%d",&x);
    // sum = add(x);
    // printf("Sum of natural numbers till %d is %d",x,sum);
    sum = x*(x+1)/2;
    printf("Sum of natural numbers till %d is %d",x,sum);
    
}