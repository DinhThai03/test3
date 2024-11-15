#include <iostream>

using namespace std;

int tinhTong(int a, int b);
int tinhTich(int a, int b);
int tinhHieu(int a, int b){
  return a-b;
}

void main()
{
cout<<"Nhap a";
cin>>a;
cout<<"Nhap b";
cin>>b;
cout<<"Hieu la " << tinhHieu(a,b) << endln;

}