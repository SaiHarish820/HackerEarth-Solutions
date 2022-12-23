#include <stdio.h>
 int main(){
     int num;
     scanf("%d", &num);
     if(num>=90)
     {
         printf("GRADE-A");
     }
     else if(num>=80 && num<=89)
     {
         printf("GRADE-B");
     }
     else if(num>=60 && num<=79)
     {
         printf("GRADE-C");
     }
     else if(num>=40 && num<=59)
     {
         printf("GRADE-D");
     }
    else {
printf("GRADE-E");
 }

