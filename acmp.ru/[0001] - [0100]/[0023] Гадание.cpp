#include <iostream>
using namespace std;

int main() {
    int n, i, s = 0;
    cin >> n;

    for (i = 1; i <= n; i++) {
        if(n % i == 0)
            s += i;
    }

    cout << s << endl;

    return 0;
}
