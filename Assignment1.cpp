#include<iostream>
#include<fstream>
using namespace std;




int main()
{
    string line;
    ifstream read_file ("data.txt");
    ofstream write_file ("result.txt");
    //simple variables to read/write files.

    if (read_file.is_open())
    {
        while(getline(read_file,line))
        {

        write_file << line << endl;




        } //get the lines which is a string from the read_file and output it to the write_file.


    read_file.close();
    write_file.close();
    //simple technique to close file once a file is open.


    }



}
