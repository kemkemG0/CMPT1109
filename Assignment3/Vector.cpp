#include<iostream>
#include"Vector.h"



Vector::Vector(){
    _init();
    _reserve(_DEFAULT_CAPACITY);
}


Vector::Vector(size_t capa){
    _init();
    _reserve(capa);
}


Vector::~Vector(){
    delete[] _begin;
    _begin = nullptr;
}


void Vector::_init(){
    _begin = nullptr;
    _size = _capacity = 0;
}


void Vector::_reserve(size_t capa){
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


size_t Vector::size(){return _size;}


int Vector::get(size_t ind){
    assert(ind<size());// Notice: <
    return *(begin() + ind);
}


void Vector::set(size_t ind, int val){
    assert(ind<=size());// Notice: <=
    *(begin() + ind) = val;
}


void Vector::pop(){
    if(size()){
        _size--;
    }else{
        std::cout<<size()<<std::endl;
        std::cout<<"EMPTY!!!"<<std::endl;
    }
    return;
}


void Vector::push(int val){
    if(capacity()==size()) {
        _reserve(capacity()*2);
    }
    set(size(),val);
    _size++;
    return;
}
