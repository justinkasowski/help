#include <iostream>

using namespace std;

int main() {
    string manu = "Lamborghini";
    const char *const c_manu = manu.c_str();

    string new_manu(manu);
    manu[0] = 'P';

    cout << c_manu << endl;
    cout << new_manu << endl;

}




