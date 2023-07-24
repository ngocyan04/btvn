#include<iostream>
using namespace std;
class ps{
	private: 
		int tu,mau;
	public: 
		void nhap(){
			cout <<" nhap tu so: ";
			cin >> tu;
			do {
				cout <<" nhap mau so: ";
				cin >> mau;
			}
			while ( mau == 0);
		}
		void xuat();
};
  void ps::xuat(){
	cout << tu <<"/"<< mau <<endl;
}
int main()
{
	ps a;
	a.nhap();
	a.xuat();
	return 0;
}