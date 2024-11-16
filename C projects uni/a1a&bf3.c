#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define rate 0.07
#define cars 80000
#define limit 160000

int main(){
//int cars=80000;
int years=0;
long temp = cars;
while (temp<=limit){
    temp= ceil(temp*(1+rate));
     years+=1;
}
printf("Years: %d\n",years);
printf("Cars number: %d\n",temp);

// b without getting rid of defines
years=0;
long numCars;
long Lim;
double Rate;


printf("Give the number of cars: ");
scanf("%ld",&numCars);
printf("Give the limit: ");
scanf("%ld",&Lim);
printf("Give the rate of increasing: ");
scanf("%lf",&Rate);

temp=numCars;// assigning temp for the Do exercise, basically reseting numCars to its given value

while (numCars<=Lim){
    numCars=ceil(numCars*(1+Rate));
    years++;
}
printf("Years %d\n",years);
printf("Cars %ld\n",numCars);

// c

years=0;
if (temp<=Lim){
do{
temp=ceil(temp*(1+Rate));
    years++;
}
while(temp<=Lim);
}
printf("Years %d\n",years);
printf("Cars %ld",temp);

return 0;}
