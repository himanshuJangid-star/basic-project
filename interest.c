 // code for finding simple interest 
 #include <stdio.h>
int main()
{
  int principal ;
  float time ;
  int rate ;
  float simple_interest ;
  printf("enter the value of principal = ") ;
  scanf("%d" , &principal) ;

  printf("enter the value of time =  ");
  scanf("%f", & time );
 
  printf("enter the value of  rate = ");
  scanf("%d" , & rate);

  simple_interest = (principal*time*rate)/100 ;
  printf("simple interest is =  %f", simple_interest) ;
  return 0 ;





}
