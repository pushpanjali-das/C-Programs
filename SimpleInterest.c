//To find Simple interest
#include<stdio.h>
main(){
    int p,t,r;
    float si;
    printf("Enter p,t,r values\n");
    scanf("%d%d%d",&p,&t,&r);
    si= (float)p*t*r/100;
    printf("Simple interest is %f",si);

}