#include <iostream>
using namespace std;

int main() {
  cout << "Put 6 numbers a,b,c,d,e and f to make to solve this below." << endl;
  cout << "ax + by = e" << endl;
  cout << "cx + dy = f" << endl;
  double a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  double denom = a * d - b * c;
  if (denom == 0) {
    cout << "The equation has no solution." << endl;
    return 0;
  }

  double ans_x = (e * d - b * f) / denom;
  double ans_y = (a * f - e * c) / denom;

  cout << "x is " << ans_x << " and y is " << ans_y << endl;

  return 0;
}