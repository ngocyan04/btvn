#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class gv{
	private:
		char ht[30];
		int t;
		char bc[15];
		char chuyennganh[15];
		float bl;
	public:
		void nhap()
		{
			cout<<" nhap ten: ";
			fflush(stdin);
			cin.getline(ht,30);
			cout<<" nhap tuoi: ";
			cin>>t;
			cout<<"nhap bc: ";
			
			cin.getline(bc,15);
			cout<<"nhap chuyen nganh: ";
			cin.getline(chuyennganh,15);
			cout<<"nhap bac luong: ";
			cin>>bl;
		}
			float tinh()
		{
			return this->bl*610;
		}

		void xuat()
		{
			cout<<setw(10)<<" ho ten: "<<ht<<endl
				<<setw(10)<<"tuoi: "<<t<<endl
				<<setw(10)<<"bang cap: "<<bc<<endl
				<<setw(10)<<"chuyen nganh: "<<this->chuyennganh<<endl
				<<setw(10)<<"bac luong: "<<this->bl<<endl
				<<setw(10)<<"bac luong: "<<this->tinh()<<endl;
		}
		
	
	};
		void nhapdanhsach(gv a[], int &n)
		{
			cout<<" nhap danh sach "<<n<<" gv \n";
			for(int i=0;i<n;i++)
			{
				cout<<"nhap danh sach "<<endl;
				a[i].nhap();
			}
		}
		void xuatdanhsach(gv a[], int &n)
		{
			cout<<" xuat danh sach "<<n<<" gv \n";
			for(int i=0;i<n;i++)
			{
				cout<<"xuat danh sach "<<endl;
				a[i].xuat();
			}
		}
		void in(gv a[], int &n)
		{
			cout<<" danh sach nhan vien co luong duoi 2000 "<<endl;
		 for (int i=0;i<n;i++)
			{
		 	if( a[i].tinh() < 2000)
		 		{
		 		a[i].xuat();
			 	}
			}	
		}
		

int main()
{ 
 // gv a;

//h.nhap();
//	h.xuat();
 int n;
 do {
 	cout<<"nhap n: ";
 	cin>>n;
 } 
 while (n<1);
 gv a[n]; 
 nhapdanhsach(a,n); 
 xuatdanhsach(a,n);
 in(a,n);
	return 0;
}