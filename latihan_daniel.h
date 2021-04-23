#include <iostream>
using namespace std;


template<typename T, typename U, typename V>
void tampilkan(T input1, U input2, V total){
	total = input1 + input2;
	cout << "hasil = " << total << endl;
}
template<typename T, typename U, typename V>
void tampilkan2(T input1, U input2, V total2){
	total2 = input1 - input2;
	cout << "hasil = " << total2 << endl;
}
template<typename T, typename U, typename V>
void tampilkan3(T input1, U input2, V total3){
	total3 = input1 * input2;
	cout << "hasil = " << total3 << endl;
}
template<typename T, typename U, typename V>
void tampilkan4(T input1, U input2, V total4){
	if (input2 == 0){
		throw "Error = pembagi nol";	
	}
	total4 = input1 / input2;
	cout << "hasil = " << total4 << endl;
}
void Ulangi(char lanjut){
	cout << "Ulangi Perhitungan [y/n]?: ";
}
void AngkaPertama(){
	cout << "Masukkan Angka Pertama: ";
}
void Perhitungan(){
	cout << "Pilih Operator (+,-,*,/): ";
}
void AngkaKedua(){
	cout << "Masukkan Angka Kedua: ";
}
void OpsiSalah(){
	cout << "Opsi Yang Anda Pilih Salah" << endl;
}
void OperatorSalah(){
	cout << "Operator Yang Anda Masukkan Salah" << endl;
}
void TampilanAtas(){
	cout << "=================================================================================" << endl;
	cout << "\tSelamat Datang di Program Kalkulator Sederhana Daniel Alvaro" << endl;
	cout << "=================================================================================" << endl;
}
void TampilanBawah(){
	cout << "=================================================================================" << endl;
	cout << "                     T E R I M A      K A S I H                                  " << endl;
	cout << "=================================================================================" << endl;
}
void Selesai(){
	cout << "\nProgram Selesai" << endl;
}
