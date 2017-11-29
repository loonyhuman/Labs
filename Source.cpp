#include <iostream>
#include <ctime>
#define M 3
#define N 3
#define k 0
using namespace std;

int random(int min, int max)
{
	return min + rand() % (max - min);
}

void fill(int** matrix, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			matrix[i][j] = random(-100, 100);
		}
	}
}

void print(int** matrix, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "A[" << i << "][" << j << "] : " << matrix[i][j] << endl;
		}
	}
}

int main()
{
	int** A = new int*[M];
	for (int i = 0; i < M; ++i)
		A[i] = new int[N];

	srand(time(NULL));
	fill(A, M, N);
	print(A, M, N);
	int i, j;
	int n = 0;
		for (i = 0; i < M; i++)
			for (j = 0; j<N; j++)
				if (A[i][j]<0 && abs(A[i][j]) > k)
					n = n + 1;
		cout << n << endl;
	system("pause");
	return 0;
}