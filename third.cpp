#include <iostream>

using namespace std;

int main(){
	/*remember the -std=c++11 flag*/
	double myDouble = 12345678ULL*100/2*3*3;
    cout << 5+10 << endl;
    cout << 5+10/2*3+25 << endl;
    /*overbite-too many bits for an int. int only allows 32 bits.*/
    /*cout << 12345678 * 100/2*3*3 << endl;*/
    cout << myDouble << endl;
    cout << 5+10/2*(3+25) << endl;
    cout << "Hello\t I am still waiting on those consumables..." << endl;
    /*breaking character*/
    cout << "There are two \\backslashes." << endl;
    /*another breaking character*/
    cout << "Backslash and double quotes are \"." << endl;
    return EXIT_SUCCESS;
}
