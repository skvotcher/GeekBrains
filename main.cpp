#include <ctime> // в ней функция time
#include <iostream>
#include <stdlib.h>
using namespace std;
#define compare(x,y) std::cout<<((x >= 0 && x < y) ? 1 : 0 )<<std::endl;
#define acces(i,j) *(*(a + i) + j) = rand() % 10;
#define size(arr) cout << "Number of elements: "<<(sizeof(arr) / sizeof(arr[0]))<<std::endl;
int main()
{
compare(6,5)
compare(5,6)
    srand(time(NULL));
    int arr[]={1,2,3,4,5,6,7,8,9};
   size(arr)
    int n = 0;
    cout << "Input quantity of columns and rows: ";
    cin >> n;
    int **a = new int*[n]; // Создаем массив указателей

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

    // Удаление массива
    for (int i = 0; i < n; i++)
    {
        delete[]a[i]; // Удаляем каждый элемент
    }
    delete[] a; // А потом массив

    return 0;
}
