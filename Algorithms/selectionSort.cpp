#include <iostream>
using namespace std;

void selectionSort(int arr[], int arraySize)
{
   int indexOfmin, temp;
   for (int i = 0; i < arraySize - 1; i++)
   {
      cout<<"Iteration: "<<i<<endl;
      indexOfmin = i;
      for (int j = i + 1; j < arraySize; j++)
      {
         cout << "Comparing: " << arr[indexOfmin] << " with " << arr[j] << endl;
         if (arr[j] < arr[indexOfmin])
         {
            indexOfmin = j;
            cout << "Min: " << arr[indexOfmin] << endl;
         }
      }

      cout << "Swap " << arr[i] << " with " << arr[indexOfmin] << endl;

      temp = arr[i];
      arr[i] = arr[indexOfmin];
      arr[indexOfmin] = temp;

      for (int k = 0; k < arraySize; k++)
      {
         cout << arr[k] << ",";
      }
      cout<<endl<<endl;
   }
}

int main()
{
   int arr[] = {3, 2, 6, 1, 34, 15};
   int arraySize = sizeof(arr) / sizeof(arr[0]);
   selectionSort(arr, arraySize);
   for (int i = 0; i < arraySize; i++)
   {
      cout << arr[i] << ",";
   }
   cout << endl;
   return 0;
}
