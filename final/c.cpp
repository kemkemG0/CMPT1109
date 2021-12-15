#include<bits/stdc++.h>
using ll= long long;
#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define FOR(i,a,b) for(ll i=a;i<=ll(b);i++)
#define ALL(x) x.begin(),x.end()

#define INF (ll)1e9
#define LLINF (ll)1e15
#define MOD (ll)(1e9+7)
#define PI 3.141592653589

#define YESNO(T) cout<<((T)?"YES":"NO")<<endl;
#define yesno(T) cout<<((T)?"yes":"no")<<endl;
#define YesNo(T) cout<<((T)?"Yes":"No")<<endl;

#define DDD fixed<<setprecision(10)
#define endl "\n"

#define __MAGIC__ ios::sync_with_stdio(false);cin.tie(nullptr);

using namespace std;
/*..................DEFINE GLOBAL VARIABLES...................*/


/*.....................DEFINE FUNCTIONS ......................*/

void test(int a[]){
    int* b = new int[100];
    a = b;
    REP(i,30)a[i]=100;
    // a = bb;
}

/*.........................kemkemG0...........................*/
signed main() {
    __MAGIC__
    
    int aaa[10];
    auto f = &aaa;
    test(aaa);
    auto e = &aaa;
    cout<<(f==e)<<endl;
    cout<<aaa[0]<<endl;
    
    
    
    
    
    
    
    
        return 0;
}
