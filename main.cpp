#include <ctime> // â íåé ôóíêöèÿ time
#include <iostream>
#include <stdlib.h>
using namespace std;
#define compare(x,y) std::cout<<((x >= 0 && x < y) ? 1 : 0 )<<std::endl;
#define acces(i,j) *(*(a + i) + j) = rand() % 100;
#define size(arr, type) cout << "Number of elements: "<<(sizeof(arr)/sizeof(type))<<std::endl;
int main()
{
compare(6,5)
compare(5,6)
    srand(time(NULL));
    int arr[]={1,2,3,4,5,6,7,8,9};
    size(arr, int)
    int n = 2;
    cout << "Input quantity of columns and rows: ";
    cin >> n;
    int **a = new int*[n]; // Ñîçäàåì ìàññèâ óêàçàòåëåé

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i] = new int[n];
        }
    }
    cout << "\n\t\t The first matrix \n" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
          acces(i,j)
            cout << "\t" << a[i][j];

        }
        cout << endl << endl;
    }

system("pause");

    // Óäàëåíèå ìàññèâà
    for (int i = 0; i < n; i++)
    {
        delete[]a[i]; // Óäàëÿåì êàæäûé ýëåìåíò
    }
    delete[] a; // À ïîòîì ìàññèâ

    return 0;
}
