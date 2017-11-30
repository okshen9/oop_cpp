#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "Construct Base object\n"; }
    ~Base() { cout << "Destruct Base object\n"; }
};

int main(int argc, char *argv[])
{
    Base base;
    cout << "* Create Object base" << endl;
    int s = 0;//summa
    double sr; //midle value
    for(int i = 0; i < 10; ++i)
    {
        s += i;
    }//s = 10!
    sr = s / 10;
    cout << s << " " << sr << endl;//vivod
    return 0;
}
