#include <iostream>

using namespace std;

int* change (int *ptr, int n){
	for (int i=0; i<n/2; ++i){
		int k=ptr[i*2];
		ptr[i*2]=ptr[i*2+1];
		ptr[i*2+1]=k;
	}
	return ptr;
}

int main(){
	int  n;
	cin >> n;
	int *ptr = new int [12];

	for (int i=0; i<n; ++i){
		cin >> ptr[i];
	}

	change (ptr, n);
	
	for (int i=0; i<n; ++i){
		cout << ptr[i] << " ";
	}
	               
return 0;
}
