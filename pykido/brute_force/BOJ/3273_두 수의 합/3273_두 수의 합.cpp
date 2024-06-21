#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, x;
    cin >> n;
    int arr[100001];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> x;

    // 오름차순 정렬
    sort(arr, arr + n);

    int left = 0, right = n - 1;
    int cnt = 0;

    // 투 포인터 알고리즘
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == x) {
            cnt++;
            left++;
            right--;
        } else if (sum < x) {
            left++;
        } else {
            right--;
        }
    }

    cout << cnt << endl;

    return 0;
}
