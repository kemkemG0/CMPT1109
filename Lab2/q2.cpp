#include <iostream>
using namespace std;

int main() {
  cout << "Enter a, b, c, d, e, f:";
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