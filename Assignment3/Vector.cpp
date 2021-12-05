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


std::invalid_argument Vector:: _throw_out_of_range(size_t ind){
    const std::string error_msg = 
        std::to_string(ind) + " >= size()";
    throw std::out_of_range(error_msg);
}


size_t Vector::size(){return _size;}

int Vector::get(size_t ind){
    if(ind>=size()) _throw_out_of_range(ind);
    return *(begin() + ind);
}


void Vector::set(size_t ind, int val){
    if(ind>=size()) _throw_out_of_range(ind);
    *(begin() + ind) = val;
    return;
}


void Vector::pop(){
    if(size()) _size--;
    return;
}


void Vector::push(int val){
    if(capacity()==size()) _reserve(capacity()*2);
    *(begin() + size())=val;
    _size++;
    return;
}
