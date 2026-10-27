// BMI 
#include<stdio.h>

void main()
{
 float BMI,height,weight;
 printf("Enter the values of height(m) and weight(kg):");
 scanf("%f%f",&height,&weight);
 BMI=weight/(height*height);
 if (BMI<18.5){
     printf("The person is underweight"); }
     else if(BMI>=18.5&&BMI<=25)
       printf("the person is normal");
     else if (BMI>=25&&BMI<=30)
       printf("the person is  overweight");
     else { printf("the person is obsessed "); }
}
         
      
      
     
    