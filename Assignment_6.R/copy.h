/*
//Name: Jonathan James
//Creation: 11/10/2017
//Version: 6.R
//Description: opens an existing file in reading mode and copies the content of the file into another file. But the new file gets its name from the user.
********************************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;
#ifndef COPY_H
#define COPY_H

//Name: copy()
//Parameter(s): string filename;
//Return: nothing
//Description: Opens a file and copies its content to a new file.
// Label             Task                                            Goto
// 01                /cout(Enter filename)/                          02
// 02                /cin = filename/                                03
// 03                [ifstream ifile]                                04
// 04                [ifile.open("mainfile.txt")]                    05
// 05                [ofstream ofile]                                06
// 06                [ofile.open(filename)]                          07
// 07                /char ch/                                       08
// 08                <while (!ifile.eof())>                          09,13
// 09                [ifile.get(ch)]                                 10
// 10                /ofile(ch)/                                     11
// 12                [ifile.close()]                                 12
// 13                (exit)
void copy(string filename){
  cout<<"Enter filename:";
  cin>> filename;

  ifstream ifile;
    ifile.open("mainfile.txt");

  ofstream ofile;
    ofile.open(filename);
  char ch;

  while (!ifile.eof()){
    ifile.get(ch);
      ofile<<ch;
    }
  ifile.close();
}

#endif //COPY_H
