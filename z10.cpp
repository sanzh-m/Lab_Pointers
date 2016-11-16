#include <iostream>

using namespace std;

double* obl (double *ptr, int n){
	ptr = new double [n];
	return ptr;
}

double* vv (double *ptr, int n){
	double *copy = new double [n];
	for (int i=0; i<n; ++i){
		cin >> copy [i];		
	}
	return copy;
}

void out (double *ptr, int n){
	for (int i=0; i<n; ++i){
		cout << ptr[i] << " ";
	}
}

double* clear(double *ptr, int n){
	delete []ptr;
	return ptr;
}

int main(){
	setlocale(LC_ALL, "rus"); 
	double *ptr = new double [1];

	int a, n;

	while (a!=0){
		cout << "Выберите действие:" << endl;
		cout << "1.Выделить место для массива размера n" << endl;
		cout << "2.Ввести данные" << endl;
		cout << "3.Показать данные" << endl;
		cout << "4.Освободить память" << endl;
		cout << "Выход из программы - нажмите любую другую клавишу" << endl;
		cin >> a;
		switch (a){
			case 0:{break;}
			case 1:{cout << "Введите размер массива: "; cin >> n; ptr =  obl(ptr, n); break;}
			case 2:{ptr=vv (ptr, n); break;}
			case 3:{out (ptr, n); break;}
			case 4:{ptr=clear (ptr, n); n=1; break;}
			default:{
				cout << "ВВод неверный";
				break;
			}
		}
		cout << endl;
	}
	
return 0;
}
