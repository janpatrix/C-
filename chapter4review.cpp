#include <iostream>
using namespace std;

int main()
{
    struct fish {
        string kind;
        int weight;
        double length;
    };

    enum Response {No, Yes, Maybe};
    Response resp;

    double ted = 1.01;
    double * pd = &ted;

    cout << *pd << endl;

    float treacle[10] = {1.99, 2.99};
    float * pf = treacle;

    cout << * (pf+1) << endl;

    fish goldfish = {"Super Goldfish", 5, 12.01};
    cout << goldfish.kind << endl;

}