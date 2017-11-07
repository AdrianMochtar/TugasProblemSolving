#include <iostream>
using namespace std;

int main(){
	int tinggi,berat;
	cout << "Masukkan Berapa Tinggi Anda = "; cin >> tinggi;
	cout << "Masukkan Berapa Berat Anda = "; cin >> berat;
		if (berat<tinggi/2.5){
			cout << "Underweight";
		}else if(tinggi/2.5 <= berat && berat <= tinggi/2.3){
			cout << "Normal";
		}else if(tinggi/2.3 < berat){
			cout << "Overweight";
		}
}
