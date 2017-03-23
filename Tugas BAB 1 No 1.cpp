//Nama : Muhammad Hanif Azhar Efendi
//NIM : 165150300111055
//Kelas : Teknik Komputer D

#include <iostream>
using namespace std;
int i,j;
void jumlah(int p1[], int p2[], int x,int z);
void kurang(int p1[], int p2[], int x,int z);
void kali(int p1[], int p2[], int x,int z);
void turunan(int p1[], int p2[], int x, int z);
void hitung(int hs[], int x);

int main(){
	int i1,i2,pil;
	do{
		cout<<"==============================================================="<<endl;
		cout<<"================ Program Aritmatika Polinomial ================"<<endl;
		cout<<"==============================================================="<<endl<<endl;
		cout<<"---------------- Polinom Pertama ----------------"<<endl;
		cout<<"Masukkan pangkat x tertinggi yang diinginkan : ";
		cin>>i1;
		int p1[i1];
		cout<<endl<<"Masukkan koofisien x"<<endl;
		for(i=0;i<=i1;i++){
			cout<<"Koofisien x pangkat "<<i<<" : ";
			cin>>p1[i];
		}
		cout<<endl<<"Polinom pertama";
		hitung(p1,i1);
		cout<<endl<<endl<<"---------------- Polinom Kedua ----------------"<<endl;
		cout<<"Masukkan pangkat x tertinggi yang diinginkan : ";
		cin>>i2;
		int p2[i2];
		cout<<endl<<"Masukkan koofisien x"<<endl;
		for(i=0;i<=i2;i++){
			cout<<"Koofisien x pangkat "<<i<<" : ";
			cin>>p2[i];
		}
		cout<<endl<<"Polinom kedua";
		hitung(p2,i2);
		cout<<endl<<endl<<"Menu :"<<endl;
		cout<<"1. Penjumlahan (P1+P2)"<<endl;
		cout<<"2. Pengurangan (P1-P2)"<<endl;
		cout<<"3. Perkalian (P1*P2)"<<endl;
		cout<<"4. Turunan P1 dan P2"<<endl;
		cout<<"5. Keluar"<<endl;
		cout<<"Masukkan pilihan Anda : ";
		cin>>pil;
		switch(pil){
		case 1:
				cout<<"Hasilnya adalah : ";
				jumlah(p1,p2,i1,i2);
				cout<<endl<<endl;
				break;
		case 2:
				cout<<"Hasilnya adalah : ";
				kurang(p1,p2,i1,i2);
				cout<<endl<<endl;
				break;
		case 3:
				cout<<"Hasilnya adalah : ";
				kali(p1,p2,i1,i2);
				cout<<endl<<endl;
				break;
		case 4:
				turunan(p1,p2,i1,i2);
				cout<<endl<<endl;
				break;
		case 5:
				break;
		default:
				cout<<"Maaf pilihan yang Anda masukkan tidak tersedia"<<endl<<endl;
				break;
		}
	}
	while (pil!=5);
	cout<<"Terima kasih, program dihentikan";
	cout<<endl;
	system("Pause");
	return 0;
}

void hitung(int hs[], int x){
	cout<<endl<<"Polinom = ";
    for(i=0;i<=x;i++){
        if(i!=x){
            cout<<hs[i]<<"x^"<<i<<" + ";
        }
        else{
            cout<<hs[i]<<"x^"<<i;
        }
    }
}

void jumlah(int p1[], int p2[], int x, int z) {
	int n;
	if(x<=z){
		n=z;
	}
	else{
		n=x;
	}
	if(n==x){
		for(i=z+1;i<=n;i++){
			p2[i]=0;
		}
	}
	else if(n==z){
		for(i=x+1;i<=n;i++){
			p1[i]=0;
		}
	}
	for(i=0;i<=n;i++){
		p1[i]=p1[i]+p2[i];
	}
	hitung(p1,n);
}

void kurang(int p1[], int p2[], int x, int z){
	int n;
	if(x<=z){
		n=z;
	}
	else{
		n=x;
	}
	if(n==x){
		for(i=z+1;i<=n;i++){
			p2[i]=0;
		}
	}
	else if(n==z){
		for(i=x+1;i<=n;i++){
			p1[i]=0;
		}
	}
	for(i=0;i<=n;i++){
		p1[i]=p1[i]-p2[i];
	}
	hitung(p1,n);
}

void kali(int p1[], int p2[], int x, int z){
	int a=0,h1[100],h2[100];
	for(i=0;i<=z;i++){
		for(j=0;j<=x;j++){
			h1[a]=p2[j]*p1[i];
			h2[a]=i+j;
			a++;
		}
	}
	for(i=0;i<a;i++){
		if(i!=a-1){
			cout<<h1[i]<<"x^"<<h2[i]<<" + ";
		}
		else{
			cout<<h1[i]<<"x^"<<h2[i];
		}
	}
}

void turunan(int p1[], int p2[], int x, int z){
	for(i=0;i<=x;i++){
		p1[i]=p1[i+1]*(i+1);
	}
	cout<<"Turunan dari polinom pertama adalah : ";
	for(i=0;i<x;i++){
		if(i!=x-1){
			cout<<p1[i]<<"x^"<<i<<" + ";
		}
		else{
			cout<<p1[i]<<"x^"<<i;
		}
	}
	for(i=0;i<=z;i++){
		p2[i]=p2[i+1]*(i+1);
	}
	cout<<endl<<"Turunan dari polinom kedua adalah : ";
	for(i=0;i<z;i++){
		if(i!=z-1){
			cout<<p2[i]<<"x^"<<i<<" + ";
		}
		else{
			cout<<p2[i]<<"x^"<<i;
		}
	}
}
