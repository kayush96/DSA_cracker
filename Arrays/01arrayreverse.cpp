#include <iostream>
using namespace std;

void reverse_arr(int arr[], int n)
{
  for (int i = 0, j = n - 1; i < j; i++, j--)
  {
    swap(arr[i], arr[j]);
  }
  cout << "Reversed Array: " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(int);

  cout << "Original Array: " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  reverse_arr(arr, n);

  return 0;
}
