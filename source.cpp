#include <iostream>

using namespace std;

int tinhTong(int a, int b);
int tinhTich(int a, int b);
int tinhHieu(int a, int b){
  return a-b;
}
int tinhThuong(int a, int b){
	return a/b;
}

void main()
{
cout<<"Nhap a";
cin>>a;

cout<<"Hieu la " << tinhHieu(a,b) << endln;

cout << "Thuong la: " << tinhThuong(a,b);

}