#include <stdlib.h>
#include <stdio.h>

int main(){
int money=500;
int cent10=0,cent20=0, cent50=0, E1=0, E2=0;
int cofPay,numCoffee;
int resta;

printf("Give me the number of coffees you want ");
scanf("%d",&numCoffee);

 while(numCoffee>7){
     printf("Coffees exceed 5€, try again ");
     scanf ("%d",&numCoffee);
    }; // ξερω οτι δεν ζητατε αυτην την επαναληψη, απλα πιστευω οτι κανει τον κωδικα πιο ωραιο και να μην τερματιζει απλως γραφοντας σφλαμα
 cofPay=numCoffee*70;
 resta=500-cofPay;

 E2=resta/200;
 resta=resta%200;

 E1=resta/100;
 resta=resta%100;

 cent50=resta/50;
 resta=resta%50;

  cent20=resta/20;
 resta=resta%20;

  cent10=resta/10;
 resta=resta%10;

printf("resta \n");
printf("2E%d\n",E2);
printf("1E %d\n",E1);
printf("50L %d\n",cent50);
printf("20L %d\n",cent20);
printf("10L %d\n",cent10);

return 0;}

