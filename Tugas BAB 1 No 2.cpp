//Nama : Muhammad Hanif Azhar Efendi
//NIM : 165150300111055
//Kelas : Teknik Komputer D

#include <iostream>
using namespace std;
int a1,a2,a3,a4;
void jumlah();
void kurang();
void kali();
void bagi();
struct bil{
	int a,b,c,d;
}bil;

int main(){
	int pil;
	do{
		cout<<"==============================================================="<<endl;
		cout<<"================== Program Bilangan Kompleks =================="<<endl;
		cout<<"==============================================================="<<endl<<endl;
		cout<<"Masukkan bilangan A : ";
		cin>>bil.a;
		cout<<"Masukkan bilangan B : ";
		cin>>bil.b;
		cout<<"Masukkan bilangan C : ";
		cin>>bil.c;
		cout<<"Masukkan bilangan D : ";
		cin>>bil.d;
		cout<<endl<<"Menu :"<<endl;
        cout<<"1. Penjumlahan"<<endl;
		cout<<"2. Pengurangan"<<endl;
		cout<<"3. Perkalian"<<endl;
		cout<<"4. Pembagian"<<endl;
		cout<<"5. Keluar"<<endl;
		cout<<"Masukkan pilihan Anda : ";
		cin>>pil;
		switch (pil){
			case 1:
				jumlah();
				cout<<endl<<endl;
				break;
			case 2:
				kurang();
				cout<<endl<<endl;
				break;
			case 3:
				kali();
				cout<<endl<<endl;
				break;
			case 4:
				bagi();
				cout<<endl<<endl;
				break;
			case 5:
				break;
			default:
				cout<<"Maaf pilihan yang Anda masukkan tidak tersedia";
				cout<<endl<<endl;
				break;
		}
	}
	while(pil!=5);
	cout<<"Terima kasih, program dihentikan"<<endl;
	system("Pause");
	return 0;
}

void jumlah(){
	a1 = (bil.a + bil.c);
	a2 = (bil.b + bil.d);
	cout<<"Hasil penjumlahan dari ("<<bil.a<<" + "<<bil.b<<"i) + ("<<bil.c<<" + "<<bil.d<<"i) = ("<<bil.a<<" + "<<bil.c<<") + ("<<bil.b<< " + "<<bil.d<<")i adalah "<<a1<<" + "<<a2<<"i";
}

void kurang(){
	a1 = (bil.a - bil.c);
	a2 = (bil.b - bil.d);
	cout<<"Hasil pengurangan dari ("<<bil.a<<" + "<<bil.b<<"i) - ("<<bil.c<<" + "<<bil.d<<"i) = ("<<bil.a<<" - "<<bil.c<<") + ("<<bil.b<< " - "<<bil.d<<")i adalah "<<a1<<" + "<<a2<<"i";
}

void kali(){
	a1 = (bil.a*bil.c) - (bil.b*bil.d);
	a2 = (bil.a*bil.d) + (bil.b*bil.c);
	cout<<"Hasil perkalian dari ("<<bil.a<<" + "<<bil.b<<"i) * ("<<bil.c<<" + "<<bil.d<<"i) = [("<<bil.a<<" * "<<bil.c<<") - ("<<bil.b<< " * "<<bil.d<<")] + [("<<bil.a<<" * "<<bil.d<<") + ("<<bil.b<<" * "<<bil.c<<")]i adalah "<<a1<<" + "<<a2<<"i";
}

void bagi(){
	a1 = ((bil.a*bil.c) + (bil.b*bil.d));
	a2 = (bil.a*bil.a) + (bil.b*bil.b);
	a3 = ((bil.b*bil.c) - (bil.a*bil.d));
	a4 = (bil.c*bil.c) + (bil.d*bil.d);
	cout<<"Hasil pembagian dari ("<<bil.a<<" + "<<bil.b<<"i) / ("<<bil.c<<" + "<<bil.d<<"i) = [("<<bil.a<<" * "<<bil.c<<") + ("<<bil.b<< " * "<<bil.d<<") / ("<<bil.a<<" * "<<bil.a<<") + ("<<bil.b<<" * "<<bil.b<<")] + [("<<bil.b<<" * "<<bil.c<<") - ("<<bil.a<< " * "<<bil.d<<") / ("<<bil.c<<" * "<<bil.c<<") + ("<<bil.d<<" * "<<bil.d<<")]i adalah ("<<a1<<" / "<<a2<<") + ("<<a3<<" / "<<a4<<")i";
}
