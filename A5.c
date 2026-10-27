// loan eligibility 
#include<stdio.h>

void main()
{
 int age,credit_score;
 float income;
 printf("Enter the age:");
 scanf("%d",&age);
 printf("Enter the credit score:");
 scanf("%d",&credit_score);
 printf("Enter the monthly income:");
 scanf("%f",&income);
 if (age >= 21 && age <= 60) {
    if (income >= 25000) {
        if (credit_score >= 700) {
            printf("loan is approved");
        } else { 
            printf("\n Loan is rejected: credit is below 700"); 
        }
    } else { 
        printf("\n Loan is rejected: income is below 25000"); 
    }
} else { 
    printf("\n Loan is rejected: age is not permitted");
}

}
         
      
      
     
    