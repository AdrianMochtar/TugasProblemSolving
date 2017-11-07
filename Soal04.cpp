#include <iostream>
using namespace std;

int main(){
	int x;
	cout << "Input Angka = "; cin >> x;
	
	if (x>0){
		cout<<" ini bilangan Positif";
	}else if(x<0){
		cout<<" ini bilangan Negatif";
	}else if(x==0){
		cout<<" ini bilangan Nol";
	}
}
