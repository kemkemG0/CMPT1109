#include <iostream>
#include <random>

using namespace std;

int main() {
  random_device rnd;
  // 10 + [-5, 5]
  double r1 = 10 + (rnd() % 6) * (rnd() % 2 ? -1 : 1);
  // [0, 99]+ [0, 99]*0.01
  double r2 = rnd() % 100 + (rnd() % 100) * 0.01;
  // ('a'||'A') + [0, 25]
  char r3 = (rnd() % 2 ? 'a' : 'A') + rnd() % 26;

  cout << r1 << " " << r2 << " " << r3 << endl;
}