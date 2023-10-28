#include <iostream>
#include <time.h>

using namespace std;

int main()
{	
	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);

	const int N = 10, M = 5;
	int LineForSumm = buf.tm_mday % 5;
	int SummOfLine = 0;

	int array[N][M];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			array[i][j] = i + j;
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

	for (int j = 0; j < M; j++)
	{
		SummOfLine += array[LineForSumm][j];
	}
	cout << "=================================" << endl;
	cout << "Summa " << LineForSumm << " stroki ravna: " << SummOfLine << endl;
	cout << "=================================" << endl;
}

