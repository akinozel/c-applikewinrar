#include <sstream>  
#include <iostream>
#include <clocale>
#include <vector>
#include <string.h>
#include <fstream>

using namespace std;
int main() {
	//cout << "hello git";
	string a, b;
	char cd;
	ifstream unzip1("unzip1.txt");
	while (unzip1.get(cd)) {
		a += cd;
	}
	unzip1.close();
	ifstream unzip2("unzip2.txt");
	while (unzip2.get(cd)) {
		b += cd;
	}
	unzip2.close();
	ofstream zip1("aknZip.txt");
	zip1 << a << endl << b;
	zip1.close();
}






