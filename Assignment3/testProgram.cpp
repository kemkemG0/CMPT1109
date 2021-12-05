#include<iostream>
#include"Vector.h"
#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define INF 1e9

using namespace std;
using ll = long long;

// Prototype
size_t minIndex(const int* v,const size_t size, const size_t pos);
void selectionSort(int* v,size_t size, size_t pos);
void testVector();
void testSelectionSort();
void printVector(Vector &v){
	REP(i,v.size())cout<<v.get(i)<<" ";
	cout<<endl;
}
void printVectorInfo(Vector &v){
	cout<<"Capacity: "<< v.capacity()<<endl;
	cout<<"Size: "<<v.size()<<endl;
}

int main(){
	testSelectionSort();
	testVector();
    return 0;
}


size_t minIndex(const int* v,const size_t size, const size_t pos){
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


void testVector(){
	cout<<"!!! Test Vector !!!"<<endl;
	Vector a;// with default constructor
	printVectorInfo(a);
	cout<<"Push from 0-24, set(5,999) and pop() 3 times"<<endl;
	REP(i,25) a.push(i);
	a.set(5,999);

	printVectorInfo(a);
	printVector(a);
	cout<<endl<<endl;

	try{
		cout<<"Try set(50,100)"<<endl;
		a.set(50,100);// out of index
	}catch(exception& e){
		cout<<"ERROR:";
		cout<<e.what()<<endl<<endl;
	}

	while(a.size()) a.pop();
	try{
		cout<<"Pop untill size()==0 and try get(0)"<<endl;
		cout<<a.get(0)<<endl;// out of index
	}catch(exception& e){
		cout<<"ERROR:";
		cout<<e.what()<<endl<<endl;
	}
	
}


void testSelectionSort(){
	cout<<"!!! Test Selection Sort !!!"<<endl;
	int test_list[] = {5,4,3,2,1,-999,-555};
	int size = 7;
	cout<<"Before: ";
	REP(i,size) cout<<test_list[i]<<" ";
	cout<<endl;

	selectionSort(test_list,size);
	
	cout<<"After: ";
	REP(i,size) cout<<test_list[i]<<" ";
	cout<<endl<<endl;
}