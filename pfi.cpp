#include <iostream>
#include <iomanip>

using namespace std;

int main()
{ 	long double toplam,g=0;
	long double ptc=0, kg=0, ptgpts=0, tgpts=0, tc=0;
	
	cout<<"Egitim hayatiniz boyu almaniz toplam kredi sayisi:";
	cin>>toplam;
	
	cout<<"Student info : Semester: 2019-2020 Spring / COVID-19 Pandemic sayfasini aciniz ve bilgileri giriniz: "<<endl;
	
	
	cout<<"Total Credit:";
	cin>>tc;
	cout<<"Total GR. PTS:";
	cin>>tgpts;
	cout<<"Prev total credit:";
	cin>>ptc;
	cout<<"Prev total GR. PTS:";
	cin>>ptgpts;

	cout<<"Tabloyu ne not araligi ile gormek istersiniz (0.25, 0.5 gibi):";
	cin>>g;	


	cout<<"KALAN: Kalan egitim hayatinizda kac ortalama yaparsaniz"<<endl;
	cout<<"PFSiz: PF yapmazsaniz mezuniyet ortalamaniz"<<endl;
	cout<<"PFLi: PF yaparsaniz mezuniyet ortalamaniz"<<endl;
	
cout<<"KALAN     PFSiZ     PFLi"<<endl;
		
	for(int i=0; i<((4/g)+1); i++)
	{
		long double kalan=i*g;
		kg=kalan*(toplam-ptc-tc);
		cout<<setprecision(2)<<fixed<<kalan<<setw(10)<<(tgpts+ptgpts+kg)/toplam<<setw(10)<<(ptgpts+kg)/(toplam-tc)<<endl;
		
		
	}
	
	
	
	}
