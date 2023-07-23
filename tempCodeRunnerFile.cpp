#include<iostream>
using namespace std;

int main(){
    /*Cap phat bo nho*/
    // int x = 10;
    // int *p;
    // p = &x;
    // cout << (unsigned long int)&x << endl;
    // cout << (unsigned long int)p << endl;
    // cout << (unsigned long int)*p << endl;
    // cout << (unsigned long int)&p << endl;
    // cout << (unsigned long int)&*p << endl;


    // int y = 100;
    // int *q;
    // q = &y;
    // int *z;
    // z = p - q;
    // cout << *z;
    // int a[10] = {1, 2,3,4,5,7,8,9,10,6};
    // int *p;
    // p = &a[10];
    // for(int i=0;i<10;i++){
    //     cout << *(p + i) << endl;
    // }
    // delete(p);


    //Con trỏ tới con trỏ
    // int x = 10;
    // int *p1;
    // p1 = &x;
    // int **p2;
    // p2 = &p1;

    // cout << x << endl << (int long)p1 << endl << (int long)p2;

    /*Mang 2 chieu*/
    //  M[i][k] = *(*(M + i) + k)
    /*Trong đó: 
▫ M+i là địa chỉcủa phần tửthứ i của mảng
▫ *(M+i) cho nội dung phần tử trên
▫ *(M+i)+k là địa chỉphần tử [i][k]
*/
const int row = 3, col = 3;
int array[row][col] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//in ra danh sach mang nhung chi co 1 chieu
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout << array[i][j];
    }
}

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        //Dung con tro con tro in ra ma tran (Mang hai chieu)
        cout << *(*(array + i) + j) << endl;
    }
}


}
