#include<iostream>
#include<vector>
using namespace std;

#define ll long long
#define fastIO() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


void solve(int n, int k, vector<int> &arr) {
    int count = 0;
    int give = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= k) {
            give += arr[i];
        } else if (arr[i] == 0) {
            if (give != 0) {
                give--;
                count++;
            }
        }
    }
    cout << count << endl;
}
 
int main() {
    fastIO(); // Fast I/O
    int t;
    int n, k;
    cin >> t;  // Input the number of test cases
    while (t--) {
        cin >> n >> k;
        vector<int> arr(n);  // Using a vector with size n
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        solve(n, k, arr);  // Solve each test case
    }
    return 0;
}