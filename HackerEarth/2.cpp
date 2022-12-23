#include <stdio.h>
 int main(){
   int tc;
scanf("%d" ,&tc);
   while (tc--) {
 int num;
scanf("%d" ,&num);
 long int fact=1;
if(num == 0)
 {
   printf("1  ");
 }
 else {
for(int i=1;i<=num;i++);
 {
   fact = fact * i;
 }
printf("%ld ",fact);
 }
   }
 }
