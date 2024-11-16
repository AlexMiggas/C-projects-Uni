#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int total(int n);
int main(){
    int num,k;

    printf("Give me a number between 11 and 99 ");
    scanf("%d",&num);
    while ((num<11)||(num>99)){
        printf("Limit exceeded, give me a number between 11 and 99 ");
        scanf("%d",&num);
    }
    k=total(num);
    printf("Total of 10 %d \n",total(10));
    printf("Total of %d %d\n",num,k); //alternatively printf("total of%d %d",num,total(num));
    printf("Total of 100 %d\n",total(100));

return 0;
}

///////////////// functions //////////////////
int total(int n){
    int i,sum=0;
    for (i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
