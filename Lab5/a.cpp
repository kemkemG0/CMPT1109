#include <iostream>
#include <random>

double genData(int low, int high);
double genData(int high);
int genData(void);

int main() {
  srand(time(0));
  return 0;
}

double genData(int low, int high){
  int int_part = rand()%(high-low+1) + low;
  int frac_part = rand()%100;
  return (double)int_part+(double)frac_part*0.01;
}


double genData(int high){return genData(0,high);}


int genData(void){return rand()%101 * (rand()%2?-1:1);}


void minMax(){
  
}