#include<iostream>
#define INF 1e9

using namespace std;

using ui = unsigned int;
ui minIndex(const int* v,const ui size, const unsigned pos){
    // return min of v in range [pos,size)
	int mn = INF;
	int ret=0;
	for (int i = pos; i < size; i++) if(mn>v[i]) mn=v[i],ret=i;
	return ret;
}
void selectionSort(int* v,ui size, ui pos=0){
	//sort v in [pos,size)
	if(pos==size) return;
	swap(v[pos] , v[minIndex(v,size, pos)]);
	selectionSort(v,size,pos+1);
}

int main(){

    return 0;
}