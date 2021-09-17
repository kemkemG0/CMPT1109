/* 
** This program finds the roots of a quadratic equation like 
** ax^2 + bx + c = 0. Using math, the two roots are fourmlated 
** as follows: 
** x1 = (-b + squareRoot(b^2 - 4ac)) / 2a
** x2 = (-b - squareRoot(b^2 - 4ac)) / 2a
*/


using namespace std
int main() {
	double a = 2, b = 4, c = 2;
	int x1, x2;
	double delta = b*b - 4 * a * c;
	x1 = (-b + pow(delta, 0.5)) / 2*a; 
	x2 = (-b - pow(delta, 0.5)) / 2*a; 
	cout << "Roots of " << a << "x^2 + "     // Print the result
		 << b << "x + " << c <<"= 0 are:" << endl;
	cout << "x1 = " << x1 << "\n"; 
	cout << "x2 = " << x2 << "\n"; 
	cout << "Delta is " << delta << "\n";
	return ;
} 