//Anna Crafton
//CIS 1202 101
//July 30 2021

//CraftonAnna15

#include <iostream>
#include <cmath>

using namespace std;

//functions
int half(int);

template <class halfType>
halfType half(halfType num) {
	return (num / 2);
}

int main() {
	int intNum = 3;
	double doubleNum = 7;
	float floatNum = 5.0f;

	cout << half (doubleNum) << endl;
	cout << half(floatNum) << endl;
	cout << half(intNum) << endl;
	
	return 0;
}

//halfs int, rounding up from .5.
int half(int num) {
	float floatNum;
	float half;
	floatNum = static_cast<float> (num);
	half = floatNum / 2;
	floatNum = round(half);

	return floatNum;
};