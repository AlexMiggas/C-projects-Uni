#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int gcd(int a, int b);
int phi(int N);

int main(){
int X,i,sumPhi=0;
printf("Give me the number X ");
scanf("%d",&X);
for(i=1;i<=X;i++){
printf("phi(%d)=%d\n",i,phi(i));
}


return 0;}

////////////// functions /////////////////
int gcd(int n1, int n2){
    if (n1==0){
    return n2;
    }
    if (n2==0){
    return n1;
    }
if (n1>=n2){
    return(gcd(n1%n2,n2));
}
else{
    return(gcd(n2%n1,n1));
}

    }

int phi(int N){
    int n,sumphi=0;
for(n=1;n<=N;n++){
if (gcd(n,N)==1)
 sumphi+=1;
}
return sumphi;
}
