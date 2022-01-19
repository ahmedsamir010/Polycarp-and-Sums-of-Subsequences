//اذا مررت من هنا فادعوا الله ان ييسر لي امري 
#include <iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<algorithm>
#define ahmed  ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
#define ld long double
int counter[1000001] = {};
int main()
{
    ahmed;
    ll t = 0;ll arr[10000];
    cin >> t;
    while (t--) {
        for (int i = 0; i < 7; i++) {
            cin >> arr[i];
        }
        ll mx = *max_element(arr, arr + 7);
        for (int i = 0; i < 7; i++) {
            for (int j = 0; j < 7; j++) {
                for (int k = 0; k < 7; k++) {
                    if (arr[i] + arr[j + 1] + arr[k + 2] == mx) {
                        cout << arr[i] << ' ' << arr[j + 1] << ' ' << arr[k + 2] << endl; break;
                    }
                }
                break;
            }
            break;
        }
    }
    return 0;
}
