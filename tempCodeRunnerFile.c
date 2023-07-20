#include<stdio.h>
#include<math.h>
#define PI 3.141593

int main(){
   double x, y;
   scanf("%lf%lf", &x, &y);
   double a = x/2, b = y/2;
   if(x <= 0 || y <= 0){
    printf("ERROR");
   }
   else{
    double C = PI*(3*(a + b) - sqrt((3*a + b) * (a + 3*b)));
    double S = PI*a*b;
    printf("%lf\n%lf", C, S);
   }

}