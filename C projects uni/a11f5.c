#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
// double temp[i][j]={5.6,5.7...... gia na mhn eisagw 30 times
int main(){
 double temp;
 int i,j;
 double Temp[10][3];
 double sumC=0.0,avg[10],allavg;
 allavg=0.0;
 //pinakas 10x3
 for(i=0;i<10;i++){
        sumC=0.0;
    for (j=0;j<3;j++){
        printf("Temp of City %d During %d 8-hour period: ",i,j);
        scanf("%lf",&temp);
        Temp[i][j]=temp;
        sumC+=temp;
        allavg+=temp;
    }
    avg[i]=sumC/3;
 }
 //ypol ethnikou mesou orou
 allavg=allavg/30;
  printf("%lf\n",allavg);
 //ypol apoklisis
 double devnat[10][3],maxdif[10];
   for(i=0;i<10;i++){
    for (j=0;j<3;j++){
            devnat[i][j]=fabs(allavg-Temp[i][j]);
    }
   }
//ypol max apoklisis
  for(i=0;i<10;i++){
        maxdif[i]=devnat[i][0]; //vazw prwth timh tou devnat
    for (j=0;j<3;j++){
            devnat[i][j]=fabs(allavg-Temp[i][j]);
            if (devnat[i][j]>maxdif[i])
                maxdif[i]=devnat[i][j];

    }

  }
  //ta print
 for(i=0;i<10;i++){
    printf("City %d avg temperature %.1lf difference %.1lf\n",i,avg[i],maxdif[i]);
 }
 return 0;}
