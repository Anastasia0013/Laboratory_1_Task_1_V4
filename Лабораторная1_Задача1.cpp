#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
	std::ofstream fail;
	fail.open("abc.txt", ios::out);
	int n;
	int a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		fail << a << " ";
	}
	fail.close();
	ifstream rt;
	int b = 0;
	int k = 0;
	int dl = 0;
	rt.open("abc.txt", ios::in);
	for (int i = 0; i < n; i++) {
		rt >> a;
		if (a >= b) {
			k++;
			if (k > dl) {
				dl = k;
			}
		}
		else {
			k = 1;
		}
		b = a;
	}
	cout << dl;
	return 0;

}

