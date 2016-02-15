#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main()
{
    array<double, 4> a = {3.14, 2.72, 1.62, 1.41};
    array<double, 4> a2;
    a2 = a;

    cout << a[1] << " " << a2[1] << endl;

    return 0;
}