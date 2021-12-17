#include <iostream>

/*
Polecenie 5.1

# Użytkownik poda liczbę elementów wektora
# pobrane zostana od użytkownika wszystkie elementy wektora
# wskazana zostanie wartość elementu maksymalnego wektora
# Wskazany zostanie numer indeksu elementu maksymalnego

*/

/*
Polecenie 5.2

# wczytanie aktualnego rozmiaru tablicy liczb całkowitych
# wczytanie elementów tablicy liczb całkowitych
# zamianę miejscami elementów tablicy, leżących po przeciwnej stronie prostej pionowej, dzielącej tablicę na dwie równe części

Schemat :
Tablica wejsciowa

2    3
4    5
6    7
8    7

Tablica wyjściowa:

3    2
5    4
7    8
7    6

*/

using namespace std;

void zadanie5_1()
{
    cout << "Zadanie pierwsze" << endl<< endl;

}
void zadanie5_2()
{
    cout << "Zadanie drugie" << endl << endl;

    //tablica
    int tab[8] = { 2,3,4,5,6,7,8,7 };

    
    for (auto y = 0; y < 8; y++)
    {
        if (tab[y] / 2)
        {
            cout << tab[y] << ' ' << endl;
        }
        
        for (auto x = 0; x < 2; x++)
        {
            if (tab[y] == 0)
            {
                cout << tab[y] << ' ';
            }
        }

    }
}

int main()
{ 
    zadanie5_1();
    zadanie5_2(); 
}


