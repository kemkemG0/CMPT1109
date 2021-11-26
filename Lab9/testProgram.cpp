#include<iostream>
#define SAFE_DELETE(p)  {delete[] p; p = nullptr;}

using namespace std;


// Given prototypes
double* copyArray (double data [], int size);
int* reverse (int* data, int size);
int* primes(int number, int& size);
void minMax(double *list, int size, double *min, double *max);
// To print array
template <class T> 
void printArray(T* list,int size){
    for (int i = 0; i < size; i++)cout<<list[i]<<" ";    
    cout<<endl<<endl;
}

const double INF = 1e18;

int main(){
    // Copy Array
    int size = 5;
    double data_double[] = {1.1, 2.2, 3.3, 4.4, 999.999};
    double* copied_array = copyArray(data_double, size);
    cout<<"Copied"<<endl;
    printArray(copied_array,size);
    SAFE_DELETE(copied_array);
    
    // Reverse Array
    int data_int[] = {1, 2, 3, 4, 999};
    int* reversed_array = reverse(data_int, size);
    cout<<"Reversed"<<endl;
    printArray(reversed_array, size);
    SAFE_DELETE(reversed_array);

    
    // Get Primes less than number
    int number = 100; size = 0;
    int* primes_array = primes(number, size);
    cout<<"Primes"<<endl;
    printArray(primes_array,size);
    cout<<"num of primes less than "<<number<<": "<<size<<endl<<endl;
    SAFE_DELETE(primes_array);
    
    //Get MAX and MIN in Array
    double min,max;
    size = 5;
    minMax(data_double, size, &min, &max);
    cout<<"min: "<<min<<" max: "<< max << endl;

    return 0;
}

double* copyArray (double data [], int size){
    double* copied_array = new double[size];
    for (int i = 0; i < size; i++) copied_array[i]=data[i];
    return copied_array;
}

int* reverse (int* data, int size){
    int* reversed_array = new int[size];
    for (int i = 0; i < size; i++) reversed_array[size-1 - i] = data[i];
    return reversed_array;
}

int* primes(int number, int& size){
    // use Eratosthenes Sieve
    int* primes_array = new int[number];
    // init is_prime with true
    bool is_prime[number];
    for (int i = 0; i < number; i++)is_prime[i]=true;
    is_prime[0]=is_prime[1]=false;
    
    for (int p = 2; p < number; p++){
        if(!is_prime[p])continue;
        //if p is prime, add
        primes_array[size++] = p;
        // drop  every p's multiple(start from q=p*p)
        for (int q = p*p; q < number; q+=p) is_prime[q]=false;
    }
    return primes_array;
}

void minMax(double *list, int size, double *min, double *max){
    //init with extreme value
    *min = INF; *max = -INF;
    
    for (int i = 0; i < size; i++){
        if(list[i]>(*max)) *max = list[i];
        if(list[i]<(*min)) *min = list[i];
    }
    return;
}


