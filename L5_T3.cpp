
// 3. *Написать функцию, в которую передается не пустой одномерный целочисленный массив, функция должна вернуть истину если в массиве есть место,
//    в котором сумма левой и правой части массива равны. Примеры: checkBalance([1, 1, 1, || 2, 1]) → true,
//    checkBalance ([2, 1, 1, 2, 1]) → false, checkBalance ([10, || 1, 2, 3, 4]) → true.
//    Абстрактная граница показана символами ||, эти символы в массив не входят.

#include <iostream>
#include <stdlib.h>
using namespace std;
const int sizearr=6;
bool checkBalance(int sizearr,int *arr);
int main()
{
    setlocale(LC_ALL, "russian");
    int arr[sizearr]={1,2,3,3,2,1};
    cout << checkBalance(sizearr, arr);


return 0;
}
bool checkBalance(int sizearr,int *arr)
{
    int sum=0;
    int afteraction=0;
    int sum_afteraction=0;
    int test=0;
  for (int i=0; i<sizearr; i++)
    {
        sum += arr[i];
    }
    for (int i=0; i<sizearr; i++)
    {
        sum -=arr[i];
        afteraction +=arr[i];
         if( (sum == afteraction))
         {
            return true;
         }
    }

 return false;
}
