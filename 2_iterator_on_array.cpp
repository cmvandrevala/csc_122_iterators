#include <iostream>
#include <iterator>
#include <array>

using namespace std;

int main()
{
  array<int, 5> ar = {1, 2, 3, 4, 5};
  array<int, 5>::iterator ptr;

  cout << "The array elements are: ";
  for (ptr = ar.begin(); ptr < ar.end(); ptr++)
  {
    cout << *ptr << " ";
  }
  cout << endl;

  return 0;
}
