#include<iostream>
using namespace std;
#define GEOMETRIA_1
#define GEOMETRIA_2
#define GEOMETRIA_3
#define GEOMETRIA_4
#define GEOMETRIA_5
#define GEOMETRIA_6

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите клличество   : "; cin >> n;
	//Добавил пробелы
#ifdef GEOMETRIA_1
	{


		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << "* ";
			}

			cout << endl;

		}
		cout << endl;
	}

#endif // GEOMETRIA_1

#ifdef GEOMETRIA_2
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";

		}
		cout << endl;
	}
	cout << endl;


#endif // GEOMETRIA_2

#ifdef GEOMETRIA_3
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << "* ";
		for (int j = 0; j < i; j++) cout << "  ";


		cout << endl;
	}
	cout << endl;

#endif // GEOMETRIA_3


#ifdef GEOMETRIA_4
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++) cout << "  ";
		for (int j = i; j < n; j++) cout << "* ";

		cout << endl;
	}
	cout << endl;
#endif // GEOMETRIA_4

#ifdef GEOMETRIA_5

	for (int i = 0; i < n; i++)

	{

		for (int j = i; j < n; j++) cout << "  ";
		for (int j = 0; j <= i; j++) cout << "* ";


		cout << endl;
	}
	cout << endl;
#endif // GEOMETRIA_5


#ifdef GEOMETRIA_6
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i + j) % 2 == 0)cout << "+ ";
			//else cout << "- ";
			cout << ((i + j) % 2 == 0 ? "+" : "-");
		}

		cout << endl;

	}
	cout << endl;

#endif // GEOMETRIA_6

}









