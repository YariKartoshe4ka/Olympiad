#include <iostream>
using namespace std;

int main() {
    long long int a, b, c;
    cin >> a >> b >> c;

    cout << (a*b + b*c + a*c) * 2 << ' ' << a*b*c << endl;

    return 0;
}
