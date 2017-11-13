Topcs: + Stream
       + Functions
Standard Stream - writing to and reading from the terminal or DOS.
Writing - we use the ostream object named cout in conjuction with the insertion operator (<<) [ostream operator]

Syntax:
  cout[<< <argument> >>]*;
  e.g cout;
      cout<<1;
      cout<<1<<"hello"<<5.3<<endl;
Note: It prints only what is provided. It does not add adittional characters or commands to your Output
e.g.
      cout<<"Hello";  //HelloWorld
      cout<<"World";
e.g.
      cout<<"Hello";
      cout<<"\n";
      cout<<"World";

Reading - We use the istream object name cin in conjunction with the extration operator (>>)[istream operator]
Syntax:
      cin[>> <variable>]*;
      cin; // This is a valid syntax too
      cin>>name; //This is also a valid syntax for the istream operator
      cin>>name>>age; //This is also a valid syntax for the istream operator

Note: cin must store the inputs in a variable
     +cin is delimited by a whitespace
     To read in a line using the string library call the function getline

// Name: getline ()
// Parameter(s): istream&, string&
// Return: string

e.g
string name;
getline(cin,name)

char name[256];
cin.getline(name, 256);

File Stream - writing to and reading from a File
    +We must include the fstream library
    +You can create three types of objects from the fstream library which are fstream, ofstream, ifstream.

    +fstream is used for both reading and writing
    +ifstream is used for reading
    +ofstream is used for writing

To write to or read from a file, we need to first create an fstream object.
e.g.
  fstream file;
  ofstream ofile;
  ifstream ifile;

+After you declare an fstream object, you need to call the open() method to associate a file with the fstream object.

// Name: open()
// Parameter(s): string filename, fstream::flag mode
// Return: fstream

file name is the name of your file with its extention.
  +If the file is not in the same directory of the program you need to include its path.
    Mode - Its a combination of three posible values

  I.e ;
  FSTREAM MODES
    +fstream::out - This is used to write to a file. If the file does not exist, it will create the file. However if the file does exist, it'll erase the file's content.
    +fstream::in - This is used to read from a file. If the file does not exist it produces an error.
    +fstream::app - This is used to write to a file. If the file doesnt exist, it creates it. However if the file does exist it starts writing from the end of the file.

You can combine modes by using the bitwise "or" operator (|)
e.g.
  +file.open("file.txt", fstream::out|fstream::app|fstream::in);
  +ofile.open("file.txt",fstream::out|fstream::app);
  +ifile.open("file.txt",fstream::in);

+Every fstream object must be closed after use. To close an fstream object, we use the close method.

e.g.
file.close();
ifile.close();
ofile.close();
+ To verify that the file is open, we use the is open method.
    Name: is_open()
    Parameter(s):Nothing
    Return:bool
