#include <iostream>

using namespace std;


class Myclass {
public:
	void tampilan_idUser(){
		cout << "Program Sistem ATM Sederhana" << endl;
		cout << "Masukkan ID User Anda: ";
		
	}
	void tampilan_pin(){
		cout << "Masukkan PIN Anda: ";

	}
	void tampilan_Menu(){
		system("cls");
		cout << "=================================================" << endl;
	 	cout << "\t\tMESIN ATM KELOMPOK 21" << endl;
		cout << "=================================================" << endl;
		cout << "1. Tarik Tunai" << endl;
		cout << "2. Transfer" << endl;
		cout << "3. Keluar" << endl;
		cout << "Masukkan Pilihan [1-3]? : ";

	}
	void tampilan_pilihan1(){
		system("cls");
		cout << "=================================================" << endl;
		cout << "\t\tMESIN ATM KELOMPOK 21" << endl;
		cout << "=================================================" << endl;
		cout << "Masukkan Berapa Jumlah yang akan anda tarik: Rp ";

	}
	void tampilan_penarikan(int jumlah_tarik){
		cout << "-\n-\n-\n-"; 
		cout << "\nPenarikan Berhasil" << endl;
		cout << "Total Jumlah Penarikan Anda senilai: Rp " << jumlah_tarik << endl;
		cout << "Kembali ke Menu Utama (y/n): ";

	}
	void tampilan_pilihan2(){
		system("cls");
		cout << "=================================================" << endl;
		cout << "\t\tMESIN ATM KELOMPOK 21" << endl;
		cout << "=================================================" << endl;
		cout << "Masukkan Nomor Rekening Tujuan: ";

	}
	void tampilan_konfirmasiTransfer(int rekening_tujuan, int transfer){
		cout << "=================================================" << endl;
		cout << "\t\tMESIN ATM KELOMPOK 21" << endl;
		cout << "=================================================" << endl;
		cout << "\tKONFIRMASI TRANSFER\n" << endl;
		cout << "Nama  	         : Suberdo Matanari" << endl;
		cout << "No.Rekening  	 : " << rekening_tujuan << endl;
		cout << "Total Transaksi  : Rp " << transfer << endl;
		cout << "Lanjutkan Transfer (y/n): ";

	}
	void tampilan_transaksi(){
		cout << "-\n-\n-\n-";
		cout << "\nTransaksi Anda Berhasil" << endl;
		cout << "Kembali ke Menu Utama (y/n): ";

	}
	void tampilan_tidakTerdaftar(){
		cout << "=================================================" << endl;
		cout << "\t\tMESIN ATM KELOMPOK 21" << endl;
		cout << "=================================================" << endl;
		cout << "Nomor Rekening Tidak Terdaftar" << endl;
		cout << "Ulangi Masukkan Nomor Rekenening (y/n)? : ";

	}
	void tampilan_pilihan3(){
		cout << "=================================================" << endl;
		cout << "             T E R I M A  K A S I H              " << endl;
		cout << "=================================================" << endl;

	}
};

int main(){
	system("color b");
	system("cls");
	double id_user;
	double pin;
	int rekening_tujuan;
	int pilihan;
	int jumlah_tarik;
	int transfer;
	char lanjutkanMenu;
	char lanjutkan_penarikan;
	char lanjutkan_transfer;
	
	char ulangi_rekening;

	Myclass myobj;
	myobj.tampilan_idUser();
	cin >> id_user;
	myobj.tampilan_pin();
	cin >> pin;

	while(true){
		if (id_user == 21120154){
			if(pin == 12345){
				myobj.tampilan_Menu();
				cin >> pilihan;

				if (pilihan == 1){
					system("cls");
					while(true){
						myobj.tampilan_pilihan1();
						cin >> jumlah_tarik;
						cout << "Lanjutkan Penarikan (y/n): ";
						cin >> lanjutkan_penarikan;

						if (lanjutkan_penarikan == 'y' || lanjutkan_penarikan == 'Y'){
							myobj.tampilan_penarikan(jumlah_tarik);
							cin >> lanjutkanMenu;

							if(lanjutkanMenu == 'y' || lanjutkanMenu == 'Y'){
								break;
							}
							else{
								continue;
							}
						}
						else if (lanjutkan_penarikan == 'n' || lanjutkan_penarikan == 'N'){
							continue;
						}	
					}
				}
				else if (pilihan == 2){
					while(true){
						myobj.tampilan_pilihan2();
						cin >> rekening_tujuan;
						cout << "Masukkan Jumlah uang yang ingin anda transfer: Rp ";
						cin >> transfer;
						system("cls");
						if(rekening_tujuan == 21120175){
							myobj.tampilan_konfirmasiTransfer(rekening_tujuan,transfer);
							cin >> lanjutkan_transfer;

							if (lanjutkan_transfer == 'y' || lanjutkan_transfer == 'Y'){
								myobj.tampilan_transaksi();
								cin >> lanjutkanMenu;
								if(lanjutkanMenu == 'y' || lanjutkanMenu == 'Y'){
									break;
								}
							}
							else if(lanjutkan_transfer == 'n' || lanjutkan_transfer == 'N'){
								continue;
							}
						}
						else {
							myobj.tampilan_tidakTerdaftar();
							cin >> ulangi_rekening;
							if(ulangi_rekening == 'y'|| ulangi_rekening == 'Y'){
								continue;
							}
							else{
								break;
							}
						}
					}
				}
				else if (pilihan == 3){
					myobj.tampilan_pilihan3();
					break;
				}
				else{
					continue;
				}
		
			}
			else{
				cout << "PIN yang Anda Masukkan Salah" << endl;
				break;
			}
			
			
		}
		else {
			cout << "ID User yang Anda Masukkan Tidak Terdaftar" << endl;
			break;
		} 
	}
	
	return 0;
}
