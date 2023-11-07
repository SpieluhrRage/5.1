#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>

using namespace std;
int evkDel(int a, int b) {
	while (a != 0 && b != 0) {
		if (a > b) {
			a = a % b;
		}
		else {
			b = b % a;
		}
	}
	return a + b;
}
float evk2(float a, float b) {
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	return a;
}

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "¬ведите через пробел два числа: ";
	float a, b;
	cin >> a >> b;
	cout << evkDel(a, b) << " " << evk2(a, b);

}