#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int p = (a + b + c) / 2;
    int s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "S треугольника = " << s << endl;
}
