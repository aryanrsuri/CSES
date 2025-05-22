/*
 * Author: Aryan Suri
 * Licence: MIT
 * */
#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() 
{
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        if (n == 2 || n == 3) {
                cout << "NO SOLUTION" << endl;
                return 0;
        }

        for (int i = 1; i < n+1; i++) {
                if (i%2==0) {
                        cout << i << " ";
                }
        }
         
        for (int i = 1; i < n+1; i++) {
                if (i%2!= 0) {
                        cout << i << " ";
                }
        } 
        cout << endl;
        return 0;
}
