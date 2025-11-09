#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

void calcSum(int a, int b);
void calcDiv(int a, int b);
int retSum(int a, int b);
float retDiv(int a, int b);

int main() {
    int a, b;

    cout << "Anna kokonaisluku a: ";
    cin >> a;
    cout << "Anna kokonaisluku b: ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    int sum = retSum(a, b);
    cout << a << " + " << b << " = " << sum << endl;

    float result;
    try {
        result = retDiv(a, b);
        cout << fixed << setprecision(2);
        cout << a << " / " << b << " = " << result << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}

void calcSum(int a, int b) {
    int sum = a + b;
    cout << a << " + " << b << " = " << sum << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: jakaja ei saa olla nolla!" << endl;
    } else {
        cout << fixed << setprecision(2);
        float result = static_cast<float>(a) / b;
        cout << a << " / " << b << " = " << result << endl;
    }
}

int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        throw runtime_error("jakaja ei saa olla nolla!");
    }
    return static_cast<float>(a) / b;
}
