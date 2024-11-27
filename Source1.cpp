#include<iostream>
using namespace std;
int main(){
	double celsius;
    cout << "Enter temperature in celsius\n";
	cin >> celsius;
	double fehrenheit = (celsius * 9.0 / 5.0) + 32;
	cout << celsius << " degrees celsius is equal to\n" << fehrenheit 
		<< " degrees fehrenheit."<<endl;

	 return 0;
	 }