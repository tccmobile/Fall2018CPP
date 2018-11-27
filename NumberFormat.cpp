//
// Created by T10115885 on 11/27/2018.
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stdexcept>
using namespace std;

int main() {
   // Describe the format of a row of input. There are four fields in
   // a row separated by commas: last name, first name, department, salary
   const string SEPARATOR     = ",";  // field separator in each row of data
   const int INDEX_LAST_NAME  = 0;    // # of the last name field
   const int INDEX_FIRST_NAME = 1;    // # of the first name field
   const int INDEX_DEPT       = 2;    // # of the department name field
   const int INDEX_SALARY     = 3;    // # of the salary field
   stringstream ss;                   // For conversion of string to int
   int salary;

   vector<string> field;              // Fields on one row in the input file
   string row;                        // One row of the input file
   string partial;
   int nRows;                         // Counts # of rows in the input file
   int totalSalaries;                 // Total of all salaries read

   nRows = 0;
   totalSalaries = 0;

   ss.exceptions(ios::failbit);       // Failed convertion will throw an
                                      // ios_base::failure

   getline(cin, row);
   while (row.length() > 0) {         // Loop while input data exists
      ++nRows;
      while(row.find(',') != string::npos) {
         partial = row.substr(0, row.find(','));
         field.push_back(partial);
         row = row.substr(row.find(',') + 1);
      }
      field.push_back(row);

      // FIXME: Add a try/catch clause to catch an ios_base::failure exception.
      //        Show the user the row that had the problem and indicate
      //        there was a conversion error on the salary.
try {
    ss.str("");                  // Reset contents of stringstream
    ss.clear();                  // Clear stringstream state
    ss << field[INDEX_SALARY];
    ss >> salary;

    totalSalaries += salary;

    cout << "       " << field[INDEX_FIRST_NAME] << ", " << field[INDEX_LAST_NAME]
         << ", " << field[INDEX_SALARY] << ", " << field[INDEX_DEPT] << endl;
}
catch(ios_base::failure& exception){
    cout<<"Error in record: Salary value not added."<<endl;
}
      getline(cin, row);
      field.clear();
   }

   cout << endl;
   cout << "Total salaries: " << totalSalaries << "." << endl;

   return 0;
}