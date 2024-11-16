#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int f(int x);
int g(int x,int y);


int main(){
    int x,y;
    printf("Give me the values of x,y ");
    scanf("%d %d",&x,&y);
    printf("f(x)=f(%d)=%d\n",x,f(x));
    printf("g(x,y)=g(%d,%d)=%d\n",x,y,g(x,y));
    printf("f(g(x,y)=f(g(%d,%d))=%d\n",x,y,f(g(x,y)));

return 0;
}

////////////////// functions ////////////////////

int f(int x){
    if(x>0){
       return x+2;
    }
    else{
        return x*(-3)+7;
    }
}

int g(int x,int y){
    if ((x>0)&&(y>0)){
        return x-y;
    }
    else{
        return x*(7)-5;
    }
}
