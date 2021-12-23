// https://cses.fi/problemset/task/1095/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define nline '\n';
#define len(x) (int)(x).size()
#define all(x) x.begin(), x.end()
#define rall(x) (x).rbegin(),(x).rend()
#define e 2.718281828459045

int dx[8] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[8] = {1, -1, 0, 0, 1, -1, -1, 1};
int dx4[4] = {-1, 1, 0, 0};
int dy4[4] = {-0, 0, -1, 1};
const double PI = 2 * asin(1);
const int MOD = 1e9 + 7;
const ll OO = 1e18;
const double eps = 1e-9;

ll pw(ll a, ll p){
    if(p == 0) return 1;
    ll result = 1;
    while(p > 0){
        if(p & 1) result = (result % MOD * a % MOD) % MOD;
        a = (a % MOD * a % MOD) % MOD;
        p >>= 1;
    }
    return result;
}

void IO() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

//.....................................................................................//


int main() {
    int n;
    scanf("%d", &n);
    while(n--){
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%lld\n", pw(a, b));
    }
}

