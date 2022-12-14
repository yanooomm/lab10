/*Matrix25. Дана матрица размера M × N. Найти номер ее строки с наибольшей 
суммой элементов и вывести данный номер, а также значение наибольшей суммы.*/

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int m;
	cout << "Введите количество строк" << endl;
	cin >> m;
	int n; 
	cout << "Введите количество столбцов" << endl;
	cin >> n;
	cout << endl;
	int smax = 0;
	int imax = 0;
	int** a = new int* [m];
	for (int i = 0; i < m; i++)
	{
		int s = 0;
		a[i] = new int[n+1];
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % 20;
			cout << a[i][j] << "\t";
			s += a[i][j];
		}
		if (s > smax)
		{
			smax = s;
			imax = i + 1;
		}
		cout << endl;
	}

	cout << endl << "Максимальная сумма элементов: " << smax << endl << "Строка с максимальной суммой элементов: " << imax;
}


/*
Введите количество строк
4
Введите количество столбцов
5

1       7       14      0       9
4       18      18      2       4
5       5       1       7       1
11      15      2       7       16

Максимальная сумма элементов: 51
Строка с максимальной суммой элементов: 4
*/



/*
Введите количество строк
3
Введите количество столбцов
6

1       7       14      0       9       4
18      18      2       4       5       5
1       7       1       11      15      2

Максимальная сумма элементов: 52
Строка с максимальной суммой элементов: 2
*/