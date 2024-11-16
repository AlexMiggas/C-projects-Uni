#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
int i,num,sum;
printf("Give me a number ");
scanf("%d",&num);
for (i=1;i<num;i++){
    if (num%i==0){
        sum+=i;
    }
}
   printf("Sum: %d",sum);
return 0;}
