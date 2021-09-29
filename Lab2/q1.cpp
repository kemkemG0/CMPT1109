#include <iostream>
using namespace std;
int main() {
 string name;
 cout << "Enter a name : ";
cin >> name;
if (isupper(name[0]))
  cout << "\n" << name << " has right format! "<<endl;

if (name.size() < 5)
  cout << "\n" << name << " is short !" <<endl;
else
cout << "\n" << name << " is long !" <<endl;

 return 0;
}



