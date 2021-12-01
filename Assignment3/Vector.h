class Vector{
private:
    const size_t _DEFAULT_CAPACITY=10;
    int* _begin; // first iterator
    size_t _size;
    size_t _capacity;
    void _reserve(size_t);
    void _init();

public:
    Vector();
    Vector(size_t);
    ~Vector();
    
    int* begin(){return _begin;}

    size_t capacity(){return _capacity;}
    void push(int);
    size_t size();
    void pop();
    int get(size_t);
    void set(size_t,int);

};