class myVector{
private:
    const int _DEFAULT_CAPACITY=10;
    int* _begin; // first iterator
    int _size;
    int _capacity;
    void _reserve(int);
    void _init();

public:
    myVector();
    myVector(int);
    ~myVector();
    
    int* begin(){return _begin;}

    int capacity(){return _capacity;}
    void push(int);
    int size();
    void pop();
    int get(int);
    void set(int,int);

};