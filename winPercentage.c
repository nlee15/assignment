//author: Nicolas Lee Wen Han

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char**argv){
double RS=atof(argv[1]);
double RA=atof(argv[2]);
double games=atof(argv[3]);
double actualwins=atof(argv[4]);
double base=0;
double p=0;
double p1=0;
double p2=0;
double winpercentage1=0;
double winpercentage2=0;
double winpercentage3=0;
double winpercentage4=0;
double predictW=0;
double predictL=0;
double error=0;
double predictW1=0;
double predictL1=0;
double error1=0;
double predictW2=0;
double predictL2=0;
double error2=0;
double predictW3=0;
double predictL3=0;
double error3=0;

for(p=2){
winpercentage1=(pow(RS,p))/((pow(RS,p))+(pow(RA,p)));
predictW=winpercentage1%*games;
predictL=games-predictW;
error=actualwins-predictW;

}

for(p=1.83){
  winpercentage2=(pow(RS,p))/((pow(RS,p))+(pow(RA,p)));
  predictW1=winpercentage2%*games;
  predictL1=games-predictW1;
}

for(p1=1.5*(log10((RS+RA)/G))+0.45){
  winpercentage3=(pow(RS,p1))/((pow(RS,p1))+(pow(RA,p1)));
  predictW2=winpercentage3%*games;
  predictL2=games-predictW2;
}
for(p2=0){
base =(RS+RA)/games;

p2=pow(base,0.287);

winpercentage4=(pow(RS,p2))/((pow(RS,p2))+(pow(RA,p2)));
predictW3=winpercentage4%*games;
predictL3=games-predictW3;
}

printf("p value  Win Percentage  Predicted Wins  Predicted Loss  Error\n");
printf("2.00     %f              %f              %f              %f   \n",winpercentage1,predictW,predictL,Error);
printf("1.83     %f              %f              %f              %f   \n",winpercentage2,predictW1,predictL1,Error1);
printf("%f       %f              %f              %f              %f   \n",winpercentage3,predictW2,predictL2,Error2);
printf("%f       %f              %f              %f              %f   \n",winpercentage4,predictW3,predictL3,Error3);

}
