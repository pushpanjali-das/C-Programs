/* Area and perimeter of rectangle
    area = length * breadth
    perimeter = 2(length+breadth)
*/

#include<stdio.h>
main(){
    int l,b,area,perimeter;
    printf("enter l,b values\n");
    scanf("%d%d",&l,&b);
    area = l * b;
    perimeter = 2*(l+b);
    printf("area is %d\nperimeter is %d",area,perimeter);

}