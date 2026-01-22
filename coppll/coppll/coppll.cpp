
#include <iostream>
#include"../Project1/math.h"
using namespace std;
int main() {
    int a, b;
    char znak;

    cout << "enter : ";
    cin >> a >> znak >> b;

    int rezultat = 0;

    if (znak == '+') {
        rezultat = addition(a, b);
    }
    if (znak == '-') {
        rezultat = subtract(a, b);
    }
    if (znak == '*') {
        rezultat = multiply(a, b);
    }
    if (znak == '/') {
        rezultat = divide(a, b);
    }

    cout << "result : " << rezultat << endl;


}

