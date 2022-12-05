/*Tyler LeBlanc
CIS 1202.201
HalfFunction
12/5/2022
*/

#include <iostream>

using namespace std;

template<typename N> N Half(N num) {

	N hNum;
	if (is_same<N, int>::value) {
		hNum = ((num + 2) - 1) / 2;
	}
	else {
		hNum = num / 2;
	}

	return hNum;
}

int main() {

	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << "Half of double " << a << " is " << Half(a) << endl;
	cout << "Half of float " << b << " is " << Half(b) << endl;
	cout << "Half of int " << c << " is " << Half(c) << endl;

	cout << endl << endl;
	system("pause");
	return 0;
}