///Welcome Program:
/*
#include <iostream>
using namespace std;
int main()
{
    cout << "Hi Sayali" << endl;
    cout<<"Welcome To C++ Language"<<endl;
    return 0;
}
*/
///-------------------------------------------------------------------------------------------------------------------------------------------------------
/*
#include<iostream>
int main()
{
    std::cout<<"Welcome to C++ language";
    std::cout<<" Address:Aitwade Khurd";
    std::cout<<"contact:9921759049";
    return 0;
}
*/
///--------------------------------------------------------------------------------------------------------------------------------------------
/*
#include<iostream>
using namespace std;
int main()
{
    cout<<"Welcome To C++ Language";
    cout<<"Address: Aitwade Khurd";
    cout<<"contact: 9921759049";
    return 0;
}
*/
///--------------------------------------------------------------------------------------------------
///Using Escape Sequence:
/*
#include <iostream>
using namespace std;
int main()
{
    cout << "Escape Sequence Characters Demo:\n";
    cout << "1. Newline: Line 1\n Line 2\n Line 3\n";
    cout << "2. Horizontal tab: Column 1\tColumn 2\tColumn 3\n";
    cout << "3. Backspace: 123\b45\n";
    cout << "4. Carriage return: 1234\rABCd\n";
    cout << "5. Backslash: C:\\path\\to\\file\n";
    cout << "6. Single quote: \'Its raining'.\n";
    cout << "7. Double quote: She said, \"Hello.\"\n";
    cout << "8. Null character: Hello\0 World\n";
    cout << "9. Alert (bell): Beep!\a\n";
    cout << "10. Form feed: Page 1\fPage 2\n";
    cout << "11. Vertical tab: Line 1\vLine 2\n";
    cout << "12. Question mark: What\? Why\?\n";
    cout << "13. Octal representation: \110\145\154\154\157\n";
    cout << "14. Hexadecimal representation: \x48\x65\x6C\x6C\x6F\n";
}
*/
///---------------------------------------------------------------------------------------------------
///For Manipulators :
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // setw(int n)
    cout << setw(20) << "Name" << setw(10) << "Age" << setw(15) << "Salary" << endl;
    cout << setw(20) << "John Doe" << setw(10) << 30 << setw(15) << 50000.0 << endl;

    // setprecision(int n) and fixed
    double pi = 3.14159265359;
    cout << setprecision(3) << fixed << "Pi: " << pi << endl;

    // scientific
    double num = 123456.789;
    cout << scientific << "Number: " << num << endl;

    // left and right
    cout << setw(10) << left << "Left" << setw(10) << right << "Right" << endl;

    // boolalpha
    bool flag = true;
    cout << boolalpha << "Flag: " << flag << endl;

    // hex, oct, and dec
    int value = 255;
    cout << "Hex: " << hex << value << endl;
    cout << "Oct: " << oct << value << endl;
    cout << "Dec: " << dec << value << endl;
    return 0;
}
*/
///---------------------------------------------------------------------------------------------------------------------------------------------------
///Using Constant Keyword :
/*
#include <iostream>
using namespace std;
int main()
{
    // Declaring integer constants
    const int MAX_VALUE = 100;
    const int MIN_VALUE = 0;

    // Declaring floating-point constants
    const double PI = 3.14159;
    const float GRAVITY = 9.81f;

    // Declaring character constants
    const char NEWLINE = '\n';
    const char TAB = '\t';

    // Using constants in expressions
    int range = MAX_VALUE - MIN_VALUE;
    double circumference = 2 * PI * 5.0;

    // Outputting constants
    cout << "Range: " << range << NEWLINE;
    cout << "Circumference: " << circumference << NEWLINE;
    //MIN_VALUE=10; Indicating the error
    return 0;
}
*/
///-----------------------------------------------------------------------------------------------------------------------------------------
///Using Enum:
/*
#include <iostream>
using namespace std;
int main()
{
   /*
    enum {RED, GREEN, BLUE};
    cout<<endl<<"First: "<<RED;
    cout<<endl<<"Second: "<<GREEN;
    cout<<endl<<"Third: "<<BLUE;

    int x=GREEN;
    cout<<endl<<"x= "<<x;

    enum color{RED, GREEN, BLUE, BLACK};
    color c=BLACK;
    cout<<endl<<"c= "<<c;

     //enum color1{RED, GREEN, BLUE, BLACK}; ///error: 'RED' conflicts with a previous declaration|
     // in current scope there must be only one constant with same name,
     // even there are multiple enums.


   // enum color{RED, GREEN=45, BLUE, BLACK};
    //color c=BLACK;
    //cout<<endl<<"c= "<<c;

    enum color{RED=1, GREEN, BLUE, BLACK};
    cout<<endl<<"First: "<<RED;
    cout<<endl<<"Second: "<<GREEN;
    cout<<endl<<"Third: "<<BLUE;
    cout<<endl<<"FOURTH: "<<BLACK;
    enum name{sayali,saurabh};
    cout<<endl<<"first:"<<sayali;
    cout<<endl<<"second:"<<saurabh;
    return 0;
}
*/
///----------------------------------------------------------------------------------------------------------------------------------
///Using #define preprocessor directives:
/*
#include<iostream>
#define PI_VALUE  3.14159
int main()
{
    // Usage of the constant
    double radius = 5.0;
    double area = PI_VALUE * radius * radius;
    std::cout << "Area: "<< area;
    return 0;
}
*/
///---------------------------------------------------------------------------------------------------------------------------------------
/*
#include<iostream>
using namespace std;
int main()
{
    char ch='w';
    int x=23;
    float y=45.50;
    double db=67;
    bool b=true;
    bool c=true;

    cout<<"value of ch is :"<<ch<<endl;
    cout<<"y is"<<y<<endl;
    cout<<"x is"<<x<<endl;
    cout<<"val of double:"<<db<<endl;
    cout<<boolalpha<<"b:"<<b<<endl;
    cout<<"c:"<<c<<endl;
    return 0;

}
*/
///-------------------------------------------------------------------------------------------------------------------------
/*
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Input any character:"<<endl;
    cin>>ch;

    int x;
    cout<<"Enter the value of x:"<<endl;
    cin>>x;

    double y;
    cout<<"Enter the any Fractional Value:"<<endl;
    cin>>y;

    cout<<"ch is :"<<ch<<endl;
    cout<<"Value of x is :"<<x<<endl;
    cout<<"Value of y is :"<<y<<endl;

    return 0;
}
*/
///-----------------------------------------------------------------------------------------------------------------
/*
#include<iostream>
using namespace std;
int x=1000;
int main()
{
    int x=100;
    cout<<"In main(at start) x is :"<<x<<endl;
    cout<<"Global value of x is :"<<::x<<endl;
    {
        int y=x;
        cout<<"Inner Scope y is :"<<y<<endl;
        cout<<"Inner Scope x is :"<<x<<endl;
        cout<<"Global value of x :"<<::x<<endl;

        int x=10;
        cout<<"again Inner scope x :"<<x<<endl;
        cout<<"Global value of x :"<<::x<<endl;

    }
    int y=200;
    //int x=200;redeclration
    cout<<"In main(at end) y:"<<y<<endl;
    cout<<"Global value of x:"<<::x<<endl;
    return 0;
}
*/
///--------------------------------------------------------------------------------------------------------
///Using new (memory allocation operator) and delete (Memory release operator):
/*
#include<iostream>
using namespace std;
int main()
{
    int *p,cnt;//i=initialize here also

    cout<<"Enter the element count:"<<endl;
    cin>>cnt;

    p=new int[cnt];

    cout<<"Enter the nos:"<<endl;
    for( int i=0;i<cnt;i++)//also here decl i ....
    {
        cin>>*(p+i);
    }

    cout<<"Elements are :"<<endl;
    for(int i=0;i<cnt;i++)
    {
        cout<<*(p+i)<<endl;
    }
    delete p;
    return 0;
}
*/
///--------------------------------------------------------------------------------------------------------------------------------------------------------
///Using Void :
/*
#include<iostream>
using namespace std;
int main()
{
    int x=10;
    float y=23.34;
	double z=233.45;
	char ch='w';

	void *gp;

	gp=&x;
	cout<<"Value of x using gp:"<<*(int *)gp<<endl;

	gp=&y;
	cout<<"Value of y using gp:"<<*(float*)gp<<endl;

	gp=&z;
	cout<<"Value of z using gp:"<<*(double*)gp<<endl;

	gp=&ch;
	cout<<"Value of ch using gp:"<<*(char*)gp<<endl;

	return 0;
}
*/
///------------------------------------------------------------------------------------------------------------------------------
///Pointer in C++ :Constant Pointer :
/*
#include <iostream>
using namespace std;
int main()
{
    int x=10;

    int* const cp=&x;
    cout<<" value of x is: "<<*cp<<endl;

    //int y=100;
    //cp=&y;
    //cout<<"\n value of x is: "<<*cp;

    x=200;
    cout<<" value of x is: "<<*cp<<endl;
    *cp=400;
    cout<<" value of x is: "<<*cp<<endl;
	return 0;
}
*/
///---------------------------------------------------------------------------------------------------------------------------------
///Pointer to Constant :
/*
#include <iostream>
using namespace std;
int main()
{
    int x=10;

    int const *cp=&x;
    cout<<"\n value of x is: "<<*cp<<endl;

    //*cp=400; error
    x=1000;
    cout<<"Value of x using cp is :"<<*cp<<endl;

    int y=100;
    cp=&y;
    cout<<"Value of y using cp is :"<<*cp<<endl;

    //*cp=400; // error
    y=2000;
    return 0;
}
*/
///---------------------------------------------------------------------------------------------------------------------------------------------------------
/*
#include<iostream>
#include<iomanip>
using namespace std;
inline int square(int x)
{
    int val;
    val=x*x;
    return val;
}
int main()
{
    int no;
    cout<<"Enter the number :"<<endl;
    cin>>no;

    int ans=square(no);
    cout<<"ans:"<<ans<<endl;
    return 0;
}
*/
///--------------------------------------------------------------------------------------------------------------------------------
///Function Call By Passing Default Arguments :
/*
#include<iostream>
using namespace std;
double FindIntrest(int p,double r=2.2,int n=4)
{
    double val=0.0;
    val=(p*r*n)/100;
    return val;
}
int main()
{
    int p,n;
    double r,si;

    cout<<"simple intrest: principle amount,rate of intrest,number of year:"<<endl;
    cin>>p>>r>>n;

    si=FindIntrest(p,r,n);
    cout<<"Simple Intrest is :"<<si<<endl;
    si=FindIntrest(p,r);
    cout<<"Simple Intrest is :"<<si<<endl;
    si=FindIntrest(p);
    cout<<"Simple Intrest is :"<<si<<endl;

    return 0;
}
*/
///--------------------------------------------------------------------------------------------------------------------------------------------------------
///Alise:
/*
#include <iostream>
using namespace std;
int main()
{
    int x=10;
    int &y=x;

    cout<<endl<<"x="<<x<<"\t y="<<y;

    x=100;
    cout<<endl<<"x="<<x<<"\t y="<<y;

    y=500;
    cout<<endl<<"x="<<x<<"\t y="<<y;

    return 0;
}
*/
///--------------------------------------------------------------------------------------------------------------------------
///Call By Value :
/*
#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
    //cout<<"Swap  a and b is :"<<a<<b<<endl;
}
int main()
{
    int x, y;

    cout<<endl<<"Enter the values of x and y: ";
    cin>>x>>y;

    cout<<endl<<"Before interchange x="<<x<<"\t y="<<y;
    swap(x,y);
    cout<<endl<<"After interchange x="<<x<<"\t y="<<y;

    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------------------------------------------------------
///Call By Reference:
/*
#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}
int main()
{
    int x, y;

    cout<<endl<<"Enter the values of x and y: ";
    cin>>x>>y;

    cout<<endl<<"Before interchange x="<<x<<"\t y="<<y;
    swap(&x,&y);
    cout<<endl<<"After interchange x="<<x<<"\t y="<<y;

    return 0;
}
*/
///------------------------------------------------------------------------------------------------------------------------------------------
///Reference Variable :
/*
#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
}
int main()
{
    int x, y;

    cout<<endl<<"Enter the values of x and y: ";
    cin>>x>>y;

    cout<<endl<<"Before interchange x="<<x<<"\t y="<<y;
    swap(x,y);
    cout<<endl<<"After interchange x="<<x<<"\t y="<<y;

    return 0;
}
*/
///-----------------------------------------------------------------------------------------------------------------------------------------
///Passing the constant Variable :
/*
#include<iostream>
#include<iomanip>
using namespace std;
void display( const int y[])
{
    cout<<endl<<"Elements are: ";
    for(int i=0 ; i<5 ; i++)
    {
        cout<<y[i];
        y[i]=1;//error assignment of read-only location (cause  it is passed as constant)
    }
    }
}
int main()
{
    int x[]={11,22,33,44,55};
    display(x);
    cout<<endl<<"Elements are: ";
    for(int i=0 ; i<5 ; i++)
    {
        cout<<setw(7)<<x[i];
    }

    return 0;
}
*/
///--------------------------------------------------------------------------------------------------------------------------------------------------------
///Function Overloading :
/*
#include<iostream>
using namespace std;
void area(int w,int b=12)
{


    cout<<"Area of rectangle :"<<(w*b)<<endl;
}
void area(int r)
{
    cout<<"Area of circle :"<<(3.14*r*r)<<endl;
}
void area(int b,float h=12.2)
{
    cout<<"Area of Right angle Triangle :"<<(0.5*b*h)<<endl;
}
int main()
{
    int width,bredth;
    cout<<"Enter the width and bredth :"<<endl;
    cin>>width>>bredth;
    area(width);

    int radius;
    cout<<"Enter Area of circle:"<<endl;
    cin>>radius;
    area(radius);

    int base;
    float height;
    cout<<"Enter Right angle Triangle:"<<endl;
    cin>>base>>height;
    area(base);
    return 0;
}
*/
