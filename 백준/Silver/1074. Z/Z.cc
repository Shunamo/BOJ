#include <iostream>
using namespace std;

int Z(int n, int row, int col, int count);

int main() {
    int count = 0;
    int n, row, col;
    cin >> n >> row >> col;
    cout << Z(1 << n, row, col, count); // 2의 거듭제곱으로 변환
}

int Z(int n, int row, int col, int count) {
    if (n == 1) return count; // 기저 조건

    int half = n / 2;
    if (row < half && col < half) {
        return Z(half, row, col, count); // 좌상단 영역
    } else if (row < half && col >= half) {
        return Z(half, row, col - half, count + half * half); // 우상단 영역
    } else if (row >= half && col < half) {
        return Z(half, row - half, col, count + 2 * half * half); // 좌하단 영역
    } else {
        return Z(half, row - half, col - half, count + 3 * half * half); // 우하단 영역
    }
}
