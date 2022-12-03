#include <iostream>
using namespace std;
template <class X>
X large(X a, X b, X c)
{
    if (a > b)
    {
        if (a > c)
            return a;
    }
    else
    {
        if (b > c)
            return b;
        else
            return c;
    }
}
int main()
{
    cout << "Large among int is " << large<int>(10, 11, 12) << endl;
    cout << "Large among float is " << large<float>(10.12f, 121.11f, 12.44f);
    return 0;
}