// gr2_PP_lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

//laboratorium 2

//zadanie 1

/*#include <iostream>
using namespace std;
int main() {  // kod 02_01
    cout << "i<=10" << endl;
    for (int i = 0; i <= 10; i++) {
        cout << i << endl;
    }

    cout << endl;
    cout << "[5,7]" << endl;
    for (int i = 5; i <= 7; i++) {
        cout << i << endl;
    }

    cout << "\n[5,7):" << endl;
    for (int i = 5; i < 7; i++) {
        cout << i << endl;
    }

    cout << "\n[0,10]" << endl;
    for (int i = 0; i <= 10; i+=2) {
        cout << i << endl;
    }

    cout << "\n10 -> 0" << endl;
    for (int i = 10; i >= 0; i--) {
        cout << i << endl;
    }
    cout << "Koniec programu" << endl;
}*/

//zadanie 2
/*#include <stdio.h> //kod 02_13
#include <iostream>
using namespace std;
int main() {
    int fahr, celsius; //zmienne typu int 
    int start, limit, krok; //zmienne typu int 

    start = 0; //przypisz 0 do start 
    limit = 200; //przypisz 200 do limit 
    krok = 20; //przypisz 20 do krok 

    fahr = start; //przypisz wartosc start do zmiennej fahr, czyli fahr = 0 
    while (fahr <= limit) { //wykonuj petle dopoki wartosc fahr jest <= od zmiennej limit 
        celsius = 5 * (fahr - 32) / 9; //oblicz stopnie C i przypisz wynik do celsius 
        cout << fahr << "\t" << celsius << endl; //wypisz zmienne na ekran
        fahr = fahr + krok; //zwieksz wartosc zmiennej fahr o wartosc zmiennej krok
    }
}*/

// zadanie 3
/*#include <stdio.h> //kod 02_13
#include <iostream>
using namespace std;
int main() {
    int fahr, celsius; //zmienne typu int 
    int start, limit, krok; //zmienne typu int 

    start = 0; //przypisz 0 do start 
    limit = 200; //przypisz 200 do limit 
    krok = 20; //przypisz 20 do krok 

    fahr = start; //przypisz wartosc start do zmiennej fahr, czyli fahr = 0 
    for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)
    {
        float celsius = (5.0 / 9.0) * (fahr - 32.0);
        cout << fahr << "\t" << celsius << endl;
    }
}*/

// zadanie 5

/*#include <iostream>
using namespace std;
int main() {
    int fahr, celsius; 
    int start, limit, krok; 

    start = 0;
    limit = 200; 
    krok = 20;

    fahr = start;
    for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) //kod 02_16
    {
        float celsius = (5 / 9) * (fahr - 32.0);
        cout << fahr << "\t" << celsius << endl;
    }
}*/

//zadanie 6
/*#include <iostream>
using namespace std;
int main() {
    int fahr, celsius;
    int start, limit, krok;

    start = 0;
    cout << "Podaj limit: ";
    cin >> limit;
    cout << "\nPodaj krok: ";
    cin >> krok;

    fahr = start;
    for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) //kod 02_16
    {
        float celsius = (5.0 / 9.0) * (fahr - 32.0);
        cout << fahr << "\t" << celsius << endl;
    }
}*/

//zadanie 7
/*#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i < 10; i++) {
        float l;
        cout << "Wprowadz liczbe rzeczywista: ";
        cin >> l;
        if (l > 0) {
            cout << l << " jest liczba dodatnia" << endl;
        }
    }
}*/

//zadanie 8
/*#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i <= 100; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }
}*/

//zadanie 9
/*#include <iostream>
using namespace std;
int main() {
    int n;
    do {
        cout << "Wprowadz liczbe calkowita z zakresu [0,100]: ";
        cin >> n;

        if (n <= 100 && n >= 0) {
            for (int i = 0; i <= 100; i++) {
                if (i % n == 0) {
                    cout << i << endl;
                }
            }
        }
        
    } while (n > 100 || n < 0);
}*/

//zadanie 10
/*#include <iostream>
using namespace std;
int main() {
    int n, licznik;
    licznik = 0;
    do {
        cout << "Wprowadz liczbe calkowita z zakresu [0,100]: ";
        cin >> n;

        if (n <= 100 && n >= 0) {
            for (int i = 0; i <= 100; i++) {
                if (i % n == 0) {
                    licznik++;
                }
            }
        }

        cout << "Ilosc liczb podzielnych przez " << n << ": " << licznik << endl;;
    } while (n > 100 || n < 0);
}*/

//zadanie 11

/*int main() {
    int a, b;
    cout << "Wprowadz a: ";
    cin >> a;
    cout << "\nWprowadz b: ";
    cin >> b;

    if (a < b) {
        for (int i = a; i <= b; i++) {
            if (i % 3 == 0) {
                cout << i << endl;
            }
        }
    }
    else if (b < a) {
        for (int i = b; i <= a; i++) {
            if (i % 3 == 0) {
                cout << i << endl;
            }
        }
    }
}*/

//zadanie 12

/*int main() {
    int n;
    float x, sum, avg;
    sum = 0;
    cout << "Wprowadz liczbe n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "\nWprowadz liczbe rzeczywista: ";
        cin >> x;
        sum += x;
    }
    avg = sum / n;

    cout << "\nSrednia arytmetyczna wynosi: " << avg;
}*/

//zadanie 13

/*int main() {
    for (int i = 100; i >= 0; i--) {
        cout << i << endl;
    }
}*/

//zadanie 14

/*int main() {
    int x, y, z;
    cout << "Podaj liczbe 1: ";
    cin >> x;
    cout << "\nPodaj liczbe 2: ";
    cin >> y;
    cout << "\nPodaj liczbe 3: ";
    cin >> z;
    
    if (x < y && x < z) {
        cout << "Najmniejsza z tych liczb to liczba: " << x;
    }
    else if (y < x && y < z) {
        cout << "Najmniejsza z tych liczb to liczba: " << y;
    }
    else if (z < x && z < y) {
        cout << "Najmniejsza z tych liczb to liczba: " << z;
    }
}*/

//zadanie 15

/*int main() {
    int n, m, los;
    cout << "Podaj ile liczb ma byc wylosowanych: ";
    cin >> n;
    cout << "\nPodaj liczbe m w przedziale [0,m]: ";
    cin >> m;

    for (int i = 0; i <= n; i++) {
        los = rand() % (m+1);
        cout << los << endl;;
    }
}*/

//zadanie 16

int main() {
    int sl, licz, los;
    cout << "Podaj szczesliwy numerek: ";
    cin >> sl;
    licz = 0;

    for (int i = 0; i < 10; i++) {
        los = rand() % 10 + 1;
        cout << los << endl;
        if (los == sl) licz++;
    }

    cout << "Ile razy wystapil szczesliwy numerek: " << licz;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
