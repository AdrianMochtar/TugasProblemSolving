#include <iostream>;
using namespace std;

int main(){
	int luas,lebar,alas,tinggi;
	char bidang;
	
	cout << "Pilih Jenis Bidang datar (P/S)"; cin >> bidang;
	
	if (bidang=='p'){
		cout <<"masukkan tinggi = "; 
			cin >> tinggi;
		cout << "masukkan lebar = "; 
			cin >> lebar;
		luas = tinggi*lebar;
		cout << "luas persegi panjang adalah = " << luas;
		
	}else if (bidang=='s'){
		cout << "masukkan alas = "; 
			cin >> alas;
		cout << "masukkan tinggi = "; 
			cin >> tinggi;
		luas = 0.5*alas*tinggi;
		cout << "luas segitiga adalah = " << luas;
	}
}
