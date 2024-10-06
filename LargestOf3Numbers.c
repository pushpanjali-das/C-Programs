//Largest of 3 numbers
#include<stdio.h>
main(){
    int n1,n2,n3;
    printf("enter the 3 numbers\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    (n1>n2&&n1>n3)?printf("%d is largest",n1):(n2>n1&&n2>>n3)?printf("%d is largest",n2):printf("%d is largest",n3);
}