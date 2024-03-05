

/*Chương 3: Hàm
*/

#include<bits/stdc++.h>
using namespace std;

/*1. Truyền tham trị, tham biến và tham số
ngầm định
*/

/*Truyền tham chiếu*/
//Hàm nhận tham số là con trỏ
void Swap(int *X, int *Y) {
int Temp = *X;
*X = *Y;
*Y = Temp;
}

int main(){
    int A = 10, B = 20;

    //Để hoán đổi giá trị hai biến A và B 
    Swap(&A, &B);

    cout << "A = " << A << endl << "B = " << B;
/*A = 20
B = 10*/
}
/*Luu y:

C chi co tham tri (Neu co truyen gia tri vao con tro thi C cung chi la tham tri dia chi)
C++ co ca tham tri va tham chieu
*/

/*Khi một hàm 
trả về một 
tham chiếu, 
chúng ta có 
thể gọi hàm 
ở phía bên
trái của một 
phép gán.
*/


/*Tham số ngầm định
• Định nghĩa các giá trị tham số mặc định cho các
hàm
*/
//• Ví dụ
void MyDelay(long Loops = 1000){
    for(int i = 0; i < Loops; ++i);
}
/*
• MyDelay();  // Loops có giá trị là 1000
• MyDelay(5000);  // Loops có giá trị là 5000
*/


/*Đa năng hóa hàm (Overloading)

VD:
C:                                          C++:

int abs(int i);                             int abs(int i);
long labs (long l);                         long abs(long l);
double fabs(double s);                       double abs(double s);

*/

//VD2:
#include <iostream>
#include <math.h>

int MyAbs(int X){     //Da nang hoa ham
return abs(X);
}
long MyAbs(long X){     //Đa năng hóa hàm
return labs(X);
}

/*Đa năng hoá toán tử*/
/*
• Vi dụ: thực hiện các phép cộng, trừ số
phức 
Trong C: Cần phải xây dựng các hàm 
AddSP(), TruSP()

Không thể hiện được phép cộng và trừ
cho các biểu thức như: a=b+c-d+e+f-h-k
*/
//VD1:
#include <stdio.h> 
struct SP {
double real;
double img; 
}; 
SP SetSP(double real, double img);  //Đa năng hoá toán tử
SP AddSP(SP C1,SP C2);         //Đa năng hoá toán tử
SP SubSP(SP C1,SP C2);      //Đa năng hoá toán tử
void DisplaySP(SP C);       //Đa năng hoá toán tử
int main(void) { 
SP C1,C2,C3,C4;
C1 = SetSP(1.0,2.0);       //Đa năng hoá toán tử
C2 = SetSP(-3.0,4.0);       //Đa năng hoá toán tử
cout << "\nSo phuc thu nhat:";   DisplaySP(C1); 
cout << "\nSo phuc thu hai:";    DisplaySP(C2); 
C3 = AddSP(C1,C2);          //Đa năng hoá toán tử
C4 = SubSP(C1,C2);      //Đa năng hoá toán tử
cout << "\nTong hai so phuc nay:"; DisplaySP(C3); 
cout << "\nHieu hai so phuc nay:"; DisplaySP(C4); 
return 0; 
}
SP SetSP(double real, double img) { 
SP tmp; 
tmp.real = real; tmp.img = img; 
return tmp; 
} 
SP AddSP(SP C1,SP C2) { 
SP tmp; 
tmp.real = C1.real + C2.real; 
tmp.img = C1.img + C2.img; 
return tmp; 
} 
SP SubSP(SP C1,SP C2) { 
SP tmp; 
tmp.real = C1.real - C2.real; 
tmp.img = C1.img - C2.img; 
return tmp; 
} 
void DisplaySP(SP C) { 
cout << C.real << " i " << C.img; 
} 

//VD2:
 SP SetSP(double real, double img); //Đa năng hoá toán tử
void DisplaySP(SP C); 
SP operator + (SP C1, SP C2); //Đa năng hoá toán tử
SP operator - (SP C1, SP C2); //Đa năng hoá toán tử
int main() { 
SP C1,C2,C3,C4;  //Đa năng hoá toán tử
C1 = SetSP(1.1,2.0); //Đa năng hoá toán tử
C2 = SetSP(-3.0,4.0);//Đa năng hoá toán tử
}



/*Con trỏ hàm (Khong thi)
*/


/*Khái quát hóa hàm (Function templates)
*/

/*Ví dụ muốn tìm giá trị lớn nhất trong hai số:
• Đối với hai số nguyên:
*/
int maxval(int x, int y){
return (x > y) ? x : y;
}

/*• Đối với hai số thực:
*/
double maxval(double x, double y){
return (x > y) ? x : y;
}



/*Từ khóa auto

• Đối với biến (từ C++11): auto xác định kiểu của biến được khởi tạo một cách tự động từ giá trị khởitạo của biến.*/
auto d { 5.0 }; // d will be type double
auto i { 1 + 2 }; // i will be type int
//• Đối với hàm (từ C++14): auto tự động xác định kiểu trả về của hàm dựa vào câu lệnh return.
auto add(int x, int y) -> int;
auto divide(double x, double y) -> double;
auto printSomething() -> void;
auto generateSubstring(const std::string &s, int start, int len) -> std::string;






