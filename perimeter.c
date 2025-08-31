// calculating perimeter of rectangle
#include <stdio.h>
int main()
{
 int side_a ;
 int side_b ;
  int perimeter ;
 printf("enter the side_a = ");
 scanf("%d" , & side_a) ;

 printf("enter the side_b = ");
 scanf("%d" , & side_b);
 
 perimeter = 2*(side_a+side_b);

 printf("perimeter is =  %d", perimeter);
 return 0 ;




}