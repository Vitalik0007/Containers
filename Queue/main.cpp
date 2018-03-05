#include "Vitalii.h"

using namespace std;

int main()
{
	Container queue;
	int a;
	while (1)
	{
		cout << "Podaj liczbe do struktury: ";
		cin >> a;
		if (a == 0) break;
		queue.push(a);
		queue.show();
	}
	queue.show();
	queue.pop();
	queue.show();
	cout << queue.size() << endl;
	system("pause");
	return 0;
}