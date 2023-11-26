#include <iostream>
#include <string>
#include <windows.h> 
#include <unistd.h>

using namespace std;

Dashboard(){
	system("color 70");
	
	int pilihan;
		
		cout << "\t Toko Baju Indonesia \t" << endl;
		cout << "\t=====================\t" << endl;
		cout << "Selamat Datang Di Halaman Utama Toko Baju" << endl;
		cout << "======= =========================== =====" << endl;

		cout << "1. Halaman Login" << endl;
		cout << "2. Exit Application" << endl;
		cout << "Pilih Kode : "; cin >> pilihan;
		
		switch(pilihan){
			case 1 :
				cout << "Anda sedang beralih ke Halaman Berikutnya ..." << endl;
				system("cls");
				sleep(3);
				void login();
			break;
			
			case 2 :
				system("cls");
				sleep(3);
				system("exit");
			break;
			
			default :
				system("cls");
				sleep(3);				
				void Dashboard();
			break;
		}
			
	system("cls");
}

login(){
	string username;
	string password;
	
	cout << "\t\t\t\t\t Toko Baju Indonesia \t" << endl;
	cout << "\t\t\t\t\t=====================\t" << endl;
	cout << "\t\t\tSelamat Datang Di Halaman Utama Login Toko Baju" << endl;
	cout << "\t\t\t======= ============================= =========" << endl;
	cout << endl;
	cout << "Enter your username : ";
	cin >> username;
		
	cout << "Enter your password : ";
	cin >> password;
		
	if(username == "admin" && password == "admin"){
		cout << "Login Successful !" << endl;
		system("cls");
		sleep(3);
		void HalamanAwal();
	}else if(username == "admin" && password == "user"){
		cout << "Login Successful !" << endl;
		system("cls");
		sleep(3);
		void HalamanAwal();
	}else{
		cout << "Invalid username or password. Try again." << endl;
		sleep(3);
		system("cls");
		void login();
	}	
	system("cls");
}

Progress(){
	cout << "\t\t\t\t\t Toko Baju Indonesia \t\t\t\t" << endl;
	cout << "\t\t\t\t\t=====================\t\t\t\t" << endl;
	cout << "\t\t\tSelamat Datang Di Halaman Pembelian Di Toko Baju\t\t\t" << endl;
	cout << "\t\t\t======= ============================== =========\t\t\t" << endl;
			
    system("color 0A"); 
  
    char a = 177, b = 219; 
    
    printf("\n\n\n\n\n"); 
    printf("\n\n\t\t\t\t\t\t Loading... \n\n"); 
    printf("\t"); 
    
    for (int i = 1; i < 99; i++){
    	printf("%c", a); 
  
    	printf("\r"); 
    	printf("\t");
	}  
     
    for (int i = 1; i < 99; i++) { 
        printf("%c", b); 
  
        Sleep(1000); 
    } 
			
	void HalamanBelanja();
	system("cls");
}

HalamanBelanja(){
	string namaBaju;
	int jumbel,harga,bayar;
	int totbay,total,totPPn,kembalian;
	int pilihan2;
	string pilih;
	
	system("color 70");
	
	cout << "\t Toko Baju Indonesia \t" << endl;
	cout << "\t=====================\t" << endl;
	cout << "Selamat Datang Di Toko Baju Indonesia" << endl;
	cout << "======= =============================" << endl;
	cout << "1. Baju Sepak Bola" << endl;
	cout << "2. Baju Group Band" << endl;
	cout << "3. Logout Application" << endl;
	cout << "Pilih Kode : ";
	cin >> pilihan2;
	
	switch(pilihan2){
		case 1:
			system("cls");
			cout << "\t Toko Baju Indonesia \t" << endl;
			cout << "\t=====================\t" << endl;
			cout << "Selamat Datang Di Toko Baju Indonesia" << endl;
			cout << "======= =============================" << endl;
			cout << "A. Baju Barcelona" << endl;
			cout << "B. Baju Real Madrid" << endl;
			cout << "C. Baju Juventus" << endl;
			cout << "D. Baju Bayern Munich" << endl;
			cout << "Pilih Kode Baju : ";
			cin >> pilih;	
			
			if(pilih == "a" || pilih == "A"){
				namaBaju = "Baju Barcelona";
				harga = 500000;
			}else if(pilih == "b" || pilih == "B"){
				namaBaju = "Baju Real Madrid";
				harga = 500000;
			}else if(pilih == "c" || pilih == "C"){
				namaBaju = "Baju Juventus";
				harga = 500000;
			}else if(pilih == "d" || pilih == "D"){
				namaBaju = "Baju Bayern Munich";
				harga = 500000;
			}else{
				namaBaju = "";
				harga = 0;				
			}
			cout << "Jumlah Beli : "; cin >> jumbel;	
			break;
		
		case 2:
			system("cls");
			cout << "\t Toko Baju Indonesia \t" << endl;
			cout << "\t=====================\t" << endl;
			cout << "Selamat Datang Di Toko Baju Indonesia" << endl;
			cout << "======= =============================" << endl;
			cout << "A. Baju The Changcuters" << endl;
			cout << "B. Baju Noah Band" << endl;
			cout << "C. Baju Kuburan Band" << endl;
			cout << "D. Baju Dewa 19" << endl;
			cout << "Pilih Kode Baju : ";
			cin >> pilih;
			
			if(pilih == "a" || pilih == "A"){
				namaBaju = "Baju The Changcuters";
				harga = 85000;
			}else if(pilih == "b" || pilih == "B"){
				namaBaju = "Baju Noah Band";
				harga = 125000;
			}else if(pilih == "c" || pilih == "C"){
				namaBaju = "Baju Kuburan Band";
				harga = 70000;
			}else if(pilih == "d" || pilih == "D"){
				namaBaju = "Baju Dewa 19";
				harga = 150000;
			}else{
				namaBaju = "";
				harga = 0;				
			}
			cout << "Jumlah Beli : "; cin >> jumbel;
			break;
		
		case 3:
			sleep(1);
			system("cls");
			void Dashboard();
		break;
		
		default :
			cout << "Tidak Ada Kode yang dipilih : " << pilihan2 << endl;
			sleep(2);
			system("cls");
			HalamanBelanja();
		break;
	}
	
	if(jumbel > 3){
		total = harga * jumbel;
		totPPn = total * 10 / 100;
	}else{
		total = harga * jumbel;
	}	
							
	totbay = total + totPPn;
	
	cout << endl;
	cout << "=====================================" << endl;
	cout << "=== \t Toko Baju Indonesia \t ===" << endl;
	cout << "=====================================" << endl;
	cout << "Nama Baju\t\t: " << namaBaju << endl;
	cout << "Harga Satuan\t\t: " << harga << endl;
	cout << "Jumlah Beli\t\t: " << jumbel << endl;
	cout << "Total Keseluruhan\t: " << totbay << endl;
	cout << "Pembayaran\t\t: "; cin >> bayar;
	kembalian = bayar - totbay;
	cout << "Uang Kembalian\t\t: " << kembalian << endl;
	cout << "=====================================" << endl;
}

int mainDashboard(){
	Dashboard();
	return 0;
}

int mainLogin(){
	login();
	return 0;
}

int mainProgress(){
	Progress();
	return 0;
}

int mainHalamanBelanja(){
	HalamanBelanja();
	return 0;
}

int main(){
	mainDashboard();
	mainLogin();
	mainProgress();
	mainHalamanBelanja();
}
