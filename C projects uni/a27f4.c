#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

long encode(long N);
bool check(long EN);

int main(){
long upperlim;
long lowerlim,i;
printf("Give me the lower and upper limits ");
scanf("%ld %ld",&lowerlim,&upperlim);
    for(i=lowerlim;i<=upperlim;i++){
        printf("Code:%d Encoding:%d",i,encode(i));
        if (check(encode(i))==true){
            printf (" isValid=Yes\n");}
        else{
            printf(" isValid=No\n");}
    }

return 0;}

///////////////////functions///////////////////

long encode(long N){
long EN,chdig,dig1,dig2;
chdig=(98-(N*100)%97)%97;
dig1=chdig/10;
dig2=chdig%10;
EN=((((N*10)+dig1)*10)+dig2);
return EN;}

bool check(long EN){
if(EN%97==1){
    return true;}
else{
    return false;}
}
