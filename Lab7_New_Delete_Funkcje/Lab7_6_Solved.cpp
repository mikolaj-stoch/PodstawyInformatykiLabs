#include <iostream>
using namespace std;

int x = 100;

void pprint(int x) {
    cout << "1: " << x << endl;
    ++x;
    cout << "2: " << x << endl;

}

int main() {

    cout<<x<<endl;

	int x = 6;

    cout << "0: " << x << endl;
    pprint(x);
    cout << "3: " << x << endl;
}
