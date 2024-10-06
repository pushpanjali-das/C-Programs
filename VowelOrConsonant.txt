//Vowel or Consonant
#include<stdio.h>
main(){
    char c;
    printf("enter the character\n");
    scanf("%c",&c);
    ((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')||(c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U'))?printf("%c is vowel",c):printf("%c is consonant",c);
}