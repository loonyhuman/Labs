#include <iostream>
#include <ctime>
#define M 3
#define N 3
using namespace std;

int** allocateMemory(int m, int n)
{
	int** pointer = new int*[m];

	for (int i = 0; i < m; ++i)
	{
		pointer[i] = new int[n];
	}

	return pointer;
}

int random(int min, int max)
{
	return min + rand() % (max - min);
}

void fill(int** matrix, int m, int n)
{
	srand(time(NULL));
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

int solution(int** matrix, int m, int n, int q)
{
	int l = 0;
	for (int i = 0; i < M; i++)
		for (int j = 0; j<N; j++)
			if (matrix[i][j]<0 && abs(matrix[i][j]) > q)
				l = l + 1;
	return l;
}

int main()
{
	int** A;
	A = allocateMemory(M, N);
	fill(A, M, N);
	print(A, M, N);
	cout << "Input k: " << endl;
	int k;
	cin >> k;
	cout << "n= " << solution(A, M, N, k) << endl;
	system("pause");
	return 0;
}
