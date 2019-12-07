#include <iostream>
using namespace std;
int main() {

	int in=0;
	int out=0;

	cout<<"Provide a number"<<endl;
	cin>>in;

	//The following code implements an if-else statement
	if (in>4) {
		out=1;
	}else {
		out=-1;
	}
	cout << "Out1: "<< out << endl;
	out=0;
	//Reimplement the above code as a ternary operator below this line

    in>4?out=1:out=-1;
	cout << "Out2: "<< out << endl;
	return 0;
}
