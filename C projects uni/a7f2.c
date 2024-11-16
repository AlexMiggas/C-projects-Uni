#include <stdlib.h>
int main(){
long code; //if code>=1000 goto 4,5 else goto 6,7
double yearPay;
double weekPay;
int weekHour;
double hourPay;

printf("Give me the code ");
scanf("%ld",&code);
    if (code>=1000){
        printf("Give yearly pay ");
        scanf("%lf",&yearPay);
        weekPay=yearPay/52;
        printf("Your weekly pay is: %.1lf\n",weekPay);
    }
    else{
        printf("Give me your working hours every week ");
        scanf("%d",&weekHour);
        printf("and the hourly rate ");
        scanf("%lf",&hourPay);
         if(weekHour>40){
          weekPay=40*hourPay+(weekHour-40)*(hourPay+(hourPay*0.5));
         }
         else{
            weekPay=weekHour*hourPay;
         }
         printf("This is your weekly pay: %.1lf",weekPay);
    }
return 0;
}
