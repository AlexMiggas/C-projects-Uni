#include <stdio.h>
#include<math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
int n,i;
printf("Give me an upper limit number N: ");
scanf("%d",&n);
double sum=0.0;
for(i=1;i<=n;i++){
sum+=(1.0/i);
}
printf("The sum is %.2lf",sum);
return 0;
}
