#include "Vitalik.h"

int main()
{
	Container c;
	int a;
	while (1)
	{
		cout << "Input a number to the container: ";
		cin >> a;
		if (a == 999) break;
		c.push(a);
		c.show();
	}
	c.pop();
	c.show();
	cout << c.size() << endl;
	
	system("pause");
	return 0;
}
