#include "HomeTask1.h"

using namespace std;

int main( int argc, char * argv [])
{
	try {

		MNP check;
		check.readCSV();

		string number;
		cout << "Please input your number: " << endl;
		cin >> number;

		if ((number.length() < 10) || (number.length() > 10)) {

			throw "wrong number size";

		}

		for (int i = 0; i < number.length(); i++) {
			if (!isdigit(number[i])) {
				throw "the string contains forbidden characters";
			}
		}

		
		cout << "Your number operator is: " <<check.findNumber(number) << endl;
		
	}
	catch (const char* exception) {
		cerr << "Error main(): " << exception << " " << '\n';
		return 0;
	}
	return 0;
}
