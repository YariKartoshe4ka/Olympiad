#include <iostream>
using namespace std;


int main() {
    freopen("point1.in", "r", stdin);
    freopen("point1.out", "w", stdout);

    int x, y, a, b, c;
    cin >> x >> y >> a >> b >> c;

    cout << (a * x + b * y + c == 0 ? "YES" : "NO") << endl;

    return 0;
}
