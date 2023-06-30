#include<stdio.h>
#include<math.h>
#define PI 3.141592
#define e 2.71828182846


double a(double x){
    return sqrt(pow(2, x) + PI);
}

double b(double x){
    log(pow(e,(x + 1.23)) + 1);
}
/*còn 1 hàm nữa mà dell biết hàm gì*/
double log7(double x) {
    return log(x) / log(7);  // Sử dụng quy tắc chuyển đổi cơ số logarithm
}

int main(){
    double x;
    scanf("%lf", &x);

    double A = (cos(3*a(x)) + pow(2*pow(x, 3) + x + 1, 1/5.)) / log7(pow(3, pow(x,2)) + 2.14*b(x));
    printf("%lf", A);
}