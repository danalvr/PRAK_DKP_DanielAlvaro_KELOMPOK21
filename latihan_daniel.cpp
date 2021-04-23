// Program Kalkulator Sederhana Menggunakan fungsi, method (file header), dan exception (error runtime)

#include <iostream>
#include "latihan_daniel.h"
#include <exception>


using namespace std;

// fungsi Protype

// template<typename T, typename U, typename V>
// void tampilkan(T input1, U input2, V total);

// template<typename T, typename U, typename V>
// void tampilkan2(T input1, U input2, V total2);

// template<typename T, typename U, typename V>
// void tampilkan3(T input1, U input2, V total3);

// template<typename T, typename U, typename V>
// void tampilkan4(T input1, U input2, V total4);

// void Ulangi(char lanjut);

// void AngkaPertama();

// void Perhitungan();

// void AngkaKedua();

// void OpsiSalah();

// void OperatorSalah();

// void TampilanAtas();

// void TampilanBawah();

// void Selesai();

int main(){

	while(true){

		system("cls");
		system("color b");
		float input1,input2;
		double total,total2,total3,total4;
		char lanjut;
		char Operator;

		TampilanAtas();

		while (true){

				AngkaPertama();
				cin >> input1;
				Perhitungan();
				cin >> Operator;
				AngkaKedua();
				cin >> input2;

			if(Operator == '+'){

				tampilkan(input1,input2,total);
				Ulangi(lanjut);
				cin >> lanjut;

				if (lanjut == 'y' || lanjut == 'Y'){
					continue;
				}
				else if(lanjut == 'n' || lanjut == 'N'){
					Selesai();
					break;
				}
				else {
					OpsiSalah();
				}
			}
			else if(Operator == '-'){

				tampilkan2(input1,input2,total2);
				Ulangi(lanjut);
				cin >> lanjut;

				if (lanjut == 'y' || lanjut == 'Y'){
					continue;
				}
				else if(lanjut == 'n' || lanjut == 'N'){
					Selesai();
					break;
				}
				else {
					OpsiSalah();
				}
			}
			else if(Operator == '*'){

				tampilkan3(input1,input2,total3);
				Ulangi(lanjut);
				cin >> lanjut;

				if (lanjut == 'y' || lanjut == 'Y'){
					continue;
				}
				else if(lanjut == 'n' || lanjut == 'N'){
					Selesai();
					break;
				}
				else {
					OpsiSalah();
				}
			}
			else if(Operator == '/'){

					try{
						tampilkan4(input1,input2,total4);
					}
					catch(exception &e){
					}
					catch(const char* e){
						cout << e << endl;
					}
				Ulangi(lanjut);
				cin >> lanjut;

				if (lanjut == 'y' || lanjut == 'Y'){
					continue;
				}
				else if(lanjut == 'n' || lanjut == 'N'){
					Selesai();
					break;
				}
				else {
					OpsiSalah();	
				}
			}
			else {
				OperatorSalah();
			}
		}
		TampilanBawah();

		return 0;
	}
}


