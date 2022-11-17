/* Matrix3. Даны целые положительные числа M, N и набор из M чисел. 
Сформировать матрицу размера M × N, у которой в каждом столбце 
содержатся все числа из исходного набора (в том же порядке).*/

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
    int** a = new int* [m];
    for (int i = 0; i < n; i++)
        a[i] = new int[n];
    int* temp = new int[m];
    cout << "Введите строку M" << endl;
    for (int i = 0; i < n; i++)
        cin >> temp[i];
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = temp[i];
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

/*
Введите количество строк
4
Введите количество столбцов
5

Введите строку M
0
9
8
7
6

0       0       0       0       0
9       9       9       9       9
8       8       8       8       8
7       7       7       7       7
6       6       6       6       6
*/


/*
Введите количество строк
5
Введите количество столбцов
3

Введите строку M
1
2
3

1       1       1
2       2       2
3       3       3
*/