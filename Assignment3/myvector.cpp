class myVector
{
private:
    
public:
    myVector();
    myVector(unsigned int);
    ~myVector();
    template<typename T> void push(T);
    template<typename T> void set(unsigned int,T);
};

myVector::myVector(/* args */)
{
}

myVector::~myVector()
{
}