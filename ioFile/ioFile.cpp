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

	