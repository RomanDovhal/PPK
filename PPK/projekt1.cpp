#include <iostream>
using namespace std;

void zad1() {
    float a, b, sum;
    a = 4;
    b = 6;
    sum = a + b;
    cout << sum;
}
void zad2() {
    float a, b, sum;
    cin >> a >> b;
    sum = a + b;
    cout << sum;
}
void zad3() {
    float a, b, c, sum, x;
    cout << "ax + b = c" << endl;
    cin >> a >> b >> c;
    sum = c - b;
    x = sum / a;
    cout << x;
}
void zad4() {
    float a, b, c, d, k, sum, x;
    cout << "2x + 4 = y" << endl << " 3x - 2 = y" << endl;
    a = 2;
    b = 4;
    c = 3;
    d = -2;
    x = c - a;
    k = b - d;
    sum = k / x;
    cout << "x = " << sum;
}

void zad5()
{
    double a, b, c;
    cout << "podaj liczbe a:";
    cin >> a;
    cout << "podaj liczbe b:";
    cin >> b;
    cout << "podaj liczbe c:";
    cin >> c;

    double delta = (b * b) - (4 * a * c);

    if (delta < 0) {
        cout << "nie ma pierwiastkow\n";
    }
    else if (delta == 0) {
        cout << "x = " << -b / 2 * a << endl;
    }
    else if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / 2 * a;
        double x2 = (-b - sqrt(delta)) / 2 * a;
        cout << "x1 = " << x1 << "\nx2 = " << x2 << endl;
    }
}
void zad6() {
    int numerDnia, miesiac = 1;
    cout << "podaj dzien:";
    cin >> numerDnia;

    for (size_t i = 1; i <= 12; i++)
    {
        if (i == 1) {
            if (numerDnia > 31) {
                numerDnia -= 31;
                miesiac++;
            }
            else {
                break;
            }
        }
        if (i == 2) {
            if (numerDnia > 28) {
                numerDnia -= 28;
                miesiac++;
            }
            else {
                break;
            }
        }
        if (i == 3) {
            if (numerDnia > 31) {
                numerDnia -= 31;
                miesiac++;
            }
            else {
                break;
            }
        }
        if (i == 4) {
            if (numerDnia > 30) {
                numerDnia -= 30;
                miesiac++;
            }
            else {
                break;
            }
        }
        if (i == 5) {
            if (numerDnia > 31) {
                numerDnia -= 31;
                miesiac++;
            }
            else {
                break;
            }
        }
        if (i == 6) {
            if (numerDnia > 30) {
                numerDnia -= 30;
                miesiac++;
            }
            else {
                break;
            }
        }
        if (i == 7) {
            if (numerDnia > 31) {
                numerDnia -= 31;
                miesiac++;
            }
            else {
                break;
            }
        }
        if (i == 8) {
            if (numerDnia > 31) {
                numerDnia -= 31;
                miesiac++;
            }
            else {
                break;
            }
        }
        if (i == 9) {
            if (numerDnia > 30) {
                numerDnia -= 30;
                miesiac++;
            }
            else {
                break;
            }
        }
        if (i == 10) {
            if (numerDnia > 31) {
                numerDnia -= 31;
                miesiac++;
            }
            else {
                break;
            }
        }
        if (i == 11) {
            if (numerDnia > 30) {
                numerDnia -= 30;
                miesiac++;
            }
            else {
                break;
            }
        }
        if (i == 12) {
            if (numerDnia > 31) {
                numerDnia -= 31;
                miesiac++;
            }
            else {
                break;
            }
        }
    }
    cout << "dzien: " << numerDnia << "\nmiesiac: " << miesiac << endl;
}


void zad7() {
    int year;

    cout << "Введіть рік: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " rok przestępny" << endl;
    }
    else {
        cout << year << " rok nie przestępny" << endl;
    }


}
int main() {
    // zad1();
    // zad2();
    // zad3();
    // zad4();
    // zad5();
    // zad6();
    // zad7();
}