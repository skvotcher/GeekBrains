#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>
#include <fstream>
#include <string>
#include "ConsoleApplication3.h"
using namespace std;
class Array
{

	double value_determinant = 0;
	public:
		int get_params()
		{
			cout << "Введите количество столбцов матрицы=";
			cin >> ROWS;
			cout << "Введите количество строк матрицы=";
			cin >> COLS;
			return 0;
		}
		double	**memory_allocate_array()
		{
			arr = new double *[ROWS];
			for (int i = 0; i < ROWS; i++)
			{
				arr[i] = new double[COLS];
			}
			return arr;
		}
		double **put_array_random()
	{
		for (int row = 0; row < ROWS; row++)
		{
			for (int col = 0; col < COLS; col++)
			{
				arr[row][col] = rand() % 2;
			}
			
		}
		return arr;
	}
		double **put_array_user()
	{
		for (int row = 0; row < ROWS; row++)
		{
			for (int col = 0; col < COLS; col++)
			{
				cout << "Введите arr[" << row << "][" << col << "]=";
				cin >> arr[row][col];
			}

		}
		return arr;
	}
		void output_array()
	{
		for (int row = 0; row < ROWS; row++)
		{
			for (int col = 0; col < COLS; col++)
			{
				//cout << "arr[" << row << "][" << col << "]=" << arr[row][col] << endl;
				cout << arr[row][col] << "\t";
			}
			cout << endl;
		}
	}
		void get_params_from_file(string path, string str)
	{
		ifstream matrix;
		matrix.open(path, ios::app);
		if (!matrix)
		{
			cout << "Файл не может быть открыт!\n";
		}
		else
		{		
				getline(matrix, str);
				char* str_to_char = new char[str.size() + 1];
				strcpy(str_to_char, str.c_str());
				char* pch = strtok(str_to_char, " ");
				for (COLS = 0; pch != NULL; COLS++)
				{
					pch = strtok(NULL, " ");
				}
				delete[]str_to_char;	
					
					
				
				for (ROWS = 1; !matrix.eof(); ROWS++)
				{
					getline(matrix, str);
				}
					
		}
		matrix.close();

	}
		double **put_array_from_file(string path, string str)
	{
		ifstream matrix;
		matrix.open(path, ios::app);
		if (!matrix)
		{
			cout << "Файл не может быть открыт!\n";
		}
		else
		{
			for (ROWS = 0; !matrix.eof(); ROWS++)
			{
				getline(matrix, str);
				char* str_to_char = new char[str.size() + 1];
				strcpy(str_to_char, str.c_str());
				char* pch = strtok(str_to_char, " ");
				for (COLS = 0; pch != NULL; COLS++)
				{
					arr[ROWS][COLS] = atoi(pch);
				pch = strtok(NULL, " ");
				}
				delete[]str_to_char;			
			}

		}
		matrix.close();
		return arr;
	}
		void chek_matrix()
	{
		if (ROWS != COLS)
		{
			cerr << "Не возможно выполнить расчет определителя матрицы, матрица не квадратная";
			exit(1);
		}
	}
		void GetMatr(int** mas, int** p, int i, int j, int m) {
			int ki, kj, di, dj;
			di = 0;
			for (ki = 0; ki < m - 1; ki++) { // проверка индекса строки
				if (ki == i) di = 1;
				dj = 0;
				for (kj = 0; kj < m - 1; kj++) { // проверка индекса столбца
					if (kj == j) dj = 1;
					p[ki][kj] = mas[ki + di][kj + dj];
				}
			}
		}
		int Determinant(int** mas, int ROWS) {
			int i, j, d, k, n;
			int** p;
			p = new int* [ROWS];
			for (i = 0; i < ROWS; i++)
				p[i] = new int[ROWS];
			j = 0; d = 0;
			k = 1; //(-1) в степени i
			n = ROWS - 1;
			if (ROWS < 1) cout << "Определитель вычислить невозможно!";
			if (ROWS == 1) {
				d = mas[0][0];
				return(d);
			}
			if (ROWS == 2) {
				d = mas[0][0] * mas[1][1] - (mas[1][0] * mas[0][1]);
				return(d);
			}
			if (ROWS > 2) {
				for (i = 0; i < ROWS; i++) {
					GetMatr(mas, p, i, 0, ROWS);
					cout << mas[i][j] << endl;
					d = d + k * mas[i][0] * Determinant(p, n);
					k = -k;
				}
			}
			return(d);
		}
		void print_determinant()
		{
			cout << "Детерминант заданной вами матрицы = "<<value_determinant << endl;
		}
		private:
		double** arr;
		int ROWS = 0;
		int COLS = 0;
		
		
		/*
		*
		*   Подумать как реализовать деструктор, нужен доступ к arr, который является закрытым членом класса
		*
		*
		*		~Array()
		*		{
		*			for (int col = 0; col < COLS; col++)
		*			{
		*				delete[]arr[col];
		*			}
		*			delete[]arr;
		*			cout << "Деструктор класса отработал" << endl;
		*
		*		}
		*/
	
};
int main()
{
	setlocale(0, "Rus");
	srand(time(NULL));
	int var;
	Array array;
	string str;
	string path = "text.txt";
	cout << "Введите каким способом вы хотите заполнить матрицу" << endl << "1. Рандомно" << endl << "2. Самостоятельно" << endl << "3. Из файла" << endl;
	cin >> var;
	switch (var)
	{
		case 1:
		{
		cout << "Вы выбрали рандомное заполнение матрицы" << endl;
		array.get_params();
		array.memory_allocate_array();
		array.put_array_random();
		array.output_array();
		}
		break;
		case 2:
		{
		cout << "Вы выбрали самостоятельное заполнение матрицы" << endl;
		array.get_params();
		array.memory_allocate_array();
		array.put_array_user();
		array.output_array();
		}
		break;
		case 3:
		{
		cout << "Вы выбрали заполнение матрицы из файла" << endl;
		array.get_params_from_file(path, str);
		array.memory_allocate_array();
		array.put_array_from_file(path, str);
		array.output_array();
		}
		break;
		default:
		{
		cout << "Ты че, пес, тупой что ли?";
		}
		}
		array.chek_matrix();
		array.Determinant();
		array.print_determinant();
	return 0;
}

