#include <iostream>
#include <conio.h>
#include <stdio.h>
 using namespace std;
 
   const double phi = 3.14;
   double luas;
   
   double luas_tabung(int r, int tinggi) {
   	
   	luas = 2*phi*r*r + 2*phi*r*tinggi;
   	return luas;
   	
   }
   
 int main() {
 	
 	int t,r;
 	
 	cout << " Masukan tinggi tabung = ";
 	cin >> t;
 	
 	cout << " Masukan jari - jari tabung = ";
 	cin >> r;
 	
 	cout << " Luas tabung nya adalah = "<<luas_tabung(r,t)<<endl;
 }
