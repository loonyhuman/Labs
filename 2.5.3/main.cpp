#include <iostream>
#include <string>
#define ROWS 5
#define COLUMNS 5
using namespace  std;

int random(int min, int max)
{
	return min + rand() % (max - min);
}

void fill(double** matrix, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			matrix[i][j] = random(1, 10);
		}
	}
}

double** allocateMemory(int m, int n)
{
	double** pointer = new double*[m];

	for (int i = 0; i < m; ++i)
	{
		pointer[i] = new double[n];
	}

	return pointer;
}

int main()
{
	double A[ROWS][COLUMNS];
	double C[COLUMNS];
	double P, T;
	double X[COLUMNS];
	system("pause");

}