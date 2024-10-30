#include <iostream>
#include <iterator>
#include <unordered_set>

using namespace std;

int main()
{
  unordered_set<int> s = {1, 5, 4, 2, 3};
  unordered_set<int>::iterator ptr;

  cout << "The unordered set elements are : ";
  for (ptr = s.begin(); ptr != s.end(); ptr++) // Note the change here!
  {
    cout << *ptr << " ";
  }
  cout << endl;

  return 0;
}
