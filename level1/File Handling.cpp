Files are used to store data in a storage device permanently. File handling provides a mechanism to store the output of a program in a file and to perform various operations on it.

In C++, files are mainly dealt by using three classes fstream, ifstream, ofstream available in fstream headerfile.

ofstream: Stream class to write on files
ifstream: Stream class to read from files
fstream: Stream class to both read and write from/to files.
Opening a file

A file must be opened before you can read from it or write to it. ?
Either ofstream or fstream object may be used to open a file for writing. And ifstream object is used to open a file for reading purpose only.

void open(const char* file_name,ios::openmode mode);
The first argument of the open function defines the name and format of the file with the address of the file.

The second argument represents the mode in which the file has to be opened. 
The following modes are used as per the requirements.

Modes	Description
in 	File open for reading: the internal stream buffer supports input operations.
out	File open for writing: the internal stream buffer supports output operations.
binary	Operations are performed in binary mode rather than text.
ate	The output position starts at the end of the file.
app	All output operations happen at the end of the file, appending to its existing contents.
trunc	Any contents that existed in the file before it is open are discarded.
Default Open Modes:

ifstream       ios::in
ofstream       ios::out
fstream        ios::in | ios::out
Note: You can combine two or more of these values by ORing them together.

ofstream outfile;
outfile.open("file.dat", ios::out | ios::trunc );
Example using ifstream & ofstream classes.

#include <iostream> 
#include <fstream> 
  
using namespace std; 
  
// Driver Code 
int main() 
{ 
    // Creation of ofstream class object 
    ofstream fout; 
  
    string line; 
  
    // by default ios::out mode, automatically deletes 
    // the content of file. To append the content, open in ios:app 
    // fout.open("sample.txt", ios::app) 
    fout.open("sample.txt"); 
  
    // Execute a loop If file successfully opened 
    while (fout) { 
  
        // Read a Line from standard input 
        getline(cin, line); 
  
        // Press -1 to exit 
        if (line == "-1") 
            break; 
  
        // Write line in file 
        fout << line << endl; 
    } 
  
    // Close the File 
    fout.close(); 
  
    // Creation of ifstream class object to read the file 
    ifstream fin; 
  
    // by default open mode = ios::in mode 
    fin.open("sample.txt"); 
  
    // Execute a loop until EOF (End of File) 
    while (fin) { 
  
        // Read a Line from File 
        getline(fin, line); 
  
        // Print line in Console 
        cout << line << endl; 
    } 
  
    // Close the file 
    fin.close(); 
    return 0; 
}
Answer the following question:

What is the default open mode if we use ifstream to open the file?
  
ios::out
ios::in                     --------------right answer-----------------
ios::in | ios::out
