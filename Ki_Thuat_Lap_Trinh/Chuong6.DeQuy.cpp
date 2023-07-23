/*Đệ quy*/
#include<iostream>
using namespace std;

int numStudentsBehind(Student curr) { 
if (noOneBehind(curr)) {
return 0;
} else { 
Student personBehind = curr.getBehind(); 
return numStudentsBehind(personBehind) + 1;
} 
}


/*Phân loại đệ quy
• Đệ quy trực tiếp
• Đệ quy tuyến tính
• Đê qui nhị phân
• Đệ quy phi tuyến
• Đệ quy gián tiếp
• Đệ quy hỗ tương*/


/*Đệ quy tuyến tính
• Là đệ quy có dạng
P( ) { 
If (B) thực hiện S;
else { thực hiện S* ; gọi P }
} 
với S , S* là các thao tác không đệquy. 
• Ví dụ tính giai thừa*/
int fact(int n) {
if (n == 0) return 1; //ĐỆ QUY TUYẾN TÍNH(có if else)
else return (n * fact(n - 1)); //đệ quy
}


/*Đệ quy nhị phân
• Là đệquy có dạng

P ( ) { 
If (B) thực hiện S;
else { 
thực hiện S*; 
gọi P ; gọi P;
}
} 

với S, S* là các thao tác không đệquy. 
• Ví dụtính sốfibonacci*/
int fibo(int n) { 
if (n < 2) return 1; 
else return (fibo(n -1) + fibo(n -2));  //đệ quy nhị phân (đệ quy P và P* liên tiếp nhau)
}


/*Đệ quy phi tuyến
• Là đệ quy mà lời gọi đệ quy được thực hiện bên trong vòng lặp
P ( ) {
for (<giá tri đầu> to <giátrịcuối>) {
thực hiện S ;
if (điều kiện dừng) then thực hiện S*;
else gọi P;
} 
} 
với S, S* là các thao tác không đệ quy.*/
/*ví dụ:*/
int A(int n) {
if (n == 0) return 1 ; 
else { 
int temp = 0 ; 
for (int i = 0; i < n; i++) //Đệ quy phi tuyến(có vòng lặp)
temp = temp + (n - i) * (n - i) * A(i);
return temp; 
} 
}


/*Đệ quy tương hỗ
•Là một loại đệ
quy gián tiếp
•Trong đệ quy 
tương hỗ có 2 
hàm, và trong 
thân của hàm này 
có lời gọi của 
hàm kia, điều 
kiện dừng và giá 
tri trảvề của cả
hai hàm có thể
giống nhau hoặc 
khác nhau

KieuDuLieu TenHamX(Thamso){
if(Dieu Kien Dung) {
...;
return Gia tri tra ve;
}
...;
return TenHamX(Thamso) <Lien ket
hai ham> TenHamY(Thamso);
}
KieuDuLieu TenHamY(Thamso){
if(Dieu Kien Dung){
...;
return Gia tri tra ve;
}
...;
return TenHamY(Thamso)<Lien ket
hai ham> TenHamX(Thamso);
}
*/
/*ví dụ:
X(n) = 1, 2, 3, 5, 11, 41...
Y(n) = 1, 1, 2, 6, 30, 330...*/
void main() {
int n;
printf("\n Nhap n = ");
scanf("%d",&n);
printf( "\n X = %d " ,X(n));
printf( "\n Y = %d " , Y(n));
}
long Y(int n); //prototype cua ham y
long X(int n) {
if(n == 0) return 1;
else return X(n-1) + Y(n-1);  //đệ quy tương hỗ (TƯƠNG TÁC HỖ TRỢ GIỮA HAI HÀM ĐỆ QUY VỚI NHAU)
}
long Y(int n) {
if(n == 0) return 1;
else return X(n-1) * Y(n-1);   //đệ quy tương hỗ (TƯƠNG TÁC HỖ TRỢ GIỮA HAI HÀM ĐỆ QUY VỚI NHAU)
}


