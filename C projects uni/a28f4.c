#include <stdlib.h>
#include <stdio.h>
#include <math.h>
float discount_Percentage(int code);
int get_Code();
int product_points(int code, int final_price);

int main(){
int code,price,points=1;
double posoEkp=0.0,final_price=0.0,priceSum,ekpSum;
code=get_Code();
printf("Give me the price ");
scanf("%d",&price);
while(code!=0){
    posoEkp=price*discount_Percentage(code);
    ekpSum+=posoEkp;
    priceSum=price-posoEkp;
    final_price+=priceSum;
    points+=product_points(code,final_price);
    code=get_Code();
    if (code!=0){
    printf("Give me the price ");
    scanf("%d",&price);}

}
    printf("-------------------------------\n");
    printf("Discount percentage %.2lf\n",ekpSum);
    printf("Final price is %.2lf\n",final_price);
    printf("Points : %d\n",points);
return 0;
}

/////////////////functions////////////////

int get_Code(){
    int code;
    printf("Give me the code ");
    scanf("%d",&code);
while((code<0)||(code>2000)){
    printf("Wrong code[0-2000], try again ");
    scanf("%d",&code);
}
    return code;
}

float discount_Percentage(int code){
    if(code<=300){
        return 0.05;
    }
    else if((code>300)&&(code<=500)){
        return 0.1;
    }
    else if((code>500)&&(code<=1000)){
        return 0.15;
    }
    else
        return 0.2;
}

int product_points(int code, int final_price)
{
    int points=1;
    int extra_points;
    if((code>=1000)&&(code<=1500)){
        extra_points=ceil(final_price/5);
        points+=extra_points;
    }
    return points;
}
