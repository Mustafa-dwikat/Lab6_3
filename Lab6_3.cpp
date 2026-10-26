#include <iostream>
using namespace std;
int main() {
	int n1, hundreds, onse, tens;
	cout << "enter a 3-digit number : ";
	cin >> n1;
	hundreds = n1 / 100;
	onse = n1 % 10;
	tens = n1 / 10 - (hundreds * 10);
	cout << onse << tens << hundreds << endl;
	cout <<"The number in revers is : " << (onse * 100) + (tens * 10) + hundreds;
}











	/*int W;
	cout << "enter a 3-digit number : ";
	cin >> W;

	cout << (W % 10) * 100 + (W / 10 * 10 - W/100 * 100) + (W / 100);
	*/

