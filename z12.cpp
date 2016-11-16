#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int** zap (int **ptr, int n, int m){
	for (int i=0; i<n; ++i){
		for (int j=0; j<m; ++j){
			ptr[i][j]=rand()%40+10;
		}
	}
	return ptr;
} 

void vv (int **ptr, int n, int m){
	for (int i=0; i<n; ++i){
		for (int j=0; j<m; ++j){
			cout << ptr[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	srand (time (0));
	int n, m;
	cin >> n >> m;
	int **ptr = new int* [n];

	for (int i=0; i<n; ++i){
		ptr[i] = new int [m];
	}

	ptr = zap (ptr, n, m);

	vv (ptr, n, m);

return 0;
}