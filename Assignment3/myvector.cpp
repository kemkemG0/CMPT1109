#include<iostream>
#include"myvector.h"


myVector::myVector(){
    _init();
    _reserve(_DEFAULT_CAPACITY);
}


myVector::myVector(int capa){
    _init();
    _reserve(capa);
}


myVector::~myVector(){
    delete[] _begin;
    _begin = nullptr;
}


void myVector::_init(){
    _begin = nullptr;
    _size = _capacity = 0;
}


void myVector::_reserve(int capa){
    // if capacity is enough return;
    if(capa <= capacity()) return;

    //Allocate memory and copy current values
    int* old_begin = begin();
    int old_capacity = capacity();
    _begin  = new int[capa];
    _capacity = capa;
    // If this is called in constructor, no need to copy
    if(old_begin==nullptr) return;

    // !!COPY!!
    for (size_t i = 0; i < size(); i++)
        *(begin()+i) = *(old_begin+i);

    // DELETE previous memories
    delete[] old_begin;
    old_begin = nullptr;
}


int myVector::size(){return _size;}


int myVector::get(int ind){
    assert(ind<size());// Notice: <
    return *(begin() + ind);
}


void myVector::set(int ind, int val){
    assert(ind<=size());// Notice: <=
    *(begin() + ind) = val;
}


void myVector::pop(){
    if(size()){
        _size--;
    }else{
        std::cout<<size()<<std::endl;
        std::cout<<"EMPTY!!!"<<std::endl;
    }
    return;
}


void myVector::push(int val){
    if(capacity()==size()) {
        _reserve(capacity()*2);
    }
    set(size(),val);
    _size++;
    return;
}
