#include <iostream>
using namespace std;


class Time {

public:
	void print() {
		cout << hour << ":" << min;
	}

	void setHour(int hr) {
		hour = 0;
		if(hr>=0 && hr <=23) {
			hour = hr;
		}
	}
/*private:		<- make field access prohibited 	*/
	int hour, min;
} t3;


int main(void) {

	Time t, t2 = {3, 4};

	t.hour = 12;
	t.setHour(8);
	t.min  = 30;

	t.print();
	cout << endl;

	t2.print();
	cout << endl;


	t3.print();
	cout << "\n\n";


	return EXIT_SUCCESS;
}

