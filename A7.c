// login validation 
#include<stdio.h>

void main()
{
 float marks;
 printf("Enter the marks of the student");
 scanf("%f",&marks);
 if (0<=marks&&marks<=100){
     if (marks>=90&&marks<=100){
        printf("The grade id O"); }
       else if (marks>=80&&marks<=89){
          printf("the grade is A+"); }
         else if (marks>=70&&marks<=79){
           printf("the grade is A"); }
          else if (marks>=60&&marks<=69){
            printf("the grade is B"); }
          else  if (marks>=50&marks<=59) { 
            printf("the grade is C"); }
            else { printf("the grade is Fail"); }
  }         
 else{ printf("invalid mark"); }         
        
    
 
    

}
         
      
      
     
    