//author: Nicolas Lee Wen Han

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char**argv){
double sex=0;
double weight=0;
double height=0;
double age=0;
double bmr1=0;
double bmr2=0;

printf("Enter subject's gender (1=female, 2=male): ");
scanf("%lf",&sex);
if(sex!==1 || sex!==2){
  printf("Error found for gender");
}

printf("Enter the subject's weight (kg): ");
scanf("%lf",&weight);
if(weight<=0){
  printf("Error found for weight");
}

printf("Enter the subject's height (cm): ");
scanf("%lf",&height);
if(height<=0){
  printf("Error found for height");
}

printf("Enter the subject's age (years): ");
scanf("%lf",&age);
if(age<=0){
  printf("Error found for age");
}

if(sex=1){
  bmr1=655.1+(9.6*weight)+(1.8*height)-(4.7*age);
  printf("Subject's BMR: %f kCal/day",bmr1);
}
if(sex=2){
  bmr2=66.7+(13.7*weight)+(5*height)-(6.8*age);
  printf("Subject's BMR: %f kCal/day",bmr2);
}

}
