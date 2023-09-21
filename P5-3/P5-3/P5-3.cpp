#include <iostream> 
using namespace std;
int main()
{
	int num, base;
		cout << "enter num: ";
	cin >> num;
	while (num > 0) {
		if (cin.fail()) {
			break;
		}
		if (num % 2 == 1)
			cout << "1" << endl;
		else
			cout << "0" << endl; 

		num = num / 2;
	}

	return 0;
}
