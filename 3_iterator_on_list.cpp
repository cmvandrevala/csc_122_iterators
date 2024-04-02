#include <iostream>
#include <iterator>
#include <list>

using namespace std;

int main()
{
  list<int> ar = {1, 2, 3, 4, 5};
  list<int>::iterator ptr;

  cout << "The list elements are: ";
  for (ptr = ar.begin(); ptr != ar.end(); ptr++) // Note the change here!
  {
    cout << *ptr << " ";
  }
  cout << endl;

  return 0;
}
