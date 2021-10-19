#include <iostream>
#include <cmath>
using namespace std;

double compute(int i, double x)
{
    double coef;
    cout << i + 1 << ". Enter number of coefficient "<< i << " power:";
    cin >> coef;

    if ( i == 0 )
        return coef;
    else
        return coef*pow(x, i) + compute(i - 1, x);
}

int main()
{
        double x;
        cout << "Enter please a number X:";
        cin >> x;

        cout << "The result is: " << compute(2, x) << "\n";
        return 0;
}
