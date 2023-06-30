#include <iostream>
#include <string>

using namespace std;

class HocSinh {
   private:
      string ten;
      int tuoi;
      float diem;

   public:
      HocSinh(string ten, int tuoi, float diem) {
         this->ten = ten;
         this->tuoi = tuoi;
         this->diem = diem;
      }

      void inThongTin() {
         cout << "Ten: " << ten << endl;
         cout << "Tuoi: " << tuoi << endl;
         cout << "Diem: " << diem << endl;
      }

      float getDiem() {
         return diem;
      }

};

int main() {
   string ten;
   int tuoi;
   float diem;

   cout << "Nhap ten hoc sinh: ";
   cin >> ten;
   cout << "Nhap tuoi hoc sinh: ";
   cin >> tuoi;
   cout << "Nhap diem hoc sinh: ";
   cin >> diem;

   HocSinh hs(ten, tuoi, diem);

   hs.inThongTin();

   return 0;
}