#include <iostream>
#include <string.h>

using namespace std;
char * getname(void);

int main()
{
    char * name;

    name = getname();
    cout << name << " at " << &name << "\n";
    delete [] name;

    name = getname();
    cout << name << " at " << &name << "\n";
    delete [] name;
    return 0;
} 

char * getname(void)
{
    char temp[80];
    cout << "Enter last name: " << endl;
    cin >> temp;
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);

    return pn; 
}