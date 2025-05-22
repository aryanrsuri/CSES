/*
 * Author: Aryan Suri
 * Licence: MIT
 * */
#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int m = 0;
    cin >> n;
    vector<int> A(n);
    for (int& a: A) {
    	cin >>a;
    }

    for (int i = 1 ; i < n; i++) {
    	int d = A[i] - A[i-1];
    	if (d < 0)  {
    		A[i] = A[i-1];
    		m += abs(d); 
    	}
    }
    cout << m << endl;


    return 0;
}