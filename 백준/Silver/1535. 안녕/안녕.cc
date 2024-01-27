#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int L[21], J[21]; // 체력 소모량과 기쁨 배열 - 사람이 20명이 최대라서 크기 21
    for (int i = 1; i <= n; i++) {
        cin >> L[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> J[i];
    }

    int dp[101] = { 0 }; // dp[i]는 체력 i를 사용했을 때 얻을 수 있는 최대 기쁨

    for (int i = 1; i <= n; i++) {
        for (int j = 99; j >= L[i]; j--) {
            dp[j] = max(dp[j], dp[j - L[i]] + J[i]);
        }
    }

    cout << dp[99] << endl;

    return 0;
}
