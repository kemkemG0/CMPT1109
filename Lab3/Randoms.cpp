#include <iostream>
#include <random>

using namespace std;

int main() {
  srand (time(NULL));
  // -5 + [0, 10]
  double r1 = -5 + (random() % 11);
  // [0, 99]+ [0, 99]*0.01
  double r2 = random() % 100 + (random() % 100) * 0.01;
  // ('a'||'A') + [0, 25]
  char r3 = (random() % 2 ? 'a' : 'A') + random() % 26;

  cout << r1 << " " << r2 << " " << r3 << endl;

  return 0;
}