#include <iostream>
using namespace std;

int main() {
    int n, m; // number of queries
    cin >> n >> m;

    int a[m]; // array referenced by
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        cout << a[x+y] << endl;
    }

    return 0;
}
