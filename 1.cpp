#include<stdio.h>
#include<math.h>

double f(double x){
    return pow(x,7) + 5*pow(pow(x,5) + 3*pow(x, 3) + 2, 1/3.) + 12; // Có dấu chấm đằng sau 1/3 là để ép kiểu kiểu 1/3 về số thực
}

int main(){
    double a, b, c;
    printf("Nhap vao 3 so thuc a, b ,c: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    printf("\n");
    
    double sum = f(a) + f(b) + f(c);
    printf("Trung binh cong cua f(a), f(b), f(c) la: %lf", sum/3);

}