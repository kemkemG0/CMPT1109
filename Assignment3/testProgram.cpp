#include<iostream>
#include"Vector.h"
#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define INF 1e9

using namespace std;
using ll = long long;

size_t minIndex(const int* v,const size_t size, const unsigned pos);
void selectionSort(int* v,size_t size, size_t pos);

int main(){
	auto a = Vector();
	REP(i,22)a.push(i);
	REP(i,a.size()) cout<<a.get(i)<<" ";
	cout<<endl;
	while(a.size())a.pop();
	REP(i,a.size())cout<<a.get(i)<<endl;
    return 0;
}

size_t minIndex(const int* v,const size_t size, const unsigned pos){
    // return min of v in range [pos,size)
	int mn = INF;
	int ret=0;
	for (int i = pos; i < size; i++) if(mn>v[i]) mn=v[i],ret=i;
	return ret;
}
void selectionSort(int* v,size_t size, size_t pos=0){
	//sort v in [pos,size)
	if(pos==size) return;
	swap(v[pos] , v[minIndex(v,size, pos)]);
	selectionSort(v,size,pos+1);
}