#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string baris;

	//membuka file dalam mode menulis.
	ofstream outfile;
	//menunjuk ke sebuah namaa file
	outfile.open("contohfile.txt");

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//looop akan berhenti jika anda memasukan karakter q
		if (baris == "q") break;	