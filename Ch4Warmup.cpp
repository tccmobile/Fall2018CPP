//
// Created by T10115885 on 9/20/2018.
//

#include <iostream>
using namespace std;

int main() {
   char triangleChar;
   int triangleHeight;

   cout << "Enter a character:" << endl;
   cin >> triangleChar;

   cout << "Enter triangle height:" << endl;
   cin >> triangleHeight;
   cout << endl;

   for (int row = 1; row <= triangleHeight; ++row) {
      for (int col = 1; col <= row; ++col) {
         cout<<triangleChar<<" ";
      }
      cout<<endl;
   }

   return 0;
}