// Charles Ritter
// CIS 1202.5T1
// 07/29/2023

#include<iostream>
#include<typeinfo>
#include<cmath>


using namespace std;

template <typename T>
T half(T value) {
	T result;


	if (typeid(value) == typeid(int)) {
		double intResult;

		intResult = static_cast<double>(value) / 2;

		result = round(intResult);

		return result;
	}
	else {
		result = value / 2;
		return result;
	}
}

int main() {
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	return 0;
}