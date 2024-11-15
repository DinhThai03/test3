#include <iostream>

using namespace std;

int tinhTong(int a, int b);
int tinhTich(int a, int b)
{
	return a * b;
}
int tinhHieu(int a, int b){
  return a-b;
}
int tinhThuong(int a, int b){
	return a/b;
}


void main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "nhap b:";
	cin >> b;


	cout << "Thuong la: " << tinhThuong(a,b);
	cout << "Tich la: " << tinhTich(a, b);
	cout<<"Hieu la " << tinhHieu(a,b) << endln;
}