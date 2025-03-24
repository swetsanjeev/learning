//adding comment to check if I can push it or not
#include <iostream>
using namespace std;
int main()
{
	int row;
	cin >> row;
	bool reverse = false;
	int i = 1;
	while (i > 0)
	{
		int j;
		string star(i, '*');
		cout << star;
		j = 0;
		while (j < (2 * (row - i)))
		{
			cout << " ";
			j++;
		}
		cout << star;
		cout << endl;

		reverse ? i-- : i++;
		if (i > row)
		{
			reverse = true;
			i--;
		}

	}
	return 0;
}