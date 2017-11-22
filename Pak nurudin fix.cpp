#include <iostream>

using namespace std;

int input[10], i;

void data() {
	for (i = 0; i < 10; i++){
		cout << "Data ke-" << i + 1 << " : " << input[i] << endl;
	}
}

void maks(){
	int maks=input[0],rata,total=0;
	for (i = 0; i < 10; i++){
		if (maks<input[i]){
			maks = input[i];
		}
		total += input[i];
		rata = total / 5;
	}
	cout << "Data Terbesar    : " << maks << endl;
	cout << "Rata - rata Data : " << rata << endl;
}

void cari(){
	int cari,a;

	cout << "Cari Data : ";
	cin >> cari;
	for (i = 0; i < 10; i++){
		if (cari == input[i]){
			cari = i;
			a = 1;
		}
	}
	
	if (a == 1){
		cout << "Data yang anda cari terletak pada array ke-" << cari << endl;
	}
	else 
	{
		cout << "Data yang anda masukkan salah!\n";
	}
	
}

void bil(){
	cout << "Data Genap : \n";
	for (i = 0; i < 10; i++){		
		if (input[i] % 2 == 0){ 			
			cout << input[i] << " "; 
		}
	}
	cout << "\n\nData Ganjil : \n";
	for (i = 0; i < 10; i++){
		if (input[i] % 2 != 0){
			cout << input[i] << " ";
		}
	}
	cout << endl;
}

int main(){
	int menu;

	for (i = 0; i < 10; i++){
		cout << "Masukkan Data "<<i+1<<" : ";
		cin >> input[i];
	}
	
	system("cls");
	do{
		cout << "0. Exit\n";
		cout << "1. Tampilkan data.\n";
		cout << "2. Tampilkan data terbesar dan rata - rata.\n";
		cout << "3. Cari Data.\n";
		cout << "4. Tampilkan data ganjil dan genap.\n";
		cout << "Menu : ";
		cin >> menu;

		switch (menu)
		{
			case 0:
			cout << "Anda berhasil keluar!\n";
				break;
			case 1:
				data();
				break;
			case 2:
				maks();
				break;
			case 3:
				cari();
				break;
			case 4:
				bil();
				break;
		default: cout << "Data yang anda masukkan salah!\n";
			break;
		}

	} while(menu!=0);
	
	
	system("pause");
}
