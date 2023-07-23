#include<iostream>
using namespace std;

/*Chương 4: 
Kỹ thuật viết mã nguồn hiệu quả
*/

/*
1. Các kỹ thuật viết mã nguồn hiệu quả
*/
/*Chương trình hiệu quả
• Trước hết là giải thuật 
• Hãy dùng giải thuật hay nhất có thể
• Sau đó hãy nghĩ tới việc tăng tính hiệu quả của 
code
• Ví dụ: Tính tổng của n số tự nhiên liên tiếp kể
từ m
*/
void main(){
long n, m, i, sum;
cin >> n;
cin >> m;
sum =0;
for(i = m ; i <= m+n; i++)
sum += i;
cout << "Sum = " << sum;
}

//->Sau khi tinh chỉnhh mã nguồn
void main(){
long n, m, sum;
cin >> n;
cin >> m;
sum = (m + m+ n) * n / 2;
cout << "Sum = " << sum;
}

/*Viết chương trình hiệu quả
• Xác định nguồn gây kém hiệu quả
• Dư thừa tính toán - redundant computation
• Chủ yếu
• Trong các procedure 
• Các vòng lặp: Loops
*/
/*Khởi tạo 1 lần, dùng nhiều lần
• Before
float f(){ 
double value = sin(0.25);
}
*/
/*After:
double defaultValue = sin(0.25);
float f(){ 
double value = defaultValue; 
//
...
}*/

/*Hàm nội tuyến - Inline function*/
#include <iostream>
using namespace std;
inline int max(int a, int b){ //Hàm nội tuyến
return a > b ? a : b;
}
/*
int main() {
cout << max(3, 6) << '\n';  //Hàm nội tuyến
cout << max(6, 3) << '\n';  //Hàm nội tuyến
return 0;
}
*/


/*Macros*/
#define max(a,b) (a > b ? a : b)
/*Bạn không thể gỡ rối cho macros, nhưng với inline 
functions thì có thể. */

/*Ví dụ Macros*/
#define for(i,a,b) for(int i = a; i <= b; i++)



/*Biến tĩnh (static variables)
• Kiểu dữ liệu static tham chiếu tới global hay 'static' 
variables, chúng được cấp phát bộ nhớ khi dịch
compile-time.*/
int int_array[100];
int A() { 
static float float_array[100]; //biến tĩnh
double double_array[100]; 
char *pchar;
pchar = (char *)malloc(100);
return (0); 
}

