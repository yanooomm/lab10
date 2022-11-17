/*Matrix55. Дана матрица размера M × N (M — четное число). 
Поменять местами верхнюю и нижнюю половины матрицы.*/

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
    for (int i = 0; i < m; i++)
    {
        a[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 20;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < m / 2; i++)
        for (int j = 0; j < n; j++)
            swap(a[i][j], a[n / 2 + i][j]);

    cout << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
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

1       7       14      0       9
4       18      18      2       4
5       5       1       7       1
11      15      2       7       16

5       5       1       7       1
11      15      2       7       16
1       7       14      0       9
4       18      18      2       4
*/
