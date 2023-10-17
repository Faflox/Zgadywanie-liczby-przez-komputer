#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>


using namespace std;

int liczba, proba, ile_prob = 0;

int main()
{
    cout << "Zgadnij moja liczba z zakresu od 1 do 100 albo zgin" << endl;
    srand(time(NULL));
    liczba = rand() % 100 + 1;
    Sleep(2000);
    system("cls");

    while (proba != liczba)
    {
        ile_prob++;

        cout << "Zgadnij liczbe: ";
        cin >> proba;

        if (proba < liczba)
        {
            cout << "Podaj wieksza liczbe" << endl;
        }
        if (proba > liczba)
        {
            cout << "Podaj mniejsza liczbe" << endl;
        }
        if (proba == liczba)
        {
            cout << "Gratualcje!!!, twoja odpowiedz: ", cout << proba, cout << " jest poprawna" << endl, cout << "Udalo ci sie odgadnac odpowiedz w : " << ile_prob << " probie" << endl;
        }
    }

    system("pause");
    return 0;
}
