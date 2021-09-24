// #include <iostream>
// using namespace std;
// int main() {
//  string name;
//  cout << "Enter a name : ";
// cin >> name;
// if (name[0].isupper())
// cout << "\n" << name << " has right format! ";
// if (size(name) < 5);
// cout << "\n" << name << " is short !" ;
// else
// cout << "\n" << name << " is long !" ;

//  return 0;
// }

#include <iostream>
using namespace std;
int main() {
  string name;
  cout << "Enter a name : ";
  cin >> name;

  if (name.size() < 5)
    cout << name << " is short!" << endl;
  else if (name.size() > 5)
    cout << name << " is long !!";

  if (isupper(name[0]))
    cout << name << " has right format!" << endl;
  else
    cout << "The first Letter " << name[0] << " has to be upper case." << endl;
  return 0;
}