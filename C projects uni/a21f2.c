#include <stdlib.h>

int main(){
float epidoma;
int pay;
int numKids;

printf("Give your basic pay ");
scanf("%d",&pay);
printf("Give the number of your children ");
scanf("%d",&numKids);
if (numKids==1){
epidoma=pay*0.04;}
else if (numKids==2){
epidoma=pay*0.09;}
else if (numKids==3){
epidoma=pay*0.15;}
else{
epidoma= (pay*0.15)+((numKids-3)*(pay*0.04));}
printf("Your welfare check is %.2f",epidoma);
return 0;
}
