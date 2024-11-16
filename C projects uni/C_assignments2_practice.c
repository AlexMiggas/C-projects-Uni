#include<stdio.h>
#include <stdlib.h>

int main(){

//EXERCISE 3 BINARY FULL-ADDER
int A,B,Cln;
int sum, carry,sum1,carry1=0,carry2=0;
printf("Give me A, B and the Carry");
scanf("%d %d %d",&A,&B,&Cln);
if ((A==0)&&(B==0)){
    sum1=A+B;
    sum=sum1+Cln;
    carry=0;
    }
else if(((A==0)&&(B==1))||((A==1)&&(B==0))){
        if(Cln==0){
            sum1=A+B;
            sum=sum1+Cln;
            carry=0;}
        else{
            sum1=A+B;
            sum=sum1;
             carry=Cln;}
}
else{ //A=1 B=1
        if(Cln==0){
    sum1=1;
    carry1=1;
    sum=sum1+Cln;
    carry=(carry1||carry2);
    }
    else{
        sum1=1;
        carry1=1;
        sum=1;
        carry2=1;
        carry=(carry1||carry2);

    }
}
printf("|A=%d|B=%d|Cln=%d|Sum=%d|Carry=%d|",A,B,Cln,sum,carry);

return 0;
}
