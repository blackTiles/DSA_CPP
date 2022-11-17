#include <iostream>
using namespace std;

int largestDigit(int n)
{
   int largest = 0;
   int remainder = 0;
   while (n > 0)
   {
      remainder = n % 10;
      if (remainder > largest)
      {
         largest = remainder;
      }
      n = n / 10;
   }
   return largest;
}

int main()
{
   int num;
   cout << "Enter the number: ";
   cin >> num;
   cout << largestDigit(num) << endl;
   return 0;
}