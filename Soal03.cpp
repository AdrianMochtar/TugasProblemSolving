#include <iostream>
using namespace std;

int main(){
	int g = 5000, gjp = 500000;
	int waktu,gl,ga,gtot,tax;
	cout << "shift kerja lembur minggu ini = "; cin >> waktu;
	if (waktu>0){
		gl=waktu*g;
		ga=gl*1.5;
		tax=ga*15/100;
		gtot=gjp+ga-tax;
		
		cout << "Gaji Anda Minggu Ini = Rp." << gtot << endl;
}else{
		tax=gjp*15/100;
		gtot=gjp-tax;
		
		cout << "Gaji Anda Minggu Ini = Rp." << gtot << endl;
	}
}
