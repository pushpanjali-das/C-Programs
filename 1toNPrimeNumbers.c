//To print prime numbers between 1 to N

#include<stdio.h>


main(){
    int n,count;
    printf("Enter the N value\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        count = 0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count +=1;
            }
        }
        (count==2)?printf("%d is prime number\n",i):printf("%d is not a prime number\n",i);
    }

}