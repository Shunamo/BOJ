#include <iostream>
using namespace std;

int Z(int n, int row, int col){

    if (n == 0) return 0;

    int center = 1 << (n - 1);

    if (row < center && col < center) {
        return Z(n - 1, row, col);
    }
    else if (row < center && col >= center) {
        return center * center + Z(n - 1, row, col - center);
    }
    else if (row >= center && col < center) {
        return 2 * center * center + Z(n - 1, row - center, col);
    }
    else {
        return 3 * center * center + Z(n - 1, row - center, col - center);
    }
}

int main() {
    int n, row, col;
    cin >> n >> row >> col;
    cout << Z(n, row, col) << endl;
    return 0;
}
