#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
  vector<int> ar = {1, 2, 3, 4, 5};
  vector<int>::iterator ptr = ar.begin();
  vector<int>::iterator ftr = ar.end();

  auto it = next(ptr, 1);
  auto it1 = prev(ftr, 1);

  cout << "The position of new iterator using next() is: ";
  cout << *it << " ";
  cout << endl;

  cout << "The position of new iterator using prev() is: ";
  cout << *it1 << " ";
  cout << endl;

  return 0;
}
