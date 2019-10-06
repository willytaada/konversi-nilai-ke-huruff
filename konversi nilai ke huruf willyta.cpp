#include <iostream>
using namespace std;

int main(){
	float nilai;
	cout<<"masukkan nilai anda = ";
	cin>>nilai;

	if(nilai>90&&nilai<=100){
		cout<<"Selamat Grade anda A";
	}
	else if(nilai>80&&nilai<=90){
		cout<<"Grade anda AB";
	}
	else if(nilai>70&&nilai<=80){
		cout<<"Grade B";
	}
	else if(nilai>60&&nilai<=70){
		cout<<"Grade anda BC ";
	}
	else if(nilai>50&&nilai<=60){
		cout<<"Grade anda C ";
	}
	else if(nilai>40&&nilai<=50){
		cout<<"Grade anda CD ";
	}
	else if(nilai>20&&nilai<=40){
		cout<<"Grade anda D ";
	}
	else if(nilai>0&&nilai<=20){
		cout<<"Grade anda E ";
	}
	 else {
		cout<< "Tolong Masukkan Nilai Dengan Benar";
	}
	return 0;
}
void petunjuk()
{
cout << "Nama	: Willyta Asmara Diya Abadi\n";
cout << "Nim	: 19051397017\n";
cout << "Prodi	: D4 Manajemen Informatika\n";
cout << "-------|Universitas Negeri Surabaya|-------\n";
cout << "==================================================\n";
cout << "\t\tPROGRAM KALKULATOR SEDERHANA\t\t\n";
cout << "'A' = nilai>90&&nilai<=100 \n";
cout << "'AB'= nilai>80&&nilai<=90 \n";
cout << "'B' = nilai>70&&nilai<=80 \n";
cout << "'BC'= nilai>60&&nilai<=70 \n";
cout << "'C' = nilai>50&&nilai<=60 \n";
cout << "'CD'= nilai>40&&nilai<=50 \n";
cout << "'D' = nilai>20&&nilai<=40 \n";
cout << "'E' = nilai>0&&nilai<=20 \n";
cout << "==================================================\n";
}
