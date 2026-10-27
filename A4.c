// restaurant bill
#include<stdio.h>

void main()
{
 float order_amount,discount,delivery_charges,final_amount;
 int membership;
 printf("Enter the order amount:");
 scanf("%f",&order_amount);
 printf("\n Enter the type of membership( premium=1,regualar=0):");
 scanf("%d",&membership);
 if (order_amount>=500)
    { delivery_charges=0.0;
      if (membership==1)
         {discount=0.10*order_amount ; }
      else { discount=0.0; }
     } 
  else {  delivery_charges=50;
          discount=0;  }
   final_amount=order_amount-discount+delivery_charges;     
printf("The final amount to be paid is %f",final_amount);
}         
      
      
     
    