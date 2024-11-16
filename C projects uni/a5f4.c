#include<stdio.h>
#include <stdlib.h>
#include<stdbool.h>
bool IsArmstrong(int a);
int Sum_Cube(int a);
int Cube(int d);

int main(){
    int i;
for(i=0;i<=999;i++){
        if(IsArmstrong(i)==true)
            printf("The number is an Armstrong: %d \n", i);

}
return 0;}
/////////////////////////// functions ////////////////////////////////////

int Sum_Cube(int a){
    //diaxwrizw psifia arithmou
    int sum;
int dig1=a/100; //px 153 tha paei 1
int dig2=((a%100)/10); // to 53 ta paei 5
int dig3=((a%100)%10); // 3
sum=Cube(dig1)+Cube(dig2)+Cube(dig3);

return sum;
}


int Cube(int d){
int cube=1;
int i;
for(i=1;i<=3;i++){
    cube=cube*d;
}
return cube;
}

bool IsArmstrong(int a){
    if (Sum_Cube(a)==a)
        return true;
    else
        return false;
}
