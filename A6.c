// login validation 
#include<stdio.h>

void main()
{
 int user_id,password;
 printf("Enter the user ID:");
 scanf("%d",&user_id);
 printf("Enter the password:");
 scanf("%d",&password);
 if (user_id==101) {
     if (password==4321){
       printf("login sucessful"); }
       else { printf("incorrect password"); }
 }
 else { printf("user not found"); }       
    

}
         
      
      
     
    