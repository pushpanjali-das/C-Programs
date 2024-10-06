/*To find compound interest

Amount= P(1 + R/100)t

Compound Interest = Amount – P

*/
#include<stdio.h>
#include<math.h>


main(){
    double p,t,r,amount,ci;
    printf("enter p,t,r values\n");
    scanf("%lf%lf%lf",&p,&t,&r);
    amount = p * (pow((1 + r / 100), t));
    ci = amount - p;
    printf("Compound interest is %lf",ci);

}