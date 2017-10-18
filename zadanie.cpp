#include <iostream>

using namespace std;

int main(){
	int n, k;
	cout<<"Podaj wartosc n: ";
	cin>>n;
	cout<<"Podaj wartosc k: ";
	cin>>k;
	double* a = new double [n];
	cout<<"Podaj wartosci kandydatow: ";
	for(int i=0;i<n;i++)
		cin>>a[i];
	double* d = new double [n];
	for(int i=0;i<n;i++){
		for(int j=1;j<i;j++)
			d[i]=(a[j]*(j-1)-(n-i)*a[i]);
	}
	return 0;
}
