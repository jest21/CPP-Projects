#include <fstream>
#include <iostream>
using namespace std;

/*
Algorithm Files
   1) Start the program
   2) Open a file say, aFlie.dat
   3) Read numbers from user and write them to the file
   4) close the stream object
   5) Open file using ifstream, and read contents of the file to an array
   6) create two arrays for odd and even
   7) if(arr[i] % 2 ==0 ) then even[j] = arr[i] otherwise odd[k] = arr[i]
   8) Print both arrays
   9) Stop the program
*/
 
int main ()
{
   char ch;
   int numbers[100];
   int odds[100],evens[100];
   int count = 0,i=0,j=0,k=0;
   // open a file in write mode.
   ofstream outfile;
   outfile.open("afile.dat");
   cout << "\nEnter numbers to be inserted:\n";
   do{
      int number;
      cin >> number;
      outfile << number << endl;
      cout << "Insert More? Y/N\nYour Choice: ";
      cin >> ch;
      ++count;
   }while(ch == 'Y' || ch == 'y');
   outfile.close();

   // open a file in read mode.
   ifstream infile; 
   infile.open("afile.dat"); 
 
   cout << "Reading from the file" << endl;

   while(count-- > 0){
      infile >> numbers[i]; 
      cout << numbers[i] << "\n";
      if (numbers[i] % 2 == 0)
      {
         evens[j++] = numbers [i++];
      }else{
         odds[k++] = numbers [i++];
      }
   }

   // close the opened file.
   infile.close();

   cout << "\nEvens" << endl;
   while(j>0){
      cout << evens[--j] << ", ";
   }

   cout << "\nOdds" << endl;
   while(k>0){
      cout << odds[--k] << ", ";
   }

   return 0;
}