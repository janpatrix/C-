#include <iostream>
int main()
{
	using namespace std;
	int updates = 6;
	int * p_updates;
	p_updates = &updates;

	cout << "Values: update = " << updates;
	cout << ", * p_updates = " << *p_updates << endl;
	return 0;

}