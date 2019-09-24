#include "Figure.h"

void Rectangle(int y, int x)
{
	for (int i = 0; i <= x - 1; i++)
	{
		for (int j = 0; j <= y - 1; j++)
		{
			if (i == 0)
			{
				cout << "* ";
				continue;
			}
			if (j == 0 && i != 0 && i != x - 1)
			{
				cout << "* ";
				continue;
			}
			if (j != 0 && i != 0 && i != x - 1 && j != y - 1)
			{
				cout << "  ";
				continue;
			}
			else if (j == y - 1)
			{
				cout << "*";
				continue;
			}
			if (i == x - 1)  cout << "* ";
		}
		cout << endl;
	}
}

void Triangle_equal(int x)
{
	bool f1 = false;
	for (int i = 0; i < x; i++)
	{
		for (int j = x; j > i + 1; j--)
		{
			cout << " ";
			f1 = false;
		}		
		for (int j = 0; j <= i; ++j)
		{
			if (i == j || i == x - 1)
			{
				cout << " *"; 
				continue;
			}
			if (f1)
			{
				cout << "  ";
			}
			else
			{
				cout << " *";
				f1 = true;
			}	
			
		}	
		cout << endl;
	}
}

void Triangle_right(int x)
{
	bool f2 = false;
	cout << endl;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j <= i; ++j)
		{
			if (j == i || i == x - 1)
			{
				cout << " *";
				continue;
			}
			if (f2)
			{
				cout << "  ";
			}
			else
			{
				cout << " *";
				f2 = true;
			}

		}
		for (int j = x; j > i + 1; j--)
		{
			cout << " ";
			f2 = false;
		}
		cout << endl;
	}
}

void Diamond(int x)
{
	{
		bool f1 = false;
		for (int i = 0; i < x; i++)
		{
			for (int j = x; j > i + 1; j--)
			{
				cout << " ";
				f1 = false;
			}
			for (int j = 0; j <= i; ++j)
			{
				if (i == j)
				{
					cout << " *";
					continue;
				}
				if (i == (x - 1) && j == 0) 
				{
					cout << " *";
					continue;
				}
				if (f1)
				{
					cout << "  ";
				}
				else
				{
					cout << " *";
					f1 = true;
				}

			}
			cout << endl;
		}
	}

	{
		bool f2 = false;
		for (int i = 0; i <= x; i++)
		{
			for (int j = 0; j <= i; ++j)
			{
				cout << " ";
				f2 = false;
			}

			for (int j = x; j > i + 1; j--)
			{
				if (j == i + 2)
				{
					cout << " *";
					continue;
				}
				if (f2)
				{
					cout << "  ";
				}
				else
				{
					cout << " *";
					f2 = true;
				}

			}

			cout << endl;

		}
		
	}
}
