#include <iostream>
#include <ctime>
#include <string>
using std::endl ;
using std::cin;
using std::cout;
using std::string;


void pl(int a, int b) {
	cout << a << '+' << b << '=' << a + b;
}
void mi(int a, int b) {
	cout << a << '-' << b << '=' << a - b;
}
void ma(int a, int b) {
	cout << a << '*' << b << '=' << a * b;
}
void de(int a, int b) {
	cout << a << '/' << b << '=' << a / b;
}

void anil(void (*fptr[])(int, int), int finu, int senu) {
	for (size_t i = 0; i < 4; i++)
	{
		if (fptr[i] != NULL) {
			fptr[i](finu,senu);
			cout << endl;
		}
	}
}




void inpo(int * a  , int * b ,int * c, int s) {
	for (size_t i = 0; i < s; i++)
	{
		c[i] = a[i] + b[i];
	}
}
void sho(int* c, int s) {
	cout << endl;
	for (size_t i = 0; i < s; i++)
	{
		cout << c[i] << ' ';
	}
}

void min(int* a, int c) {
	int b = 1000;
	for (int i = 0; i < c; i++) {
		if (a[i] < b) {
			b = a[i];
		}
	}
	cout << "min =" << b;
}
void max(int* a, int c) {
	int b = -1000;
	for (int i = 0; i < c; i++) {
		if (a[i] > b) {
			b = a[i];
		}
	}
	cout << "max =" << b;
}
void avg(int* a, int c) {
	int d = 1000;
	int b = -1000;
	int g = 0;
	for (int i = 0; i < c; i++) {
		if (a[i] > b) {
			b = a[i];
		}
		if (a[i] < b) {
			d = a[i];
		}
	}
	g = (b + d) / 2;
	cout << "avg =" << g;
}
void Action(int* a, int* b, int c, void (*fptr[3])(int*, int)) {
	string f;
	cout << "input:min max avg\n";
	cin >> f;
	if (f == "max") {
		fptr[0](a, c);
		cout << endl;
		fptr[0](b, c);
		cout << endl;
	}
	else if (f == "min") {
		fptr[1](a, c);
		cout << endl;
		fptr[1](b, c);
		cout << endl;
	}
	else if (f == "avg") {
		fptr[2](a, c);
		cout << endl;
		fptr[2](b, c);
		cout << endl;
	}
}

int main() {

	/*void (*fptr[4])(int, int) = {NULL,NULL,NULL,NULL};    task 1
	fptr[0] = pl;
	fptr[1] = mi;
	fptr[2] = ma;
	fptr[3] = de;

	int* finu = new int;
	int* senu = new int;
	int* sign = new int;


	cin >> *finu;
	cin >> *senu;
	cout << "+=0\n-=1\n*=2\n/=3\n";
	cin >> *sign;
	for (int i = 0; i < 4; i++) {
		if (i == *sign) {
			fptr[i] = fptr[i];
		}
		else {
			fptr[i] = NULL;
		}
	}

	anil(fptr, *finu, *senu);

	delete finu;
	finu = nullptr;
	delete senu;
	senu = nullptr;
	delete sign;
	sign = nullptr;*/

	/*srand(time(0));   task 2

	int* size=new int;
	cout<<"input size of arrays\n";
	cin >> *size;

	int* chisisA = new int[*size];
	int* chisisB = new int[*size];

	int* chisisC = new int[*size];

	for (size_t i = 0; i < *size; i++)
	{
		chisisA[i] = rand() % 10;
		chisisB[i] = rand() % 10;

		cout << chisisA[i] << " " << chisisB[i] << endl;
	}

	inpo(chisisA,chisisB,chisisC,*size);
	sho(chisisC, *size);

	delete size;
	size = nullptr;
	delete[]chisisA;
	chisisA = nullptr;
	delete[]chisisB;
	chisisB = nullptr;
	delete[]chisisC;
	chisisC = nullptr;*/

	/*int* size=new int;     task3
	cout << "input size\n";
	cin >> *size;
	int* alberto = new int[*size];
	int* adolf = new int[*size];
	void (*fptr[3])(int*, int) = { NULL,NULL,NULL };
	fptr[0] = max;
	fptr[1] = min;
	fptr[2] = avg;


	for (size_t i = 0; i < *size; i++)
	{
		alberto[i] = rand() % 10;
		adolf[i] = rand() % 10;
		cout << alberto[i] << " " << adolf[i] << endl;
	}
	Action(alberto, adolf, *size, fptr);

	delete size;
	size = nullptr;
	delete[]alberto;
	delete[]adolf;*/


	return 0;
}