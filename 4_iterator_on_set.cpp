#include <iostream>
#include <iterator>
#include <set>

using namespace std;

int main()
{
  set<int> s = {1, 5, 4, 2, 3};
  set<int>::iterator ptr;

  cout << "The set elements are : ";
  for (ptr = s.begin(); ptr != s.end(); ptr++) // Note the change here!
  {
    cout << *ptr << " ";
  }
  cout << endl;

  return 0;
}
