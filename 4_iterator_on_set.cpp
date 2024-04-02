#include <iostream>
#include <iterator>
#include <set>

using namespace std;

int main()
{
  set<int> ar = {1, 2, 3, 4, 5};
  set<int>::iterator ptr;

  cout << "The set elements are : ";
  for (ptr = ar.begin(); ptr != ar.end(); ptr++) // Note the change here!
  {
    cout << *ptr << " ";
  }
  cout << endl;

  return 0;
}
