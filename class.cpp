// class.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
using namespace std;

// a very simple class
class JustClass {
	int i;
public:
	void setValue( int value ) { i = value; }
	int getValue() { return i; }
};

int main( int argc, char ** argv ) {
	int i = 47;
	JustClass.setValue(i);
	cout << "value is " << object1.getValue() << endl;
	return 0;
}

