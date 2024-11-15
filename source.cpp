#include <iostream>

using namespace std;

<<<<<<< HEAD
int tinhTong(int a, int b)
=======
int tinhTong(int a, int b);
>>>>>>> 2ffa9bace79f89c97ae2ff4ce3361898ef5117f7
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
<<<<<<< HEAD
	cout<<"Hieu la " << tinhHieu(a,b) << endln;

	cout << "Thuong la: " << tinhThuong(a,b);
	cout << "Tich la: " << tinhTich(a, b);
=======
	cout << "Tich la: " << tinhTich(a, b);
	cout<<"Hieu la " << tinhHieu(a,b) << endln;
>>>>>>> 2ffa9bace79f89c97ae2ff4ce3361898ef5117f7
}