/*
#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[50];
    cout<<endl<<"Enter the String: ";
    cin.getline(str,50);

    cout.write(str,strlen(str));
    return 0;
}

*/
///===============================================================================///
/*
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[50]="Good Day All Of You";

    for(int i=0;i<=strlen(str);i++)
    {
        cout.write(str,i);
        cout<<endl;
    }
    for(int i=i-2;i>0;i--)
    {
        cout.write(str,i);
        cout<<endl;
    }
}
*/
///============================================================================///
///-----All the above functions are called using the built-in object cout.
/*
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    cout << "Example for formatted IO" << endl;

    cout << "Default: " << endl;
    cout << 123 << endl;

    cout<<endl<<"--Width(5)---"<<endl;
    cout.width(5);
    cout << 123 << endl;

    cout << "width(5) and fill('*'): " << endl;
    cout.width(5);
    cout.fill('*');
    cout <<123 << endl;

    cout.precision(4);
    cout << "precision(1) ---> " << 123.4567890 << endl;
    cout << "precision(1) ---> " << 19.876543210 << endl;

    cout << "setf(showpos): " << endl;
    cout.setf(ios::showpos);
    cout << 123 << endl;

    cout << "unsetf(showpos): " << endl;
    cout.unsetf(ios::showpos);
    cout << 123 << endl;

    return 0;
}
*/
///==========================================================================///
/*
#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
void line()
{
    cout<<endl<<"============================"<<endl;
}
int main()
{
    cout << "Example for formatted IO" << endl;
    line();
    cout << "setw(10): " << endl;
    cout << setw(10) << 99 << endl;
    line();
    cout << "setw(10) and setfill('*'): " << endl;
    cout << setw(10) << setfill('*') << 99 << endl;
    line();
    cout << "setprecision(5): " << endl;
    cout << setprecision(5) << 123.4567890 << endl;
    line();
    cout << "showpos: " << endl;
    cout << showpos << 999 << endl;
    line();
    cout << "hex: " << endl;
    cout << hex << 100 << endl;
    line();
    cout << "hex and showbase: " << endl;
    cout << showbase << hex << 100 << endl;
    line();

    return 0;

}
*/
///=============================================================================///
///---------User Defined Manipulater
/*
#include <iostream>
#include <iomanip>
using namespace std;
ostream& sau(ostream& ostr)
{
	cout<< setprecision(2);
	cout<<"Rs. ";
	return ostr;
}
int main()
{
	float amt = 4.5476;
	cout<<sau<<amt;
	return 0;
}
*/
///==============================================================================///
/*
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
   char data[100];

   // open a file in write mode.
   ofstream outfile;
   outfile.open("afile.dat");

   cout << "Writing to the file" << endl;
   cout << "Enter your name: ";
   cin.getline(data, 100);

   //write inputted data into the file.
   outfile << data << endl;

   cout << "Enter your age: ";
   cin >> data;
   cin.ignore();

   // again write inputted data into the file.
   outfile << data << endl;

   // close the opened file.
   outfile.close();

   // open a file in read mode.
   ifstream infile;
   infile.open("afile.dat");

   cout << "Reading from the file" << endl;
   infile >> data;

   // write the data at the screen.
   cout << data << endl;

   // again read the data from the file and display it.
   infile >> data;
   cout << data << endl;

   // close the opened file.
   infile.close();

   return 0;
}
*/
///==========================================================================///
///---------- Using the get() and put():
/*
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("D:\\datafile.txt");
    cout<<(char)fin.get();
    return 0;
}
*/
///==============================================================================///
/*
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("D:\\datafile.txt");
    cout<<(char)fin.get();
    cout<<(char)fin.get();
    cout<<(char)fin.get();

    return 0;
}
*/
///================================================================================///
/*
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ifstream fin("D:\\sample");
    int t;
    while((t=fin.get())!=-1)
    {
        cout<<(char)t;
    }
    return 0;
}
*/
///=================================================================================///
///------------------put() Function:--------------------------
/*
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream  fout("data.txt");
    ifstream fin("sample.txt");

    int t;
    while(!fin.eof())
    {
        t=fin.get();
        fout.put(t);
    }
    fin.close();
    fout.close();
    return 0;
}
*/
///=======================================================///
///-------File opening using the open() function
/*
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
   ofstream fout;
   ifstream fin;
   int t;
   fout.open("D:\datafile.txt");
   fin.open("D:\sample.txt");
   while(!fin.eof())
   {
       t=fin.get();
       fout.put(t);
   }
//   fout.close();
//   fin.close();

   return 0;
}
*/
///==================================================================================///
///--------------------Using the fstream----------------------
/*
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fio;
    ifstream fin("datafile.txt");
    char ch;

    fio.open("sample.text",ios::in|ios::out);
    while(fin)
    {
        fin.get(ch);
        fio.put(ch);
    }
    fin.close();
    fio.seekg(0);
    while(fio)
    {
        cout<<(char)fio.get();
    }

    return 0;

}

///==============================================================================///
///--------
*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file;
    file.open("D:\myfile.txt");

    string str;

    while(getline(file,str))
    {
        cout<<str;
    }

    file.close();
    return 0;
}































































