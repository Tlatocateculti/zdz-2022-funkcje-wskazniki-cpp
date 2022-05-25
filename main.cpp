#include <iostream>

using namespace std;
#define TABLICA 100

void dodaj() {
    double a,b;
    a=b=.0;
    cout << "Podaj wartość a: ";
    cin >> a;
    cout << "Podaj wartość b: ";
    cin >> b;
    cout << "Wynik dodawania: " << (a+b) << endl;
}

void odejmij() {
    double a,b;
    a=b=.0;
    cout << "Podaj wartość a: ";
    cin >> a;
    cout << "Podaj wartość b: ";
    cin >> b;
    cout << "Wynik odejmowania: " << (a-b) << endl;
}

void mnozenie();
bool dzielenie();

int dlugosc_tekstu(char* ciag);

void dzialanie1(int liczba);
void dzialanie2(int *liczba);

//TO JEST MAIN - NIE DOTYKAĆ!
int main()
{
    int *tab1 = new int[20];
    int *wskaznik = &tab1[0];

    *(wskaznik+15) = 67;

    cout << tab1[15] << endl;

//    int init = 7;
//    int *shadow = &init;
//    cout << init << " " << *shadow << endl;
//    *shadow = 45;
//    cout << init << " " << *shadow << endl;
//    init+=*shadow;
//    cout << init << " " << *shadow << endl;

    //PRZYKŁAD DZIAŁANIA WSKAŹNIKÓW
//    int liczba1,
//        *liczba2 /*= new int*/;
//    liczba1=14;
//    liczba2 = new int;
//    *liczba2=14;
//    cout << liczba1 << " " << &liczba1 << " " << liczba2 << " " << *liczba2 << endl;
//    dzialanie1(liczba1);
//    cout << liczba1 << " " << &liczba1 << " " << liczba2 << " " << *liczba2 << endl;
//    dzialanie1(*liczba2);
//    cout << liczba1 << " " << &liczba1 << " " << liczba2 << " " << *liczba2 << endl;
//    dzialanie2(&liczba1);
//    cout << liczba1 << " " << &liczba1 << " " << liczba2 << " " << *liczba2 << endl;
//    dzialanie2(liczba2);
//    cout << liczba1 << " " << &liczba1 << " " << liczba2 << " " << *liczba2 << endl;
//    delete  liczba2;



//CZĘŚĆ DO FUNKCJI
//    char* przyklad= new char[TABLICA];
////    cout << "Działanie funkcji dodaj!" << endl;
////    bool zwrot = dzielenie();
////    cout << "Funkcja zwróciła wartość: " << zwrot << endl;
////    cout << "Funkcja zwróciła wartość: " <<  dzielenie() << endl;
////    dodaj();
////    odejmij();
////    mnozenie();

//    cin >> przyklad;
//    int znaki = dlugosc_tekstu(przyklad);
//    cout << "Tekst posiada: " << znaki << " znaków" <<  endl;
//    delete [] przyklad;
    return 0;
}

void dzialanie1(int liczba) {
    liczba++;
    cout << "W FUNKCJI 1: " << liczba << " " << &liczba << endl;
}
void dzialanie2(int *liczba) {
    (*liczba)++;
    cout << "W FUNKCJI 2: " << liczba << " " << &liczba << endl;
}

int dlugosc_tekstu(char* ciag) {
    int ilosc=0;
    for(int i=0;i<TABLICA;i++) {
        if (ciag[i]=='\0')
            break;
        ilosc++;
    }
    return ilosc;
}

void mnozenie() {
    double a,b;
    a=b=.0;
    cout << "Podaj wartość a: ";
    cin >> a;
    cout << "Podaj wartość b: ";
    cin >> b;
    cout << "Wynik mnożenia: " << (a*b) << endl;
}

bool dzielenie() {
    double a,b;
    a=b=.0;
    cout << "Podaj wartość a: ";
    cin >> a;
    cout << "Podaj wartość b: ";
    cin >> b;
    cout << "Wynik dzielenia: " << ((b!=0) ? a/b : 0) << endl;
    return (b!=0) ? 1 : 0;
}
