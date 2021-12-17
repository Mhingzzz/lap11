#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");

	string te;
	dest << "-------------------- BOOM ---------------------\n";
	while (getline(source,te))
	{
		dest << te <<endl;
	}
	dest << "-------------------- HA!! ---------------------";
	
	
    source.close();
    dest.close();
	return 0;
}
