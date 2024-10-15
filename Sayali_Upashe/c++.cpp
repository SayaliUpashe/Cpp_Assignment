
	---------------- C++ Programming ----------------------

	History: 

		ALGOL60 ---> CPL ---> BCPL -----> B ---> C(1972) ----> C++(1983-85)
	
		- C++ is actually C with Class later on  it is renamed as C++, as a increamented version of C.
		- It is developed at AT&T Bell Lab, USA by bjarne Stroustrup
		- initially it developed to provide the security to data.
		- After some years, the higher level languages like Java, Pyrhon, C# are used as a femous development
		  languages but as IOT and machince interfacing grows the execution spped of language become most important 
		  term, and therefore as C++ having greater speed as compare to aother HLL. now again C++ becoming a famous.
		   i.e. in short due to Security and speed it is used in the industry.

	Version History:
	
	Clasic C++: (C++ before C++98): Additional data types, different IO style, function overloading, class and object, 				constructor and destructors, inheritance, polymorphism, operator overloading, file IO, exception handling, 
		templets, STL...

	Moddern C++:	
	- C++98(ISO/IEC): Standardized the core features of C++.
	- C++03 : A minor revision aimed at fixing defects and clarifying ambiguities in the C++98 standard.
	- C++11: auto keyword, Lambda expressions, range based loops, uniform init. syntax, smart pointer, additional terms in 	  		structure, Multithreading support, move samentics...etc
	- C++14: constexpr additions, binary literals and generic lambdas, variable templet.
	- C++17: inline variables, Structured binding, fold expression, standard library with optional and variant types., filesystem 	 		 library, parallel algorithm.
	- C++20: concepts, ranges, corutines, modules, modern format labrary.
	- C++23: released in December 2023 as a expermental stage
	- C++26: C++ standards are on a fixed three-year release cycle.

	Compilers and IDE: 

		Compilers: GNU GCC, g++, CMake .. (Online/Offline)
		IDE: It is integrated developement environment --> compiler + editor + lib + doc + addons

	//------------------------------------------------------------------------------------------------------------------

	// Welcome program in C++
	#include<iostream>
	int main()
	{
		std::cout<<"Welcome to  C++ Programming";
		return 0;
	}
	
	// Comments in C++:

		// ---> single line comment
		/* ..... */	--> Miltiline comment


	- Basic Program Structure

		- pre-processor directives
		- Namespace decl.
		- class decl.
		- functions and comments
		- main() function


	- C++ Tokens: these are smllest possible units in the program, which acts as building block for the instructions.
		The C++ tokens are
			- Constants and literals
			- identifiers
			- comments
			- keywords
			- punctuators
			- preprocessor directives
			- operators
	

	Data types in C++: Data type is tool, which is used at the time of memory allocation to know about the
			   memory need. It is represented using the keyword, that keyword in used in the decl. instruction,
			   in function to mention the argument type and return type, in pointer and arrays for defining the type,
			   in the type casting, and in the structure to mention the member type 

					C++ Data Types
					     |
		----------------------------------------------------------------------------
		|					|				    |
	Derived Data Types			Built-in Data types		 User-defined Data types
	   |						|				      	    |			
	- Array						|					- structure
	- pointer			--------------------------------------			- union
	- function			|		  |		    |			- enum
	- reference		 Integral data types   void data type    Floating data types	- class
	- auto				 |		     |			|
	- decltype		------------------------    void(NA)		- float(4)
			   	|	   |	      |				- double(8)
			       bool(1)   int(4)	      char(1)			- long double (8/12/16)
					 short(2)     wchar_t (2 or 4) 
					 long(4/8)    char8_t (1)	
					 long long(8) char16_t (2)
						      char32_t (4)
#include<iostream>
int main()
{
	std::cout<<" ********** Personal Details **********";
	std::cout<<"Name: Amit Ajit Pol";
	std::cout<<"age: 23";
	std::cout<<"contact number 9850678451";
	std::cout<<"Email: info@archerinfotech.in";
	std::cout<<"Address: F12, Divyadarshan soviety, behind kothrud bus stand, kothrud, Pune";
	return 0;
}

	Like a normal printf() in C, the above program using cout<< gives the output in unformated manner.
	to display the output in well formatted manner we need to use "Escape Sequence characters"

	\n 	- newline
	\t 	- Horz. Tab
	\b 	- backspace
	\r 	- carriage return
	\\	- to print \
	\'	- to print '
	\"	- to print "
	\0	- to represent NULL
	\a   	- Alert or Bell
	\f	- Form feed
	\v	- Vertical Tab
	\?	- to print ?
	\nnn	- octal representation
	\xhh	- hex representation


#include <iostream>
using namespace std;
int main() {
    cout << "Escape Sequence Characters Demo:\n";
    cout << "1. Newline: Line 1\nLine 2\nLine 3\n";
    cout << "2. Horizontal tab: Column 1\tColumn 2\tColumn 3\n";
    cout << "3. Backspace: 123\b45\n";
    cout << "4. Carriage return: 1234\rAB\n";
    cout << "5. Backslash: C:\\path\\to\\file\n";
    cout << "6. Single quote: It\'s raining.\n";
    cout << "7. Double quote: She said, \"Hello.\"\n";
    cout << "8. Null character: Hello\0World\n";
    cout << "9. Alert (bell): Beep!\a\n";
    cout << "10. Form feed: Page 1\fPage 2\n";
    cout << "11. Vertical tab: Line 1\vLine 2\n";
    cout << "12. Question mark: What\? Why\?\n";
    cout << "13. Octal representation: \110\145\154\154\157\n";
    cout << "14. Hexadecimal representation: \x48\x65\x6C\x6C\x6F\n";

    return 0;
}


Manipulators in C++: In C++, manipulators are special functions or objects provided by the Standard Library that are used to modify the behaviour of input and output streams. They are typically used in conjunction with the insertion (<<) and extraction (>>) operators to format input and output data. Manipulators can perform various tasks such as setting field width, formatting numbers, controlling precision, and more. 

	std::setw(<size>) : set the width of next output fields.
	std::setprecision(int n): decides the number if digits after decimal point while displaying the fractional number
	std::fixed: 
	std::scientific:
	std::left: 
	std::right:
	std::boolalpha: 
	std::hex:
	std::oct:
	std::dec: 
	

#include <iostream>
#include <iomanip> // for manipulators
using namespace std;
int main() {
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


//--------------------------------------------------------------------------------------------------------

	Constants and Literals: 
		
		- literals: These are the fixed values, which are assigned to variable.
		
			45 - integer literal		'a' - character literal

		- constant: these are the named values defined using identifier, which remains unchanged throurhout
			     the program execution. It not possible to change its value. if sameone attempt to change
			      it, compiler will generate an error message.

			There are following ways of defining the constants:

			- Using const Keyword: (C++98)
			- Using enum: (C++98)
			- Using #define Preprocessor Directive: (C++98)
			- Using constexpr Keyword: (C++11)
			- Using using Alias: (C++14)

	
- Using const Keyword: (C++98): 

	int x=100;		const int y=200;

#include <iostream>
int main() {
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
    std::cout << "Range: " << range << NEWLINE;
    std::cout << "Circumference: " << circumference << NEWLINE;

   /// MIN_VALUE=10; /// error: assignment of read-only variable 'MIN_VALUE'|
    return 0;
}


//-----------------------------------------------------------------------------------------------------

- Using constexpr Keyword: (C++11):

#include<iostream>
using namespace std;
int main() {
    constexpr int MAX_VALUE = 100;
    int num = 5;
    // Print the values
    std::cout << "Max value: " << MAX_VALUE << std::endl;
    std::cout << " num: " << num << std::endl;

    /// MAX_VALUE=300; ///error: assignment of read-only variable 'MAX_VALUE'
    num=200;
    std::cout << "Max value: " << MAX_VALUE << std::endl;
    std::cout << " num: " << num << std::endl;

    return 0;
}


In above both cases, using const and constexpr, we declared constants, and when we tried to modify it, it will genberate an error message.

//----------------------------------------------------------------------------------------------------------------------------


- Using enum: (C++98)

		enum <name>{const1, const2,...,constN};

e.g.	enum color {red, green, blue, black};		or 	enum {red, green, blue, black}; 



	enum color {RED, GREEN, BLUE, BLACK};	or 	enum {RED, GREEN, BLUE, BLACK};
 
	RED	Equivalent to 0
	GREEN   Equivalent to 1 
	BLUE    Equivalent to 2
	BLACK   Equivalent to 3

 
Unscoped Enum:
// Declaration
enum Color { RED, GREEN, BLUE};
// Usage
Color c = RED;

Scoped Enum:
// Declaration
enum class Fruit {
    APPLE,
    BANANA,
    ORANGE
};
// Usage
Fruit f = Fruit::APPLE;

Scoped Enum with Underlying Type: (C++11):
// Declaration
enum class Month : int {
    JAN = 1,
    FEB,
    MAR
};
// Usage
Month m = Month::JAN;


Unscoped Enum with Explicit Values:
// Declaration
enum Animal {
    DOG = 10,
    CAT = 20,
    BIRD = 30
};
// Usage
Animal a = DOG;

Scoped Enum with Explicit Values:
// Declaration
enum class Animal {
    DOG = 10,
    CAT = 20,
    BIRD = 30
};
// Usage
Animal a = DOG;

Using typedef with Enum:
// Declaration
enum class Status : char {
    OK = 'O',
    ERROR = 'E',
    UNKNOWN = 'U'
};
// Usage
Status s = Status::ERROR;

 
Enum Class with Inline Initialization (C++17 and later):
// Declaration
enum class TrafficLight {
    RED = 10,
    YELLOW = 20,
    GREEN = 30
} tl = TrafficLight::RED;
// Usage
TrafficLight currentLight = tl;

is same as

TrafficLight t1= TrafficLight::RED;;
TrafficLight currentLight = tl;


Unscoped Enum: there must be single constant name in same or different enums.

#include<iostream>
using namespace std;
int main()
{ 
    enum {RED, GREEN, BLUE};
    cout<<endl<<"First: "<<RED;
    cout<<endl<<"Second: "<<GREEN;
    cout<<endl<<"Third: "<<BLUE;

    int x=GREEN;
    cout<<endl<<"x= "<<x;

    enum color{RED, GREEN, BLUE, BLACK};
    color c=BLACK;
    cout<<endl<<"c= "<<c;

     ///enum color1{RED, GREEN, BLUE, BLACK}; ///error: 'RED' conflicts with a previous declaration|
     /// in current scope there must be only one constant with same name,
     /// even there are multiple enums.


   enum color{RED, GREEN=45, BLUE, BLACK};
    color c=BLACK;
    cout<<endl<<"c= "<<c;
    return 0;
    
    enum color{RED=100, GREEN=12, BLUE=15, BLACK};
    cout<<endl<<"First: "<<RED;
    cout<<endl<<"Second: "<<GREEN;
    cout<<endl<<"Third: "<<BLUE;
    cout<<endl<<"FOURTH: "<<BLACK;
    
    return 0;
}

// Scoped Enum: It will allows you to decl. multiple enums with same constant names
#include <iostream>
using namespace std;
enum class Color
{
    Red=100,
    Green,
    Blue
};
enum class Flag
{
    Red,
    Green,
    Blue
};

int main()
{
    Color myColor = Color::Red;
    cout<<endl<<"First: "<<(int)Flag::Red;
    cout<<endl<<"Second: "<<static_cast<int>(Flag::Green);
    cout<<endl<<"Third: "<<(int)Color::Red;
    // We need to use the scope resolution operator (::) to access enum values
    if (myColor == Color::Red)
    {
        std::cout<<endl << "The color is Red" << std::endl;
    }
    else if (myColor == Color::Green)
    {
        std::cout <<endl<< "The color is Green" << std::endl;
    }
    else if (myColor == Color::Blue)
    {
        std::cout <<endl<< "The color is Blue" << std::endl;
    }

    return 0;
}

///-------------------------------------------------------------------------------------------

- Using #define Preprocessor Directive (C++98):  

	For example: 	#define PI 3.14159	and 	#define MAX_SIZE 100

#include<iostream>
#define PI_VALUE  3.14159
int main() {
    // Usage of the constant
    double radius = 5.0;
    double area = PI_VALUE * radius * radius;
    std::cout << "Area: "<< area;
    return 0;
}

//------------------------------------------------------------------------------------------

- Using using Alias: (C++14)


#include<iostream>
using PI = double;
constexpr PI PI_VALUE = 3.14159;

int main() {
    // Usage of the constant
    double radius = 5.0;
    double area = PI_VALUE * radius * radius;
    std::cout << "Area: "<< area;
    return 0;
}

//--------------------------------------------------------------------------------------------

Input and Output in C++ using cin, cout: 


		 				  CPU  
					_________________________
					|			|
				|----->	|	  CU		|---> sends the command signal to every connected peripherial
				|	|_______________________|
		   Input	|	|			|	 	 Output
console input	    [ ]		|   |-->|	  ALU		|---|     |--->   [ ]
streal		     |		|   |	|_______________________|   |	  | console output stream
   c- scanf()	     |		|   |---|			|<--|	  | c - printf()
  c++ - cin	     |		|-------|	  IM		|	  | c++ - cout
		     |---------------->	|_______________________|---------|
				   	       ^          |	
			    file input stream  |	  | file output stream	
     C - file *fp=fopen("..","r")	 ______|__________V______  c - file *fp=fopen("..","w")
					|			|
					|	  EM		|
					|_______________________|


cin (Standard Input): cin is a predefined object of the istream class, which represents the standard input stream. It is used to read data from the standard input device, typically the keyboard, and store it into variables. >> operator is actually bitwise right shift operator, which is overloaded here along with cin, to extract the data from stream and therefore it is known as get-in or extraction operator.

		Syntax: 	cin>> <variable_name>;

	Note that, cin>> does not need an address of variable using & operator, it needs only variable name. 
	address collected automatically.


cout (Standard Output): cout is a predefined object of the ostream class, which represents the standard output stream. It is used to output data to the standard output device, typically the console/screen. << operator is actually bitwise left-shift operator, which when used along with cout, it will inserts / prints the data on screen and therefore it is called as insertion operator or put-to operator.
	
	Syntax:  	cout<< “<format_string>”<< <variable_name><<endl;

	Note that it does not need amy format specifier.

//----------------------------------------------------------------------------------------
#include <iostream>
int main() {
    int intValue;
    short shortValue;
    long longValue;
    long long longLongValue;

    // Input different types of integers
    std::cout << "Enter an integer (int): ";
    std::cin >> intValue;

    std::cout << "Enter an integer (short): ";
    std::cin >> shortValue;

    std::cout << "Enter an integer (long): ";
    std::cin >> longValue;

    std::cout << "Enter an integer (long long): ";
    std::cin >> longLongValue;

    // Display the input integers
    std::cout << "Integer (int): " << intValue << std::endl;
    std::cout << "Integer (short): " << shortValue << std::endl;
    std::cout << "Integer (long): " << longValue << std::endl;
    std::cout << "Integer (long long): " << longLongValue << std::endl;

    return 0;
}

    /// Dynamic decl and dynamic init.
    
- Dynamic decl: C++ allows you to decl. variable anywhere in the program,
                just decl. before using it. known as dynamic declaration.
                    
- Dynamic initilization: The them initialization refers to assigining
        the value to variable at the time of memory allocation. if the
        value to which valiable in initialized is decided at runtime.
        such initilization is known as Dynamic initilization.
       

/// WAP to calc the simple interest.
#include<iostream>
using namespace std;
int main()    
{
    int pa; // dynamic decl
    cout<<endl<<"Enter the pr. amount: ";
    cin>>pa;
    
    double roi;// dynamic decl
    cout<<endl<<"Enter the rate of intr: ";
    cin>>roi;
    
    int noy; // dynamic decl
    cout<<endl<<"Enter the dur: ";
    cin>>noy;
    
    double si=(pa*roi*noy)/100; // dynamic init
    cout<<endl<<"simple interest: "<<si;
    
    return 0;
}

//--------------------------------------------------------------------------------------------------------

	/// Fractional data input and display

#include <iostream>

int main() {
    float floatValue;
    double doubleValue;
    long double longDoubleValue;

    // Input different types of fractional values
    std::cout << "Enter a fractional value (float): ";
    std::cin >> floatValue;

    std::cout << "Enter a fractional value (double): ";
    std::cin >> doubleValue;

    std::cout << "Enter a fractional value (long double): ";
    std::cin >> longDoubleValue;

    // Display the input fractional values
    std::cout << "Fractional value (float): " << floatValue << std::endl;
    std::cout << "Fractional value (double): " << doubleValue << std::endl;
    std::cout << "Fractional value (long double): " << longDoubleValue << std::endl;

    return 0;
}

//----------------------------------------------------------------------------------------------------

	// Dealing with Boolean data

The Boolean data type (bool keyword) used to hold the result of condition, it is value 1 when the condition is Ture and 0 when the condition is false. C++20 introduces boolean literals true and false, which can be used to represent true and false values respectively.


#include<iostream>
using namespace std;
int main()
{
    bool b1=true;
    bool b2=false;
    cout<<endl<<"b1 is: "<<b1;
    cout<<endl<<"b2 is: "<<b2<<endl;

    int x=34, y=56;
    b1=x>y;
    b2=x!=y;
    cout<<endl<<"b1 is: "<<b1;
    cout<<endl<<"b2 is: "<<b2<<endl;

    cout<<std::boolalpha;
    cout<<endl<<"b1 is: "<<b1;
    cout<<endl<<"b2 is: "<<b2;

    return 0;
}


//--------------------------------------------------------------------------------------------------------

	// Using character data types

#include <iostream>

int main() {
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;
    std::cout << "Character entered: " << ch << std::endl;
    return 0;
}

#include <iostream>
int main() {
    wchar_t wch;
    std::wcout << L"Enter a wide character: ";
    std::wcin >> wch;
    std::wcout << L"Wide character entered: " << wch << std::endl;
    return 0;
}


	// character input - output

#include <iostream>
int main() {
    char str[40];

    std::cout<<std::endl<<"Enter any string: ";
    std::cin>>str;
    std::cout<<std::endl<<" str is: "<<str;

    const int MAX_SIZE = 100;
    char charArray[MAX_SIZE];
    std::cout << std::endl<< "Enter a string with spaces: ";
    //fflush(stdin);
    std::cin.ignore();
    std::cin.getline(charArray, MAX_SIZE);
    std::cout << "Entered string: " << charArray << std::endl;

    return 0;
}

//------------------------------------------------------------------------------------------------------------------

	/// Using void data type: 

	- we know that, the void data type is used to mention the function returning nothing in response to call.
	  Also when function does no collect any argument, the we use the void 

		i.e.	void show(void){....}

	- The another use of void is to declare the "Generic Pointer".
	  The generic pointer is a pointer which is convertable to any type.

#include<iostream>
using namespace std;
int main()
{
    char ch='A';
    float ft=3.4;
    int x=3245;

    void *gp; /// generic pointer

    gp=&ch;
    cout<<endl<<" ch using gp:"<<*(char*)gp; // classic way of castong
    cout<<endl<<" ch using gp:"<<*static_cast<char*>(gp)<<endl;// modern way of casting

    gp=&ft;
    cout<<endl<<" ft using gp:"<<*(float*)gp; // classic way of castong
    cout<<endl<<" ft using gp:"<<*static_cast<float*>(gp)<<endl;// modern way of casting

    gp=&x;
    cout<<endl<<" x using gp:"<<*(int*)gp; // classic way of castong
    cout<<endl<<" xusing gp:"<<*static_cast<int*>(gp)<<endl;// modern way of casting

    return 0;
}
//--------------------------------------------------------------------

// Operators in C++: special symbols with well defined meaning, which
		     will be used to process the data, when they are 
		     operated on opearnds.

	- All C operators are valid in C++, and these are

		- Assignment Operators [=]:   							
		- Unary Operators [ - ++ -- (type) sizeof ]:
		- Arithmatic Operators [ + - * / % ]:
		- Relational Operators [ < <= > >= ]:
		- Equality Operators [==, != ]
		- Logical Operators [ && || !]:
		- Conditional Operators [ ? : ]:
		- Bitwise Operators [ & | ^ >> << ]:
		- Special Operators [ , ; . -> &(ampersand) * ]:

	- Additionally C++ provides the following operators.
            
                - :: (scope resolution operator)
                - ::* (pointer to member Declarator)
                - ->* and .* (pointer to member operators)
                - delete (Memory release operator)
                - new (memory allocation operator)
                - endl (Line feed operator)
                - setw (field width operator)
    	
 - :: (scope resolution operator): 
   The scope resolution operator is used to access the global member always
   from any scope, It will access the global member even from the nested scope.

#include<iostream>
using namespace std;
int x=1000; // Global member
int main()
{
	int x=100; // local to main()
	cout<<"\n In main(upper) x: "<<x<<"\t global x: "<<::x;
	{
		int a=x; // local to inner scope
		cout<<"\n Inner scope(upper) x: "<<x<<"\t a="<<a<<"\t global x: "<<::x;
		int x=10;// local to inner scope
		a=x;
		cout<<"\n Inner scope(lower) x: "<<x<<"\t a="<<a<<"\t global x: "<<::x;
	}
	cout<<"\n In main(lower) x: "<<x<<"\t global x: "<<::x;
	return 0;
}

//------------------------------------------------------------------------------------

 // - new (memory allocation operator) and delete (Memory release operator): 

	new - Here is new is keyword, and acts as a memory allocation operator.
	      unlike C, it does require an explicit casting and also no need of
	      byte calculation, it will be done automatically.

		syntax:
			<ptr_variable> = new <data_type>[<cnt>];
	delete - here delete is keyword, and acts as a delete Memory release operator.
		 it will free/deletes/ releases the memory allocated for pointer variable
		 using new.

			syntax:	delete <ptr_var>;

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int *p,cnt;

	cout<<"\n enter the element count: ";
	cin>>cnt;

	 // p=(int*)malloc(cnt*sizeof(int)); - In C
    	p=new int[cnt];                   // - In C++
	cout<<"\n Enter the "<<cnt<<" Nos: ";
	for(int i=0;i<cnt;i++)
	{
		cin>>*(p+i);  // Note carefully cin does not needs an address
	}		      // so *(p+i) is written.	

	cout<<"\n Elements are: ";
	for(int i=0;i<cnt;i++)
	{
		cout<<setw(6)<<*(p+i);
	}
	// free(p); // - In C
	delete p;   // - In C++

	return 0;
}

//----------------------------------------------------------------------------

	- Different control statements in C++:

		C provides different control statments and all are as it is in C++

							Control statments
							      |
						------------------------------
						|			      |
					Conditional CS			UnConditional CS
						|				|
				-------------------------------		----------------------------------
				|		|	     |		|	   |		|	  |
			   Decision	     Loop	   Case	       goto      break      continue     return 
			    |		      |		    |	
			- if()		    - for()	  switch()
			- if() else	    - while()
			- Nesting	    - do while()
			- Ladder
 

	conditional control statments: needs the condition for working.

	unconditional control statments: Does not need any condition to work

//---------------------------------------------------------------------------------------------------------------------------

	// Derived Type in C++

	The derived types are as listed below..!!
	
	- Array: 
	- pointer:
	- function:
	- reference:
	- auto
	- decltype


 - Array: collection of elements having same data type, which conti. arranged
	  int the menory.

	- Numeric array: ( same as we have seen in the C)
	- character array: only onr difference and it is

		 Note that character array in C does not consider '\0' as 
		 a part of string, where as in C++ '\0' is considered as a 
		 part of string.

			C   - char s[5]="hello";
			C++ - char s[6]="hello";

 - Pointer: It is used in the dynamic memory allocation to store an address
	    of variable. We may divide the pointer in two different parts.

	- Raw pointer: (Pointer we have seen in the C)
		The basic difference is in steade of malloc() and free(),
		new and delete used for memory allocation release			
	- Smart pointer: Introduced in C++11, so we will see it in same chapter
	

	 Additionally c++ introduced 
            
                - pointer to constant: pointer able to point to any location of 
                                       correct type, but when it is refering, it 
                                       will not allow to change the data from the 
                                       location where it is pointing.
                                       
                - Constant pointer:  It is pointing towards same location. means the        
                                     value of pointer variable(address) can not be changed once
                                     it is initilizsd. you can change the value from 
                                     the location, where it is pointing.

#include<iostream.h>
//using namespace std; (run using onlinegdb TurboC++ Compiler)
int main()
{
    //-------------------- pointer to constant ------------------
    char const *ptr="hello";
    cout<<endl<<"string is: "<<ptr;

    ptr="Good Day";
    cout<<endl<<"string is: "<<ptr;

    // *(ptr+2)='a'; // will generate the error coz it is refered by pointer to constant

    //-------------------- constant pointer  ------------------
    char *const ptr1="how are you";
    cout<<endl<<"string is: "<<ptr1;
    *(ptr1+2)='a';
    cout<<endl<<"now string is: "<<ptr1;

   // ptr1="Bye Bye";   // error due to, you are trying to assign new address to constant pointer
    cout<<endl<<"string is: "<<ptr1;
   //-------------------------------------------------------    
    const char* const ptr2="good day";
    cout<<"\n ptr2 is: "<<ptr2;
    
    // ptr2="see you"; // error: con not modify the const object
    // *(ptr2+2)='a'; // error: con not modify the const object

    return 0;
}

//---------------------------------------------------------------------------------------------

	- Function: (Next chapter)
//---------------------------------------------------------------------------------------------

	- Reference: 

		int x=10;	int& y=x; // Here y is alternative name of x, called alise
		int z=x;

			x	       z
			 [ 10 ]		[ 10 ]
			y
#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int &y=x;
    cout<<endl<<"x="<<x<<"\t y="<<y;

    x=100;
    cout<<endl<<"x="<<x<<"\t y="<<y;

    y=150;
    cout<<endl<<"x="<<x<<"\t y="<<y;

    return 0;
}

//------------------------------------------------------------------------

	// let's consider the following program.

/// class by value
 
#include<iostream>
using namespace std;
void swap(int a, int b)
{
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
}
int main()
{
	int x=10,y=12;

	cout<<endl<<"Before swap: x="<<x<<"\t y="<<y;
	swap(x,y);
	cout<<endl<<"After swap: x="<<x<<"\t y="<<y;

	return 0;
}



 /// call by reference - using pointer

#include<iostream>
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
	int x=10,y=12;

	cout<<endl<<"Before swap: x="<<x<<"\t y="<<y;
	swap(&x,&y);
	cout<<endl<<"After swap: x="<<x<<"\t y="<<y;

	return 0;
}

// call by reference - using reference variable
*/
#include<iostream>
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
	int x=10,y=12;

	cout<<endl<<"Before swap: x="<<x<<"\t y="<<y;
	swap(x,y);
	cout<<endl<<"After swap: x="<<x<<"\t y="<<y;

	return 0;
}


//-------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------

	/// Function in C++: 

	Note: the function we have seen in C, is as it is in C++. Additionally the C++ function having
	      following features.

	
	Def: Group/Collection of instructions designed to perform the specific task.
	There are 3 different steps 
	
	- decleration
	- calling
	- definitation

	consider the simple add() function,

	dec: 
		int add(int, int);

	def:
		int add(int x, int y)
		{
			int t=x+y;
			return t;
		}

	call:
		int ans=add(a,b);


Lets see,

int add(int,int);
int main()
{
	int a,b,sum;

	cout<<endl<<"Enter two numbers: ";
	cin>>a>>b;

	sum=add(a,b);
	
	cout<<endl<<"Addition is: "<<sum;
	return 0;
}
int add(int x, int y)
{
	int t=x+y;
	return t;
}


 //-------------------------------------------------------------------------------------------------

	// Inline Function: 

	It is simple function, decl. as inline using inline keyword. when any function decl. as inline
	the function call is replaced with body of function. means the it will avoid the push, pop and 
	register copy operations.

	Note that it is request to compiler, if that function is complex then it will execute as a normal
	function eventhough it is decl. as inline.

	There are some rules for inline
	- It must be expanded within one or two lines.
	- It must not contain, any control statement or switch.
	- static function can not be decl as inline.
	- vitual function can not be decl. as inline.
	- can not be recursive.


inline int squre(int t)
{
	return (t*t);
}

int main()
{
	int no,ans;
	cout<<endl<<"Enter any number: ";
	cin>>no;
	ans=squre(no); 
	cout<<endl<<"Squre of "<<no<<" is "<<ans;
	return 0;
}


//---------------------------------------------------------------------------------------------

	// Function with reference arguments and reference return.


	we have seen, call by reference using reference variable.


	void swap(int &a, int &b)
	{
		...
	}

	and called from main() as swap(x,y)

	In this case, x and y are variables from scope of main() function. The a and b are the 
	alternative names assinged to them, to access them from swap() function.

	in a same style you can assign an alternative name to the variable from function, to access
	in a main() function.

	lets see the following example...!!

int& findmax(int& x, int& y)
{
	if(x>y)
		return x;
	else 
		return y;
}
	
int main()
{
	int a,b;

	cout<<endl<<"Enter two numbers: ";
	cin>>a>>b;

	int& t=findmax(a,b);
	
	cout<<endl<<"max is: "<<t; // Actualy it will assigns name to max value location
	return 0;
}


//-------------------------------------------------------------------------------------------------

	// Function with default arguments:

	C++ allows you to assign the default values to the formal arguments, which are used when 
	function call does not provides the values via call.
	
	But note that the values must be assiged from right to left.

#include <iostream>
using namespace std;
float simpleintr(int pa, float roi=8.5, int noy=1)
{
	float t=(pa*roi*noy)/100;
	return t;
}
int main()
{
	int p,n;
	float r,si;

	cout<<"Enter the amount ROI and Duration: ";
	cin>>p>>r>>n;

	si=simpleintr(p,r,n);
	cout<<"\n 1. simple interest: "<<si;

	si=simpleintr(p,r);
	cout<<"\n 2. simple interest: "<<si;

	si=simpleintr(p);
	cout<<"\n 3. simple interest: "<<si;

	return 0;
}

//--------------------------------------------------------------------------------------------------
	
	// Function with const argument

	we can use const as a qualifier to the formal arguments, so when it is decl. as a constant we can
	access it, but it is not allowed to change it. generally it is used to when the members are passed 
	by reference.

#include <iostream>
#include <iomanip>
using namespace std;
float findpercentage(const int marks[5], int sc)
{
	int tot=0;
	for(int i=0;i<sc;i++)
	{
		tot=tot+marks[i];
        /// marks[i]=tot; // By mistake - will generate an error message, coz it is decl as const
	}
	return tot/float(sc);
}
void display(int m[])
{
    for(int i=0;i<5;i++)
    {
        cout<<setw(6)<<m[i];
    }
}
int main()
{
	int m[5];

	cout<<endl<<"Enter the marks in 5 subjects: ";
	for(int i=0;i<5;i++)
	{
		cin>>m[i];
	}

	float per=findpercentage(m,5);
	cout<<endl<<"Marks: ";
	display(m);
	cout<<endl<<"Percentage is: "<<per;

	return 0;
}

//----------------------------------------------------------------------------------------------------------


	// Function Overloading: 

	C does not allows you to wrire a function with same name in a single program. but in C++ it is allowed.
	But condition is that all these functions having same name must differ in terms of type of arguments
	passed, sequence in which they collected and number of arguments. 

	If program contains multiple functions having same name and they differ in terms of type, sequence
	and count then it is known as function overloading.
	
#include <iostream>
using namespace std;
void add(int a, int b)
{
	cout<<endl<<"1.Addition is: "<<(a+b);
}
void add(int a, int b, int c)
{
	cout<<endl<<"2.Addition is: "<<(a+b+c);
}
void add(float a, float b)
{
	cout<<endl<<"3.Addition is: "<<(a+b);
}

void add(float a, int b)
{
	cout<<endl<<"4.Addition is: "<<(a+b);
}

int main()
{
	int x,y;
	cout<<endl<<"Enter two int values: ";
	cin>>x>>y;
	add(x,y);

	int z;
	cout<<endl<<"Enter a single int value: ";
	cin>>z;
	add(x,y,z);
		
	float p,q;
	cout<<endl<<"Enter two float values: ";
	cin>>p>>q;
	add(p,q);
	
	add(p,y);
	
	return 0;
}


	Note that if exact match not found then, the lower types are promoted to higher types and then the
	exact match will be searched. In such case the type promotion happen as shown

	char --> int --> long --> float --> double --> long double

	lets consider the same example where the add(int,int) is not present then to add two int values
	add(float,int) will be used after promoting the first int to float

#include <iostream>
using namespace std;
void add(int a, int b, int c)
{
	cout<<endl<<"Addition 1 is: "<<(a+b+c);
}
void add(float a, float b)
{
	cout<<endl<<"Addition 2 is: "<<(a+b);
}

int main()
{
	int x,y;
	cout<<endl<<"Enter two int values: ";
	cin>>x>>y;
	add(x,y); // x and y is promoted to float

	int z;
	cout<<endl<<"Enter a single int value: ";
	cin>>z;
	add(x,y,z);
		
	float p,q;
	cout<<endl<<"Enter two float values: ";
	cin>>p>>q;
	add(p,q);
	
	return 0;
}

Note: If a program contains two or more functions having exactly same prototype(signature),
      then compiler confusion represented in terms of error, call ambiguilty error.

Again we have to see different functions listed below, after knowing the class and object concept.

- static functions:
- friend function:
- virtual functions:

                
//===========================================================================================================================
//===========================================================================================================================
//===========================================================================================================================

	class and Object
	=================

	we have seen different data types in C and C++, and we know that the basic aim of any
	data type is to allocate the memory.

	we used built-in data types(char,int,float and double), derived data types(array, 
	pointer), and userdefined data types(structure, union and enum) to allocate the memory.

	These data types used in the decl. instruction to allocate the memory, which will 
	creates the data structure, which is used to represent the data. The data represented
	using above data structures can be accessed using any function defined within the same
	program. Means the data is public in nature, and as the data is public, it is less
	secure.

	To attend the data security C++ introduced a concept of class. It is user defined data
	type, which will create a data structure and when that data structure is used to
	represent data within memory, it will not allow to access the data members using dot
	operator directly like a structure, means bydefault the data represented using class
	is private in nature, and this limited accessibility provides the security to data.

	lets see with the help of example,

	// we have store the information of bank account

	// lets use the structure

struct BankAccount
{
	char nm[40];
	int accno;
	char pass[20];
};

int main()
{
	struct BankAccount b;

	cout<<endl<<"enter the account holder name: ";
	cin.getline(b.nm,40);
	cout<<endl<<"enter the account number: ";
	cin>>b.accno;
	cout<<endl<<"enter the account password: ";
	cin.getline(b.pass,40);

	cout<<endl<<"Name: "<<b.nm<<"\t Account Number: "<<b.accno<<"\t Password: "<<b.pass;

	return 0;
}
	
//-------------------------------------------------------------

	// Due to several different advantages, we will prefer functions(Modular Approch)

struct BankAccount
{
	char nm[40];
	int accno;
	char pass[20];
};
void input(struct BankAccount& t)
{
	cout<<endl<<"enter the account holder name: ";
	cin.getline(t.nm,40);
	cout<<endl<<"enter the account number: ";
	cin>>t.accno;
	cout<<endl<<"enter the account password: ";
	cin.getline(t.pass,40);
}
void display(struct BankAccount k)
{
	cout<<endl<<"Name: "<<k.nm<<"\t Account Number: "<<k.accno<<"\t Password: "<<k.pass;
}
int main()
{
	struct BankAccount b;

	input(b);
	display(b);

	return 0;
}

//----------------------------------------------------------------------------------

	In above case as the account data b, moving from function to fuction and every
	function able to access it. the account data is not secure.

	to attend the security to data lets use the class

class BankAccount
{
    private: 
	char nm[40];
	int accno;
	char pass[20];
    public:
	void input()
	{
		cout<<endl<<"enter the account holder name: ";
		cin.getline(nm,40);
		cout<<endl<<"enter the account number: ";
		cin>>accno;
		cout<<endl<<"enter the account password: ";
		cin.getline(pass,40);
	}
	void display()
	{
		cout<<endl<<"Name: "<<nm<<"\t Account Number: "<<accno<<"\t Password: "<<pass;
	}
};
int main()
{
	BankAccount b1;
	b1.input();
	b1.display();

	BankAccount b2;
	b2.input();
	b2.display();

	return 0;
}


		b1 ____________________________		b2 ____________________________
		  |			     |		   |			     |
		  | nm    [][][][][][][][]   |		   | nm    [][][][][][][][]  |
		  | accno [     ]	     |  	   | accno [     ]	     |
		  | pass  [][][][][][]	     |		   | pass  [][][][][][]	     |
		  |		    ^	     |	           |		    ^	     |
		  |______________|  |  |_____|		   |______________| |  |_____|	
		  |		    |	     |   	   |		    |	     |
		  | void input() {...}	     |		   | void input() {...}	     |
		  | void display() {...}     |		   | void display() {...}    |
		  |			     |		   |			     |
		  |		    ^	     |		   |		    ^	     |
		  |______________|  |  |_____|		   |______________| |  |_____|
				    |					    |


	// Procedure Oriented Programming(POP):
		
	- More efforts are taken for defining the procedures. (Doing Things)
	- data moving from function to function for processing.
	- As the data is global, it having less security.
	- Normally it employs the modular opproach, and the function transforms the data from
	  one form to another.
	- Employs top-down approach in program design.

	
	//  Object Oriented Programming(OOP):

	- The data is core area of interst rather than defining the procedures.
	- Program is divided into number of objects.
	- Data structures are designed in a such way that they characterize the object
	- The function which process the data is wrapped in the same object which hold the data.
	- To attend the security, the data is normally decl. in private area of class
	- You can add new data and functions easily.
	- Follows the bottom-up approach in program design.

	
	// Five Pilars of OOP:


	1. class: It is just templete which is used to characterize the object.
		 It holds the data and code to manipulate that data. It defines 3 different
		 sections (public, protected and private). 
		 In other words, It is specification (collection of rules) which is implemented
		 while creating the object .

		syntax:
		class <cls_nm>
		{
			private:
				<data_members>;
				<member_functions>(){};
			protected:
				<data_members>;
				<member_functions>(){};
			public:
				<data_members>;
				<member_functions>(){};
		};
		
		e.g.
		class student
		{
		      private:       
			char nm[40];
			int rno;
			int age;
			float per;
		      public:
			void input(){ ... }
			void display() {...}
		};


	2. Object:
		  In simple terms, " It is vatiable of class type". basically it is runtime entity
		  in which entire program is divided. When it gains the memory space, note that 
		  it contain data and code to manuplate that data, which is divied into private, 
		  protected and public section, from which the private is not accessible to using
		  dot operator directly, and public members of class can be accessed using the 
		  . operator
		
		 Basically it is actual implementation of specifications defined using class.

		syntax:
			<class_nm> <obj_nm>;
			e.g.
				student s;

		s
		________________________________
		|private:			|
		|				|
		|   nm    rno    age   per	|
		|   [ ]    []    []     []	|
		|				|
		|				|
		|				|
		|__________________| ^ |________|
		|public:	     |		|
		|				|		
		| void input(){.....}		|
		| void display(){.....}		|
		|				|
		|				|
		|__________________| ^ |________|
				     |	


	3. data hiding: The private data of class is not accessible directly using the dot
			operator, means that data is get hided from outside world, which is
			known as data hiding.  
				
			The Data Hiding provides the security to data.

	4. Encapsulation: Wrapping up of data members and member functions together under
			  single unit is known as encapsulation. 

			Here in class the data member and member functions are encapsulated together.
				
	5. Abstraction: In simple words "Without knowing too much about it"
			It is an art of defining the new type(class) without including its background details.

			here in case of class and object, we dont think about the amount of
			memory as well as its representation in the memory(memory map), means
			we are abstract about it.

			The data types which supports abstraction known as Abstract Data Types (ADT)

//=========================================================================================================

	// Defining the member functions outside of class.

	C++ aows you to define the member functions outside of class. in such case they are
	only written outside of class,  no any change in their behaviour.

	syntax:
		<return type> <class_nm>::<fun_name>()
		{
			----------------------;
			----------------------;
			----------------------;
			----------------------;
		}

	Note that,
		- You must decl. function inside the class.
		- the function def. written outside must contain <class_nm>:: in between <return_type> and <Fun_nm>
		

class BankAccount
{
    private: 
	char nm[40];
	int accno;
	char pass[20];
    public:
	void input();
	void display();
};
void BankAccount::input()
{
	cout<<endl<<"enter the account holder name: ";
	cin.getline(nm,40);
	cout<<endl<<"enter the account number: ";
	cin>>accno;
	cout<<endl<<"enter the account password: ";
	cin.getline(pass,40);
}
void BankAccount::display()
{
	cout<<endl<<"Name: "<<nm<<"\t Account Number: "<<accno<<"\t Password: "<<pass;
}
int main()
{
	BankAccount b1;
	b1.input();
	b1.display();

	BankAccount b2;
	b2.input();
	b2.display();

	return 0;
}

///-----------------------------------------------------------------------------------------------------------------------

	/// Passing the arguments to member function


		b1 ____________________________		b2 ____________________________
		  |			     |		   |			     |
		  | nm    [][][][][][][][]   |		   | nm    [][][][][][][][]  |
		  | accno [     ]	     |  	   | accno [     ]	     |
		  | pass  [][][][][][]	     |		   | pass  [][][][][][]	     |
		  |		    ^	     |	           |		    ^	     |
		  |______________|  |  |_____|		   |______________| |  |_____|	
		  |		    |	     |   	   |		    |	     |
		  | void input(..) {...}     |		   | void input(..) {...}    |
		  | void display() {...}     |		   | void display() {...}    |
		  |			     |		   |			     |
		  |		    ^	     |		   |		    ^	     |
		  |______________|  |  |_____|		   |______________| |  |_____|
				    |					    |
#include<string.h>
class BankAccount
{
    private: 
	char nm[40];
	int accno;
	char pass[20];
    public:
	void input(char a1[], int a2, char a3[])
	{
		strcpy(nm,a1);
		accno=a2;
		strcpy(a3);
	}
	void display()
	{
		cout<<endl<<"Name: "<<nm<<"\t Account Number: "<<accno<<"\t Password: "<<pass;
	}
};
int main()
{
	BankAccount b1;
	b1.input("Amit", 1234, "try123");
	b1.display();

	//---------------------------------------------

	char nm1[40], pass1[40];
	int aacno1;

	cout<<endl<<"enter the account holder name: ";
	cin.getline(nm1,40);
	cout<<endl<<"enter the account number: ";
	cin>>accno1;
	cout<<endl<<"enter the account password: ";
	cin.getline(pass1,40);

	BankAccount b2;
	b2.input(nm1,accno1,pass1);
	b2.display();

	return 0;
}


//-----------------------------------------------------------------------------------------------------------------------

		// Using function overloading within class

#include<string.h>
class BankAccount
{
    private: 
	char nm[40];
	int accno;
	char pass[20];
    public:
	void input()
	{
		cout<<endl<<"enter the account holder name: ";
		cin.getline(nm,40);
		cout<<endl<<"enter the account number: ";
		cin>>accno;
		cout<<endl<<"enter the account password: ";
		cin.getline(pass,40);
	}
	void input(char a1[], int a2, char a3[])
	{
		strcpy(nm,a1);
		accno=a2;
		strcpy(a3);
	}
	void display()
	{
		cout<<endl<<"Name: "<<nm<<"\t Account Number: "<<accno<<"\t Password: "<<pass;
	}
};
int main()
{
	BankAccount b1;
	b1.input();
	b1.display();

	BankAccount b2;
	b2.input("Amit", 1234, "try123");
	b2.display();

	return 0;
}


//--------------------------------------------------------------------------------------------------------------------------

	// Defining out own class "Number"

class Number
{
	int val;
     public:
	void set()
	{
		cout<<endl<<"Enter any int value: ";
		cin>>val;
	}
	void show()
	{
		cout<<endl<<"value is: "<<val;
	}
};

int main()
{
	Number n1;

	n1.set();
	n1.show();

	return 0;
}

//-----------------------------------------------------------------------------------------------------

	// Processing Number object

class Number
{
	int val;
     public:
	void set()
	{
		cout<<endl<<"Enter any int value: ";
		cin>>val;
	}
	void show()
	{
		cout<<endl<<"value is: "<<val;
	}
	void isevenorodd()
	{
		if(val%2==0)
		{
			cout<<endl<<"Number is Even";
		}
		else
		{
			cout<<endl<<"Number is Odd";
		}
	}
	void ispositive_negative_zero()
	{
		if(no<0)
		{
			cout<<endl<<"Number is Negative";
		}
		else if(no>0)
		{
			cout<<endl<<"Number is Positive";
		}
		else
		{
			cout<<endl<<"Number is zero";
		}
	}
};

int main()
{
	Number n1;

	n1.set();
	n1.show();

	cout<<endl<<"EvenOdd Check: ";
	n1.isevenorodd();

	cout<<endl<<"Positive or Negative Check: ";
	n1.ispositive_negative_zero();

	return 0;
}

//---------------------------------------------------------------------------------------------------

	// Passing argument to member function and returning the value from member function

class Number
{
	int val;
     public:
	void set()
	{
		cout<<endl<<"Enter any int value: ";
		cin>>val;
	}
	void set(int t)
	{
		val=t;
	}
	void show()
	{
		cout<<endl<<"value is: "<<val;
	}
	int get()
	{
		return val;
	}
	void isevenorodd()
	{
		if(val%2==0)
		{
			cout<<endl<<"Number is Even";
		}
		else
		{
			cout<<endl<<"Number is Odd";
		}
	}
	void ispositive_negative_zero()
	{
		if(no<0)
		{
			cout<<endl<<"Number is Negative";
		}
		else if(no>0)
		{
			cout<<endl<<"Number is Positive";
		}
		else
		{
			cout<<endl<<"Number is zero";
		}
	}
	int getreverse()
	{
		int no=val;
		int r=0;
		while(no!=0)
		{
			r=(r*10)+(no%10) ;
			no=no/10;
		}
		return r;
	}
};

int main()
{
	Number n1;

	n1.set();
	n1.show();

	cout<<endl<<"EvenOdd Check: ";
	n1.isevenorodd();

	cout<<endl<<"Positive or Negative Check: ";
	n1.ispositive_negative_zero();

	//--------------------------------------------------

	Number n2;
	n2.set(23);
	cout<<endl<<"Value of n2 is: "<<n2.get();

	int rev=n2.getreverse();
	cout<<end<<"Reverse of "<<n2.get()<<" is "<<rev;

	return 0;
}

//----------------------------------------------------------------------------------------------------------

	// Nesting of member function

class Number
{
	int val;
     public:
	void set()
	{
		cout<<endl<<"Enter any int value: ";
		cin>>val;
	}
	void set(int t)
	{
		val=t;
	}
	void show()
	{
		cout<<endl<<"value is: "<<val;
	}
	int get()
	{
		return val;
	}
	void isevenorodd()
	{
		if(val%2==0)
		{
			cout<<endl<<"Number is Even";
		}
		else
		{
			cout<<endl<<"Number is Odd";
		}
	}
	void ispositive_negative_zero()
	{
		if(no<0)
		{
			cout<<endl<<"Number is Negative";
		}
		else if(no>0)
		{
			cout<<endl<<"Number is Positive";
		}
		else
		{
			cout<<endl<<"Number is zero";
		}
	}
	int getreverse()
	{
		int no=val;
		int r=0;
		while(no!=0)
		{
			r=(r*10)+(no%10) ;
			no=no/10;
		}
		return r;
	}
	char* ispalindrome()
	{
		if(val==getreverse())
		{
			return "Yes";
		}
		else
		{
			return "No";
		}
	}
};

int main()
{
	Number n1;

	n1.set();
	n1.show();

	cout<<endl<<"EvenOdd Check: ";
	n1.isevenorodd();

	cout<<endl<<"Positive or Negative Check: ";
	n1.ispositive_negative_zero();

	//--------------------------------------------------

	Number n2;
	n2.set(23);
	cout<<endl<<"Value of n2 is: "<<n2.get();

	int rev=n2.getreverse();
	cout<<end<<"Reverse of "<<n2.get()<<" is "<<rev;

	cout<<endl<<"Is n2 is Palindrome? "<<n2.ispalindrome();

	return 0;
}

///------------------------------------------------------------------------------------------

	// Define below mentioned classes with some methods with it 

class Distance
{
    private:
	double value;
    public:
	void set();
	double get();
	void show();
	void tocentimeter();
	double getfeet();
	double getmeters(); 
	void ininches();
};

//---------------------------------------------------

class Box
{
    private:
	int length;
	int width;
	int height;
    public:
	void in(); // allowed to modify the prototype
	void out();
	int getlength();
	int getwidth();
	int getheight();
	int setlength(int);
	int setwidth(int);
	int setheight(int);
	int volume();
};

//--------------------------------------------------------------------------------------

	// Write a menu driven program to convert a decimal in to binary, octal or hex
	// dependenting up on the users choice.

class Number
{
    private:
	int val;
    public:    
	void set();
	void show();
	void tobinary();
	void tooctal();
	void tohex();
};

//--------------------------------------------------------------------------------------------------------

	// Defining the private function within a class.

class Result
{
    private:
	int sub1;
	int sub2;
	int sub3;
	void getstatus()
	{
		if(sub1>=40 && sub2>=40 && sub3>=40)
		{
			cout<<endl<<"Result: Pass"<<"\t with percentage: "<<(sub1+sub2+sub3)/3.0;
		}
		else
		{
			cout<<endl<<"Result: Fail";
		}
	}
    public:
	void input()
	{
		cout<<endl<<"Enter the marks in 3 subjects: ";
		cin>>sub1>>sub2>>sub3;
	}
	void display()
	{
		cout<<endl<<"Marks: "<<sub1<<"\t"<<sub2<<"\t"<<sub3;
		getstatus();
	}
};

int main()					    rob ________________________
{							|			|
	Result rob;					| sub1    sub2    sub3  |
							|  [  ]     [  ]   [  ] |				
	rob.input();					|			|	
	rob.display();					|  void getstatus(){..} |
							|______________|   |____|
	return 0;					|			|
}							| void input(){...}	|
							| void display(){...}   |
							|			|
							|_______________|   |___|



//--------------------------------------------------------------------------------------------------------

	// Using Array as a member of class.

class Result
{
    private:
	int sub[5];
    public:
	void setmarks()
	{
		cout<<"\n Enter the marks obtained in five subject: ";
		for(i=0;i<5;i++)
		{
			cout<<endl<<"subject "<<(i+1)<<": ";
			cin>>sub[i];
		}
	}
	void showmarks()
	{
		cout<<endl<<"Marks Obtained in five subjects: "
			<<setw(6)<<sub[i];
		
	}
	void showresult()
	{
		int tot=0,flg=0;
		float per=0.0;
		for(i=0;i<5;i++)
		{
			if(sub[i]<40)
			{
				flg=1;
				tot=0;
				break;
			}
			tot=tot+sub[i];
		}
		if(flg==0)
		{
			per=tot/5.0;
			cout<<"\n Student is Pass with "<<per<<"%%";
		}
		else
		{
			cout<<"\n Student is Fail";
		}
	}
};

int main()
{
	Result r;

	r.setmarks();
	r.showmarks();
	r.showresult();

	return 0;
}

//-----------------------------------------------------------------------------------------------------------

	// WAP to define folowing class and create object and perform different operations

class MyArray
{
	int val[5];
	int tmp[5];	
	void copyArray();
    public:
	void input();
	void display();
	void sort();
	void binarysearch(int);
	int getEvens();
	int findocr(int);
};
void MyArray::input()
{
	cout<<endl<<"Enter any five nos: ";
	for(int i=0;i<5;i++)
	{
		cin>>val[i];
	}
}

void MyArray::display()
{
	for(int i=0;i<5;i++)
	{
		cout<<setw(6)<<val[i];
	}
}
void MyArray::display(int k)
{
	cout<<endl<<"\n Elements are: ";
	for(int i=0;i<5;i++)
	{
		cout<<setw(6)<<tmp[i];
	}
}

void MyArray::sort()
{
	copyArray();
	int i,j,t;
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(tmp[j]<tmp[i])
			{
				t=tmp[i];
				tmp[i]=tmp[j];
				tmp[j]=t;
			}
		}
	}
	cout<<"Sorted Array: ";
	display(1);
}

void MyArray::copyArray()
{
	for(i=0;i<5;i++)
	{
		tmp[i]=val[i];
	}
	cout<<"Copied Array: ";
	display(1);
}
void MyArray::binarysearch(int no)
{
	copyArray();
	sort();

	int start=0,end=4,mid,flg=0;
	do
	{
		mid=(start+end)/2;
		if(tmp[mid]==no)
		{
			flg=1;
			break;
		}
		else if(no<tmp[mid])
		{
			end=mid-1;
		}
		else if(no>tmp[mid])
		{
			start=mid+1;
		}
	}while(start<=end);

	if(flg==1)
	{
		cout<<end<<"Number is present at "<<mid<<" Position";
	}
	else
	{
		cout<<end<<"Number is Not present in an array.";
	}
}

int MyArray::getEvens()
{
	int cnt=0;
	for(int i=0;i<5;i++)
	{
		if(val[i]%2==0)
		{	
			cnt++;
		}
	}
	return cnt;
}

int MyArray::findocr(int no)
{
	int cnt=0;
	for(int i=0;i<5;i++)
	{
		if(val[i]==no)
		{	
			cnt++;
		}
	}
	return cnt;
}

int main()
{

	........

	return 0;
}

//-------------------------------------------------------------------------------------------------------

	// Write  a class "string" and add different functions to process the string.

class String
{
    private:
	char data[50];
    public:
	void setString()
	{
		cout<<endl<<"Enter the string: ";
		cin.getline(data,50);
	}
	char* getString()
	{
		return data;
	}
	void toupper()
	{
		for(int i=0;data[i]!='\0';i++)
		{
			if(data[i]>=97 && data[i]<=122)
			{
				data[i]=data[i]-32;
			}
		}
	}
	int getlength()
	{
		for(i=0;data[i]!='\0';i++);
		return i;
	}
};
int main()
{
	String s1;
	s1.setString();
	cout<<endl<<"The String s1 is: "<<s1.getString();

	String s2;
	s2.setString();
	cout<<endl<<"The String s2 is: "<<s2.getString();

	s1.toupper();
	cout<<endl<<"The String s1 in Uppercase is: "<<s1.getString();

	int t=s2.getlength();
	cout<<endl<<"Length of s2 is: "<<t;

	return 0;
}

//-------------------------------------------------------------------------------------------

	/// Passing Object as an argument to member function.

class String
{
    private:
	char data[50];
    public:
	void setString()
	{
		cout<<endl<<"Enter the string: ";
		cin.getline(data,50);
	}
	char* getString()
	{
		return data;
	}
	int getlength()
	{
		for(int i=0;data[i]!='\0';i++);		// s1 _____________     s2 _____________ 
		return i;				//    | data       |       | data       |
	}						//    |  [.......] |       |  [.......] |  
	int compare(String t)				//    |________||__|       |________||__|
	{						//    |	.....	   |	   | .....	|
		int i,j,flg=0;				//    | compare(s2)|       |            |
		for(i=0;data[i]!='\0';i++); //len s1	//    |________||__|       |________||__|
		for(j=0;t.data[j]!='\0';j++); // len s2
		if(i==j)
		{
			for(i=0;i<=j;i++)
			{
				if(data[i]!=t.data[i])
				{
					flg=1;
					break;
				}
			}
		}
		else
		{
			flg=1;
		}
		return flg;
	}
};

int main()
{
	String s1;
	s1.setString();
	cout<<endl<<"The String s1 is: "<<s1.getString();

	String s2;
	s2.setString();
	cout<<endl<<"The String s2 is: "<<s2.getString();

	int t=s2.getlength();
	cout<<endl<<"Length of s2 is: "<<t;

	//--------------------------------------------------------

	if(!s1.compare(s2))
	{
		cout<<endl<<"Strings are matching";
	}
	else
	{
		cout<<endl<<"Strings not are matching";
	}

	return 0;
}

///-------------------

// Write a program to add two Time Objects

#include <iostream>
using namespace std;

class Time
{
    private:
	int hours;
	int min;
	int sec;
    public:
	void setTime()
	{
		cout<<endl<<"Enter the time in (HH:MM:SS):  ";
		cin>>hours>>min>>sec;
	}
	void setTime(int h, int m, int s)
	{
		hours=h;
		min=m;
		sec=s;
	}
	void showTime()
	{
		cout<<"Time is: "<<hours<<":"<<min<<":"<<sec;
	}
	void addTime(Time x, Time y)
	{
	    sec=x.sec+y.sec;
	    min=x.min+y.min+(sec/60);
	    sec=sec%60;
	    
	    hours=x.hours+y.hours+(min/60);
	    min=min%60;
	}
};
int main()
{
	Time t1,t2,t3;

	t1.setTime();
	
	int a,b,c;
	cout<<endl<<"Enter the time in (HH:MM:SS):  ";
	cin>>a>>b>>c;
	t2.setTime(a,b,c);

	cout<<endl<<"T1 ";	t1.showTime();
	cout<<endl<<"T2 ";	t2.showTime();
	
	t3.addTime(t1,t2);
	cout<<endl<<"T3 ";	t3.showTime();

	return 0;
}

//---------------------------------///-------------------

// Write a program to add two Time Objects(with returning the Time object)

#include <iostream>
using namespace std;

class Time
{
    private:
	int hours;
	int min;
	int sec;
    public:
	void setTime()
	{
		cout<<endl<<"Enter the time in (HH:MM:SS):  ";
		cin>>hours>>min>>sec;
	}
	void setTime(int h, int m, int s)
	{
		hours=h;
		min=m;
		sec=s;
	}
	void showTime()
	{
		cout<<"Time is: "<<hours<<":"<<min<<":"<<sec;
	}
	Time addTime(Time x)
	{
		Time tmp;
		
		tmp.sec=sec+x.sec;
	    	tmp.min=min+x.min+(tmp.sec/60);
		tmp.sec=tmp.sec%60;

		tmp.hours=hours+x.hours+(tmp.min/60);
		tmp.min=tmp.min%60;

		return tmp;
	}
};
int main()
{
	Time t1,t2,t3;

	t1.setTime();
	
	int a,b,c;
	cout<<endl<<"Enter the time in (HH:MM:SS):  ";
	cin>>a>>b>>c;
	t2.setTime(a,b,c);

	cout<<endl<<"T1 ";	t1.showTime();
	cout<<endl<<"T2 ";	t2.showTime();
	
	t3=t1.addTime(t2); // t2 passed as an argument, t1 passed implicitly
	cout<<endl<<"T3 ";	t3.showTime();

	return 0;
}
///----------------------------------------------------------------------------------------
	// WAP to add two complex Numbers

class Complex
{
    private:
	int real;
	float img;
    public:
	void getComplexNo()
	{
		cout<<endl<<"Enter real part: ";
		cin>>real;
		cout<<endl<<"Enter img part: ";
		cin>>img;
	}
	void showComplexNo()
	{
		cout<<real<<"+j"<<img;
	}
	void addComplexNos(Complex a, Complex b);
};
void Complex::addComplexNos(Complex a, Complex b)
{
	real=a.real+b.real;
	img=a.img+b.img;
}
int main()
{
	Complex c1,c2,c3;

	c1.getComplexNo();
	c2.getComplexNo();

	c3.addComplexNos(c1,c2);

	cout<<endl<<"C1: ";	c1.showComplexNo();
	cout<<endl<<"C2: ";	c2.showComplexNo();
	cout<<endl<<"C3: ";	c3.showComplexNo();

	return 0;
}

 // With return


// WAP to add two complex Numbers

#include <iostream>
using namespace std;

class Complex
{
    private:
	int real;
	float img;
    public:
	void getComplexNo()
	{
		cout<<endl<<"Enter real part: ";
		cin>>real;
		cout<<endl<<"Enter img part: ";
		cin>>img;
	}
	void showComplexNo()
	{
		cout<<real<<"+j"<<img;
	}
	Complex addComplexNos(Complex a);
};
Complex Complex::addComplexNos(Complex a)
{
	Complex tmp;
	tmp.real=real+a.real;
	tmp.img=img+a.img;

	return tmp;
}
int main()
{
	Complex c1,c2,c3;

	c1.getComplexNo();
	c2.getComplexNo();

	c3=c1.addComplexNos(c2);

	cout<<endl<<"C1: ";	c1.showComplexNo();
	cout<<endl<<"C2: ";	c2.showComplexNo();
	cout<<endl<<"C3: ";	c3.showComplexNo();

	return 0;
}
///----------------------------------------------------------------------------------

	/// Pointer as a member of class

class DynamicArray
{
    private:
	int *p;
	int cnt;
    public:
	void input()
	{
		cout<<endl<<"Enter the element count: ";
		cin>>cnt;
		p=new int[cnt];
		cout<<endl<<"Enter the "<<cnt<<" Nos: ";
		for(int i=0;i<cnt;i++)
		{
			cin>>*(p+i);
		}
	}
	void output()
	{
		cout<<endl<<"Elements are: ";
		for(int i=0;i<cnt;i++)
		{
			cout<<setw(7)<<*(p+i);
		}
	}
};
int main()
{
	DynamicArray ob;

	ob.input();
	ob.output();

	return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------
	// Using static function with is class.

	When any member function decl. as static
	 - It will gains the memory space when class is loaded into memory.
	 - static method is shared by or common to every object of same class.
	 - The static method is called using class name rather than object name.

class Number
{
    public:
	static int getreverse(int n)
	{
		int rev=0;
		while(n!=0)
		{
			rev=(rev*10)+(n%10);
			n=n/10;
		}
		return rev;
	}
};
int main()
{
	int no;

	cout<<endl<<"Enter any number: ";
	cin>>no;

	int r=Number::getreverse(no);
	cout<<endl<<"Reverse of "<<no<<" is: "<<r;

	return 0;
}


///--------------------------------------------

	// another example

class Array
{
    public:
	static void copyarray(int x[],int y[])
	{
		for(int i=0;i<5;i++)
		{
			y[i]=x[i];
		}
	}
};
int main()
{
	int a[]={11,22,33,44,55};
	int b[5];

	cout<<endl<<"Array a: ";
	for(int i=0;i<5;i++)
	{
		cout<<setw(6)<<a[i];
	}

    	Array::copyarray(a,b);

	cout<<endl<<"Array b: ";
	for(int i=0;i<5;i++)
	{
		cout<<setw(6)<<b[i];
	}
	return 0;
}

///----------------------------------------------------------------------------------------------------

	// static data member: 

	When any member decl. as atatic
	 - It will gains the memory space from common memory area.
	 - it will be shared by every object of same class.
	 - It is by default initilized to zero.
	 - can be accessed by any method of same class.
	 - In C++, we need to define the static data member outside of class as
		<data_type> <class_nm>::<var_nm>;

		you are allowed to init static member as 

		<data_type> <class_nm>::<var_nm> = [<val>];

		     Memory allocated for all objects of Item class
		_________________________________________________________
		|Common memory area for all objects of Item class	|
		|							|
		|	void in(){.........}		tot		|
		|	void out(){.........}		 [ 0.0 ]	|
		|	void displaytot(){........} 			|
		|							|
		|_______________________________________________________|
		|Individual memory area of each object			|
		|							|
		|      a1	   a2	       a3	  a4		|
		|   [ ] icode	[ ] icode   [ ] icode	[ ] icode	|
		|   [ ] ipr 	[ ] ipr     [ ] ipr 	[ ] ipr 	|
		|							|
		|							|
		|_______________________________________________________|

                    a1        a2         a3 
		   [ ]       [  ]       [  ]
                   \  \      |  |      /  /
                    \  \     |  |     /  /
                     \  \    |  |    /  /
                      \  \   |  |   /  /
                       \  \  |  |  /  /
                        \  \ |  | /  /
                         [____0.0____]
                               tot
 
class Item
{
    private:
	int icode;
	float ipr;
	static float tot;
    public:
	void in()
	{
		cout<<"\n Enter the item code: ";
		cin>>icode;
		cout<<"\n Enter the item price: ";
		cin>>ipr;
		tot=tot+ipr;
	}
	void out()
	{
		cout<<endl<<"Item code: "<<icode<<"\t Price: "<<ipr;
	}
	void displaytot()
	{
		cout<<endl<<"Total Bill: "<<tot;
	}
};
float Item::tot;
int main()
{
	Item a1, a2, a3, a4;

	a1.in();
	a2.in();
	a3.in();
	a4.in();

	a1.out();
	a2.out();
	a3.out();
	a4.out();

	a1.displaytot();  // or a2.displaytot() or a3.displaytot() or a4.displaytot()

	return 0;
}

output: 

 Enter the item code: 11
 Enter the item price: 23.45

 Enter the item code: 12
 Enter the item price: 100

 Enter the item code: 13
 Enter the item price: 150

 Enter the item code: 14
 Enter the item price: 300

Item code: 11    Price: 23.45
Item code: 12    Price: 100
Item code: 13    Price: 150
Item code: 14    Price: 300
Total Bill: 573.45

//------------------------------------------------------------------------------------------------------

	/// Array of object having static members
 
	- The static method can have only access to other static member(static function or static variable)
	- static function can be called using class name.

class Item
{
    private:
	int icode;
	float ipr;
	static float tot;
    public:
	void in()
	{
		cout<<"\n Enter the item code: ";
		cin>>icode;
		cout<<"\n Enter the item price: ";
		cin>>ipr;
		tot=tot+ipr;
	}
	void out()
	{
		cout<<endl<<"Item code: "<<icode<<"\t Price: "<<ipr;
	}
	static void displaytot()
	{
		cout<<endl<<"Total Bill: "<<tot;
	}
};
float Item::tot=1000;
int main()
{

	Item::displaytot(); 

	Item a[5];
	int i;
	
	cout<<"\n Enter the details of five items: ";
	for(i=0;i<5;i++)
	{
		a[i].in();
	}

	cout<<"\n details of five items: \n";
	for(i=0;i<5;i++)
	{
		a[i].out();
	}
	Item::displaytot(); 

	return 0;
}

//---------------------------------------------------------------------------------------------------------

	// Friend Function: 

#include <iostream>
using namespace std;
class Person
{
   private: 
	char nm[50];
	int age;
   public: 
	void in()
	{
		cout<<endl<<"Enter the name of person: ";
		cin.getline(nm,50);

		cout<<endl<<"Enter the age: ";
		cin>>age;
	}	
	void display()
	{
		cout<<endl<<"Person Details - Name: "<<nm<<"\t Age: "<<age;
	}
	friend void showinfo(Person);
};
void showinfo(Person a)
{
	cout<<endl<<"Person Information - Name: "<<a.nm<<"\t Age: "<<a.age;
}
int main()
{
	Person ob;
	ob.in();
	ob.display();

	showinfo(ob);	
	return 0;
}

//--------------------------------------------------------------------------------------------------

	// Outside function as a friend of two or more classes

#include <iostream>
using namespace std;
class Student; // forward decl.
class Person
{
   private: 
	char nm[50];
	int age;
   public: 
	void in()
	{
		cout<<endl<<"Enter the name of person: ";
		cin.getline(nm,50);

		cout<<endl<<"Enter the age: ";
		cin>>age;
	}	
	void display()
	{
		cout<<endl<<"Person Details - Name: "<<nm<<"\t Age: "<<age;
	}
	friend void FindElder(Person a, Student b);
};
class Student
{
   private: 
	char nm[50];
	int age;
   public: 
	void in()
	{
		cout<<endl<<"Enter the name of student: ";
		cin.ignore();
		cin.getline(nm,50);

		cout<<endl<<"Enter the age: ";
		cin>>age;
	}	
	void display()
	{
		cout<<endl<<"Student Details - Name: "<<nm<<"\t Age: "<<age;
	}
	friend void FindElder(Person a,Student b);
};

void FindElder(Person a, Student b)
{
	if(a.age>b.age)
		cout<<endl<<"Elder Information - Name: "<<a.nm<<"\t Age: "<<a.age;
	else
		cout<<endl<<"Elder Information - Name: "<<b.nm<<"\t Age: "<<b.age;
}
int main()
{
	Person p;
	p.in();
	p.display();

	Student s;
	s.in();
	s.display();

	FindElder(p,s);	
	return 0;
}

//---------------------------------------------------------------------------------------------------------

	// Member Functions of one class- can be friend of another class

#include <iostream>
using namespace std;
class Student; // forward decl.
class Person
{
   private: 
	char nm[50];
	int age;
   public: 
	void in()
	{
		cout<<endl<<"Enter the name of person: ";
		cin.getline(nm,50);

		cout<<endl<<"Enter the age: ";
		cin>>age;
	}	
	void out(Student s);
};
	
class Student
{
   private: 
	char nm[50];
	int age;
   public: 
	void input()
	{
		cout<<endl<<"Enter the name of student: ";
		cin.ignore();
		cin.getline(nm,50);

		cout<<endl<<"Enter the age: ";
		cin>>age;
	}	
	void display()
	{
		cout<<endl<<"Student Details - Name: "<<nm<<"\t Age: "<<age;
	}
	friend void Person::out(Student);
};
void Person::out(Student s)
{
	cout<<endl<<"Person Details - Name: "<<nm<<"\t Age: "<<age;
	if(age>s.age)
	{
		cout<<endl<<"Person is Elder";
	}
	else
	{
		cout<<endl<<"Student is Elder";
	}
}
int main()
{
	Student s;
	s.input();
	s.display();

	Person p;
	p.in();
	p.out(s);

	return 0;
}

//-------------------------------------------------------------------------------------------------

	// All member functions of one class as a friend of another - (Friend class)

#include <iostream>
using namespace std;
class B;
class A
{
   private:
	int a;
	friend class B;
};
class B
{
    private:
	int b;
    public:
	void in(A& ob)
	{
		cout<<"Enter the val of a: ";
		cin>>ob.a;
		cout<<"Enter the val of b: ";
		cin>>b;
	}
	void out(A ob)
	{
		cout<<endl<<"a: "<<ob.a;
		cout<<endl<<"b: "<<b;
	}
};
int main()
{
	A ob1;
	B ob2;

	ob2.in(ob1);
	ob2.out(ob1);

	return 0;
}

//------------------------------------------------------------------------------------------------------

	// Swaping the private data using friend class

#include <iostream>
using namespace std;

class B;
class A
{
   private:
	int a;
   public:
	void in()
	{
		cout<<"Enter the val of a: ";
		cin>>a;
	}
	void out()
	{
		cout<<endl<<"a: "<<a;
	}
	friend void swap(A& x1, B& x2);
};
class B
{
    private:
	int b;
    public:
	void input()
	{
		cout<<"Enter the val of b: ";
		cin>>b;
	}
	void output()
	{
		cout<<endl<<"b: "<<b;
	}
	friend void swap(A& x1, B& x2);
};
void swap(A& x1, B& x2)
{
	int tmp=x1.a;
	x1.a=x2.b;
	x2.b=tmp;
	
}
int main()
{
	A ob1;
	B ob2;

	ob1.in();
	ob2.input();

	cout<<endl<<"Before Swap: ";
	ob1.out();
	ob2.output();

	swap(ob1,ob2);

	cout<<endl<<"After Swap: ";
	ob1.out();
	ob2.output();
	
	return 0;
}

//-------------------------------------------------------------------------------------------------

// WAP to add two complex Numbers using the friend function

#include <iostream>
using namespace std;

class Complex
{
    private:
	int real;
	float img;
    public:
	void getComplexNo()
	{
		cout<<endl<<"Enter real part: ";
		cin>>real;
		cout<<endl<<"Enter img part: ";
		cin>>img;
	}
	void showComplexNo()
	{
		cout<<real<<"+j"<<img;
	}
	friend Complex addComplexNos(Complex a,Complex b);
};
Complex addComplexNos(Complex a,Complex b)
{
	Complex tmp;
	tmp.real=b.real+a.real;
	tmp.img=b.img+a.img;

	return tmp;
}
int main()
{
	Complex c1,c2,c3;

	c1.getComplexNo();
	c2.getComplexNo();

	c3=addComplexNos(c1,c2);

	cout<<endl<<"C1: ";	c1.showComplexNo();
	cout<<endl<<"C2: ";	c2.showComplexNo();
	cout<<endl<<"C3: ";	c3.showComplexNo();

	return 0;
}

///----------------------------------------------------------------------------------

	// Local Classes: These classes are decl. within the scope of any function, menas
			  as they are local to that function, these casses are termes as local
			  classes. You can allowed to create the object of local class within
			  enclosing function only.


		e.g.
			void myfunc()
			{
				class A {..};		// A is a Local class
						
				A ob;	// allowed
				....
			}
			int main()
			{
				A tmp;	// not allowed
				.....
				myfunc();
				return 0;
			}

//--------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------

	Constructor and Destructor
	
		Constructor: These are sepcial public member function of class, having name same as that of
			     class in which it is decleared, dont have any return type, not even void and 
			     invoked automatically when object of class is created.

			There are different types of constructors, which are as listed below
				- Default Constructor
				- Parameterized Constructor
				- Dynamic Constructor
				- copy constructor


- Default Constructor: Constructor with no arguments				

#include <iostream>
using namespace std;

class Demo
{
    private:
	int x;
	float y;
	double z;
    public:
	Demo()	// Default constructor
	{
		cout<<endl<<"In Default constructor";
		x=1;
		y=2.3;
		z=56.341;
	}
	void in()
	{
		cout<<endl<<"Enter the values of x, y and z: ";
		cin>>x>>y>>z;
	}
	void out()
	{
		cout<<endl<<"x="<<x<<"\t y="<<y<<"\t z="<<z;
	}
};
int main()
{
	Demo ob1;
	ob1.out();

	ob1.in();
	ob1.out();

	return 0;
}

//-----------------------------------------------------------------------------------------------------------

	// defining the constructor outside of class

#include <iostream>
using namespace std;

class Demo
{
    private:
	int x;
	float y;
	double z;
    public:
	Demo();	// Default constructor decl
	void in()
	{
		cout<<endl<<"Enter the values of x, y and z: ";
		cin>>x>>y>>z;
	}
	void out()
	{
		cout<<endl<<"x="<<x<<"\t y="<<y<<"\t z="<<z;
	}
};
Demo::Demo()	// Default constructor def
{
	cout<<endl<<"In Default constructor";
	x=1;
	y=2.3;
	z=56.341;
}
int main()
{
	Demo ob1;
	ob1.out();

	ob1.in();
	ob1.out();

	return 0;
}

//----------------------------------------------------------------------------------------------------

	// - Parameterized Constructor: Constructor which collects an arguments.

#include <iostream>
using namespace std;
class Demo
{
    private:
	int x;
	float y;
	double z;
    public:
	Demo()	// Default constructor
	{
		cout<<endl<<"In Default constructor";
		x=1;
		y=2.3;
		z=56.341;
	}
	Demo(int t) // Parameterized constructor
	{
	    cout<<endl<<"In Parameterized constructor-1";
	    x=t;
	    y=t;
	    z=t;
	}
	Demo(int a1, float a2, double a3) // Parameterized constructor
	{
	    cout<<endl<<"In Parameterized constructor-2";
	    x=a1;
	    y=a2;
	    z=a3;
	}
	void out()
	{
		cout<<endl<<"x="<<x<<"\t y="<<y<<"\t z="<<z;
	}
};
int main()
{
	Demo ob1;
	ob1.out();

	int a=11, b=5.3, c=34.23;
	Demo ob2(a,b,c); // implicit call
	ob2.out();

	Demo ob3=Demo(a,b,c); // explicit call
	ob3.out();
	
	Demo ob4(10);
	ob4.out();

	return 0;
}

//----------------------------------------------------------------------------------------------

	// Dynamic Constructor: Used to allocated the memory for class member.

#include <iostream>
#include <iomanip>
using namespace std;

class Demo
{
    private:
	int *p;
	int ec;
    public:
	Demo() // dynamic constructor
	{
		p=new int[5];
		ec=5;
		cout<<endl<<"Enter 5 Nos: ";
		for(int i=0;i<5;i++)
		{
		    cin>>*(p+i);
		}
	}
	Demo(int cnt) // dynamic constructor
	{
		p=new int[cnt];
		ec=cnt;
		cout<<endl<<"Enter "<<cnt<<" Nos: ";
		for(int i=0;i<ec;i++)
		{
		    cin>>*(p+i);
		}
	}
	void out()
	{
		cout<<endl<<"Elements are: ";
		for(int i=0;i<ec;i++)
		{
			cout<<setw(5)<<*(p+i);
		}
	}
};

int main()
{
	Demo ob1;
	ob1.out();

	Demo ob2(7);
	ob2.out();
	
	return 0;
}
	
//---------------------------------------------------------------------------------------------------------

	//  copy constructor

#include <iostream>
#include <iomanip>
using namespace std;
class Demo
{
    private:
	int x;
	float y;
	double z;
    public:
	Demo()	// Default constructor
	{
		cout<<endl<<"In Default constructor";
		x=1;
		y=2.3;
		z=56.341;
	}
	Demo(int a1, float a2, double a3) // Parameterized constructor
	{
		cout<<endl<<"In Parameterized constructor";
	    x=a1;
	    y=a2;
	    z=a3;
	}
	Demo(Demo &t) // Copy constructor
	{
	    cout<<endl<<"In Copy constructor";
	    x=t.x;
	    y=t.y;
	    z=t.z;
	}
	void out()
	{
		cout<<endl<<"x="<<x<<"\t y="<<y<<"\t z="<<z;
	}
};
int main()
{
	Demo ob1;
	ob1.out();

	Demo ob2(11,2.3,12.45); 
	ob2.out();
	
	Demo ob4(ob2);
	ob4.out();

	return 0;
}

//-----------------------------------------------------------------------------------------------

	// Passing default arguments to constructor:

class Time
{
    private:
	int hours;
	int mins;
	int secs;
    public:
	Time()
	{
		hours=0;
		mins=0;
		secs=0;
	}
	Time(int a)
	{
		hours=a;
		mins=a;
		secs=a;
	}
	Time(int a1, int a2, int a3=10) // check carefully that it will not creating ambiguilty
	{
		hours=a1;
		mins=a2;
		secs=a3;
	}
	void showtime()
	{
		cout<<endl<<"Time is: "<<hours<<":"<<mins<<":"<<secs;
	}
}; 
int main()
{
	Time t1;
	t1.showtime();

	Time t2(5);
	t2.showtime();

	Time t3(2,30,50);
	t3.showtime();

	Time t4(2,30);
	t4.showtime();

	return 0;
}

//-------------------------------------------------------------------------------------------------------------

	// Constructor Overloading: It simply refers to defining multiple constructors in a same class,
				    but differ in the signature(prototype).

	e.g. It above example, we have decl. 3 different constructors as shown


class Time
{
    private:
	int hours;
	int mins;
	int secs;
    public:
	Time()
	{
		hours=0;
		mins=0;
		secs=0;
	}
	Time(int a)
	{
		hours=a;
		mins=a;
		secs=a;
	}
	Time(int a1, int a2, int a3=10) // check carefully that it will not creating ambiguilty
	{
		hours=a1;
		mins=a2;
		secs=a3;
	}	
	.......
}; 

//-----------------------------------------------------------------------------------------------------

	// Destructors: It is same as that of default constructor, but preceeded with ~(tidel) sign, and
			invoked automatically, when object moves out of scope.

			- note carefuly that, it will not collecting any argument.
			- It is actually used to release the resources hold by the object. means it will be
			  used to perform the last operation on the object like file closeing, just before
			  becoming inaccessible.

class Demo
{
    public:
	Demo()
	{
		cout<<endl<<"Object is Created";
	}
	~Demo()
	{
		cout<<endl<<"Object is Deleted";
	}
};
int main()
{
	demo ob1;
	return 0;
}

//---------------------------------------

#include <iostream>
#include <iomanip>
using namespace std;

class Demo
{
    private:
	int *p;
	int ec;
    public:
	Demo() // dynamic constructor
	{
		p=new int[5];
		ec=5;
		cout<<endl<<"Enter 5 Nos: ";
		for(int i=0;i<5;i++)
		{
		    cin>>*(p+i);
		}
	}
	void out()
	{
		cout<<endl<<"Elements are: ";
		for(int i=0;i<ec;i++)
		{
			cout<<setw(5)<<*(p+i);
		}
	}
	~Demo()
	{
	    delete p;
	}
};

int main()
{
    {
	Demo ob1;
    	ob1.out();
    }
	//......
	return 0;
}

//-------------------------------------------------------------------------------------------

	// count the number of objects

#include <iostream>
#include <iomanip>
using namespace std;
class Demo
{
    static int cnt;
    public:
	Demo()
	{
	    cnt++;
		cout<<endl<<"Object "<<cnt<<" is Created";
	}
	~Demo()
	{
		cout<<endl<<"Object "<<cnt<<" is Deleted";
		cnt--;
	}
};
int Demo::cnt;
int main()
{
	Demo ob1,ob2;
	{
	    Demo ob3,ob4;
	}
	cout<<endl<<"End of Program";
	return 0;
}

//------------------------------------------------------------------------------------------------

	// defining const member in class and its initilization using initilization list

#include <iostream>
#include <iomanip>
using namespace std;

class Sample
{
    private:
	const int x;
    public:
	Sample(): x(10)
	{
	}
	Sample(int a):x(a)
	{		
	}
	void show()
	{
		cout<<endl<<"x is "<<x;
	}
};
int main()
{
	Sample s1;
	s1.show();
	
	Sample s2(20);
	s2.show();

	return 0;
}


	- Note carefully that initilization list will work before the constructor body.

#include <iostream>
#include <iomanip>
using namespace std;

class Sample
{
    private:
	const int x;
    public:
	Sample(): x(10)
	{
	    cout<<endl<<"In Default Constructor x is "<<x;
	}
	Sample(int a):x(a)
	{
	    cout<<endl<<"In para Constructor x is "<<x;
	}
};
int main()
{
	Sample s1;
	
	Sample s2(20);

	return 0;
}

//---------------------------------------

	// You can use the initilization list to init. multiple members also

class Sample
{
    private:
	int x;
	float y;
	double z;
    public:
	Sample():x(10), y(4.5), z(5.45)
	{	
		cout<<endl<<"In Default Constructor";
	}
	Sample(int a):x(a), y(a), z(a)
	{
		cout<<endl<<"In Para-1 Constructor";	
	}
	Sample(int a, float b, double c):x(a), y(b), z(c)
	{
		cout<<endl<<"In para-2 Constructor";	
	}
	void display()
	{
		cout<<endl<<"x="<<x<<"\t y="<<y<<"\t z="<<z;
	}
};
int main()
{
	Sample s1;
	s1.display();
	
	Sample s2(100);
	s2.display();
	
	Sample s3(10,23.45,78.453);
	s3.display();

	return 0;
}

//-----------------------------------------------------------------------------------------

	// const object and const function

#include <iostream>
using namespace std ;

class Sample
{
    private:
	int x;
	float y;
    public:
	Sample()
	{
		x=10;
		y=12.34;
	}
	Sample(int a, float b)
	{
		x=a;
		y=b;
	}
	void modify()
	{
	    y=x=111;
	}
	void display() const    // constant function
	{
	    // x=11;    // will generate an error coz the object is constant
		cout<<endl<<"x="<<x<<"\t y="<<y;
	}
};
int main()
{
	const Sample s1; // const object
	s1.display();

	const Sample s2(56, 89.67); // const object
	s2.display();
	
	// s2.modify();     // will generate an error coz the object is constant

	return 0;
}

//------------------------------------------------------------------------------------------

	// Dynamic initilization of object

 // Using the constructor for the memory allocation and destructor for memory release

	**p                       0     1    2    3    4 
	 [ 400 ] ------------->  [600] [  ] [  ] [  ] [  ]
                               400 |    |    ......
				   |    V
				   |    [0][0][0]
				   V
				   [0][0][0][0][0]
				  600
*/

#include <iostream>
#include <iomanip>
using namespace std ;
class Student
{
    private:
	int **p;
	int *sub;
	int sc;
    public:
	Student(){}
	Student(int n)
	{	
		sc=n;
		int i,j;
		p=(int**)malloc(n*sizeof(int*));
		sub=(int*)malloc(n*sizeof(int));
		for(i=0;i<n;i++)
		{
			cout<<endl<<"Enter the subject count of "<<(i+1)<<" student:";
			cin>>*(sub+i);
			*(p+i)=(int*)malloc(*(sub+i)*sizeof(int));
			for(j=0;j<*(sub+i);j++)
			{
				*(*(p+i)+j)=0;
			}
		}
	}
	void inputdata()
	{		
		int i,j;
		cout<<endl<<"Enter the marks of "<<sc<<" students: ";
		for(i=0;i<sc;i++)
		{
			cout<<endl<<"Enter the marks in "<<*(sub+i)<<" subjects: ";
			for(j=0;j<*(sub+i);j++)
			{
				cin>>*(*(p+i)+j);
			}
		}
		
	}
	void outputdata()
	{		
		int i,j;
		cout<<endl<<"The marks of "<<sc<<" students: \n";
		for(i=0;i<sc;i++)
		{
			cout<<endl<<"Student "<<i+1<<": ";
			for(j=0;j<*(sub+i);j++)
			{
				cout<<setw(8)<<*(*(p+i)+j);
			}
		}		
	}
	~Student()
	{
		int i,j;
		for(i=0;i<sc;i++)
		{
			free(*(p+i));	
			cout<<endl<<"Memory released - student "<<(i+1);
		}
		free(p);
	}
};
int main()
{
	cout<<endl<<"Enter the student count: ";
	int cnt;
	cin>>cnt;
	Student s1(cnt);

	s1.inputdata();
	s1.outputdata();

	return 0;
}

//-----------------------------------

#include <iostream>
#include <iomanip>
using namespace std ;
class Student
{
    private:
	int **p;
	int *sub;
	int sc;
    public:
	Student(){}
	Student(int n)
	{	
		sc=n;
		int i,j;
		// p=(int**)malloc(n*sizeof(int*));
		p=new int*[n];
		//sub=(int*)malloc(n*sizeof(int));
		sub=new int[n];
		for(i=0;i<n;i++)
		{
			cout<<endl<<"Enter the subject count of "<<(i+1)<<" student:";
			cin>>*(sub+i);
			// *(p+i)=(int*)malloc(*(sub+i)*sizeof(int));
			*(p+i)=new int[*(sub+i)];
			for(j=0;j<*(sub+i);j++)
			{
				*(*(p+i)+j)=0;
			}
		}
	}
	void inputdata()
	{		
		int i,j;
		cout<<endl<<"Enter the marks of "<<sc<<" students: ";
		for(i=0;i<sc;i++)
		{
			cout<<endl<<"Enter the marks in "<<*(sub+i)<<" subjects: ";
			for(j=0;j<*(sub+i);j++)
			{
				cin>>*(*(p+i)+j);
			}
		}
		
	}
	void outputdata()
	{		
		int i,j;
		cout<<endl<<"The marks of "<<sc<<" students: \n";
		for(i=0;i<sc;i++)
		{
			cout<<endl<<"Student "<<i+1<<": ";
			for(j=0;j<*(sub+i);j++)
			{
				cout<<setw(8)<<*(*(p+i)+j);
			}
		}		
	}
	~Student()
	{
		int i,j;
		for(i=0;i<sc;i++)
		{
			//free(*(p+i));	
			delete *(p+i);
			cout<<endl<<"Memory released - student "<<(i+1);
		}
		//free(p);
		delete p;
	}
};
int main()
{
	cout<<endl<<"Enter the student count: ";
	int cnt;
	cin>>cnt;
	Student s1(cnt);

	s1.inputdata();
	s1.outputdata();

	return 0;
}

//---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------

		// Operator Overloading and Type Conversion

	In this topic, we have to see another special function which will be called when
	we operate an operator on the object, In that case type definition of object must
	contain that special function.

	That function called special coz its name starts with operator keyword and ends with
	the operator symbol to which you want to assign an additional meaning.

	i.e.
		<returning_type> operator<op>(<argument_list>)
		{
			-------------------;
			-------------------;
			-------------------;
			-------------------;
		}

 lets see simple example,

class Test
{
    public:
	void operator-()
	{
		cout<<endl<<"In operator<op> function";
	}
};

int main()
{
	int x=10,y;
	y=-x;

	Test t;
	-t;

	return 0;
}

//--------------------------------------------------------------------------------------------

	// Performing unary operation

	// overloading - operator to get opposite value of an object

class Number
{
    private:
	int x;
	float y;
    public:
	Number()
	{
		x=1;
		y=1.1;
	}
	Number(int a, float b)
	{
		x=a;
		y=b;
	}
	void in()
	{
		cout<<endl<<"Enter the values of x and y: ";
		cin>>x>>y;
	}
	void out()
	{
		cout<<"x="<<x<<"\t y="<<y;
	}
	void operator-()
	{
		cout<<endl<<"In operator-() function";
		x=-x;
		y=-y;
	}
};

int main()
{
	Number n1(2,-4.3);

	cout<<endl<<"N1: ";	n1.out();
	-n1;	// indirectly it called as n1.operator-()
	cout<<endl<<"N1: ";	n1.out();

	return 0;
}

//--------------------------------------------------------------

	// overloading - operator to get an object multi by 10

#include <iostream>
using namespace std;
class Number
{
    private:
	int x;
	float y;
    public:
	Number()
	{
		x=1;
		y=1.1;
	}
	Number(int a, float b)
	{
		x=a;
		y=b;
	}
	void in()
	{
		cout<<endl<<"Enter the values of x and y: ";
		cin>>x>>y;
	}
	void out()
	{
		cout<<"x="<<x<<"\t y="<<y;
	}
	void operator-();
};
void Number::operator-()
{
	cout<<endl<<"In operator-() function";
	x=x*10;
	y=y*10;
}
int main()
{
	Number n1(2,-4.3);

	cout<<endl<<"N1: ";	n1.out();
	-n1;	// indirectly it called as n1.operator-()
	cout<<endl<<"N1: ";	n1.out();

	return 0;
}

//-----------------------------------------------------------------------------------------

	// Overloading unary operator as a friend

#include <iostream>
using namespace std;
class Number
{
    private:
	int x;
	float y;
    public:
	Number()
	{
		x=1;
		y=1.1;
	}
	Number(int a, float b)
	{
		x=a;
		y=b;
	}
	void in()
	{
		cout<<endl<<"Enter the values of x and y: ";
		cin>>x>>y;
	}
	void out()
	{
		cout<<"x="<<x<<"\t y="<<y;
	}
	friend void operator-(Number&);
};
void operator-(Number& t)
{
	cout<<endl<<"In operator-() function";
	t.x=-t.x;
	t.y=-t.y;
}
int main()
{
	Number n1(2,-4.3);

	cout<<endl<<"N1: ";	n1.out();
	-n1;	// indirectly it called as operator-(n1)
	cout<<endl<<"N1: ";	n1.out();

	return 0;
}
//-----------------------------------------------------------------------------------------

	// Overloading Binary operator

	// Overloading Binary operator to join two strings

#include <iostream>
#include <string.h>
using namespace std;
class MyString
{
    private:
	char *s;
    public:
	int length;
	MyString()
	{
		length=0;
		s=NULL;
	}
	MyString(char *t)
	{
		length=strlen(t);
		s=new char[length+1];
		strcpy(s,t);
	}
	char* getString()
	{
		return s;
	}
	MyString operator+(MyString t)
	{
	    MyString tmp;
	    tmp.length=strlen(s)+strlen(t.s);
	    tmp.s=new char[length+1];
	    strcpy(tmp.s,s);
	    strcat(tmp.s,t.s);
	    return tmp;
	}
};
int main()
{
	MyString str1("good day");	
	MyString str2("how are you");

	cout<<endl<<"String 1: "<<str1.getString();
	cout<<endl<<"String 2: "<<str2.getString();

    	MyString str3;
	str3=str1+str2;     // indirectly called as str1.operator+(str2)
	cout<<endl<<"String 3: "<<str3.getString();
	
	cout<<endl<<"Length of str1: "<< str1.length;
	cout<<endl<<"Length of str2: "<< str2.length;
	cout<<endl<<"Length of str3: "<< str3.length;

	return 0;
}

//--------------------------------------------------------------------------------------

	// Binary operator overloading using friend

#include <iostream>
#include <string.h>
using namespace std;
class MyString
{
    private:
	char *s;
    public:
	int length;
	MyString()
	{
		length=0;
		s=NULL;
	}
	MyString(char *t)
	{
		length=strlen(t);
		s=new char[length+1];
		strcpy(s,t);
	}
	char* getString()
	{
		return s;
	}
	friend MyString operator+(MyString t1,MyString t2);
};
MyString operator+(MyString t1,MyString t2)
{
    MyString tmp;
    tmp.length=strlen(t1.s)+strlen(t2.s);
    tmp.s=new char[tmp.length+1];
    strcpy(tmp.s,t1.s);
    strcat(tmp.s,t2.s);
    return tmp;
}
int main()
{
	MyString str1("good day");	
	MyString str2("how are you");

	cout<<endl<<"String 1: "<<str1.getString();
	cout<<endl<<"String 2: "<<str2.getString();

    	MyString str3;
	str3=str1+str2;     // indirectly called as operator+(str1, str2)
	cout<<endl<<"String 3: "<<str3.getString();
	
	cout<<endl<<"Length of str1: "<< str1.length;
	cout<<endl<<"Length of str2: "<< str2.length;
	cout<<endl<<"Length of str3: "<< str3.length;

	return 0;
}

//------------------------------------------------------------------

// Now lets see when Binary operator overloading using friend is prefered.

	lets add two complex numbers using overloading + operator

#include <iostream>
using namespace std;

class Complex
{
    private:
	int real;
	float img;
    public:
	void getComplexNo()
	{
		cout<<endl<<"Enter real part: ";
		cin>>real;
		cout<<endl<<"Enter img part: ";
		cin>>img;
	}
	void showComplexNo()
	{
		cout<<real<<"+j"<<img;
	}
	Complex operator+(Complex t)
	{
		Complex tmp;
		tmp.real=real+t.real;
		tmp.img=img+t.img;
		return tmp;
	}
};

int main()
{
	Complex c1,c2,c3;

	c1.getComplexNo();
	c2.getComplexNo();

	c3=c1+c2;	// Internally called as c1.operator+(c2)

	cout<<endl<<"C1: ";	c1.showComplexNo();
	cout<<endl<<"C2: ";	c2.showComplexNo();
	cout<<endl<<"C3: ";	c3.showComplexNo();

	return 0;
}

we can use the operator+() function as a external function, and in that case
we need to use operator+() function as a friend.

#include <iostream>
using namespace std;

class Complex
{
    private:
	int real;
	float img;
    public:
	void getComplexNo()
	{
		cout<<endl<<"Enter real part: ";
		cin>>real;
		cout<<endl<<"Enter img part: ";
		cin>>img;
	}
	void showComplexNo()
	{
		cout<<real<<"+j"<<img;
	}
	friend Complex operator+(Complex t1,Complex t2);
};
Complex operator+(Complex t1, Complex t2)
{
	Complex tmp;
	tmp.real=t1.real+t2.real;
	tmp.img=t1.img+t2.img;
	return tmp;
}
int main()
{
	Complex c1,c2,c3;

	c1.getComplexNo();
	c2.getComplexNo();

	c3=c1+c2;	// Internally called as operator+(c1,c2)

	cout<<endl<<"C1: ";	c1.showComplexNo();
	cout<<endl<<"C2: ";	c2.showComplexNo();
	cout<<endl<<"C3: ";	c3.showComplexNo();

	return 0;
}

//-----------------------------------------

	// But what should be the case when we use it as 
	// c3=10+c2; and operator<> function is member function.

In this case left hand side member(object) is used to call operator<> function,
and right hand side member passed as an argument.

	i.e.  
		c3=10.operator+(c2);  // (internal call)

// which in incorrect or not possible coz 10 is not object.

 In this case, we must define it as a friend so that both operands are
 passed as arguments.

	i.e. c3=operator+(10,c2); // (internal call)

#include <iostream>
using namespace std;

class Complex
{
    private:
	int real;
	float img;
    public:
	void getComplexNo()
	{
		cout<<endl<<"Enter real part: ";
		cin>>real;
		cout<<endl<<"Enter img part: ";
		cin>>img;
	}
	void showComplexNo()
	{
		cout<<real<<"+j"<<img;
	}
	friend Complex operator+(int, Complex t2);
};
Complex operator+(int n, Complex t2)
{
	Complex tmp;
	tmp.real=n+t2.real;
	tmp.img=n+t2.img;
	return tmp;
}
int main()
{
	Complex c1,c2,c3;

	c1.getComplexNo();
	c2.getComplexNo();

	c3=10+c2;	// Internally called as operator+(c1,c2)

	cout<<endl<<"C1: ";	c1.showComplexNo();
	cout<<endl<<"C2: ";	c2.showComplexNo();
	cout<<endl<<"C3: ";	c3.showComplexNo();

	return 0;
}

//---------------------------------------------------------------------------

	// Practical work:

		// Add two time object using * operator overload in both ways
		// (operator<>() as member function and as a friend function)

//-----------------------------------------------------------------------------------

// Overloading >> and << operators
    
class Demo
{
  public:
  friend void operator>>(istream& is, Demo ob);  
  friend void operator<<(ostream& os, Demo ob);  
};
void operator>>(istream& is, Demo ob)
{
    cout<<endl<<"Data Input";
}
void operator<<(ostream& os, Demo ob)
{
    cout<<endl<<"Data Display";
}
int main()
{
    Demo d;
    
    cin>>d;
    cout<<d;
    
    return 0;
}

//-------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

class Array 
{
  private:
    int* data;
    int size;

  public:
    Array(int size) : size(size) 
    {
        data = new int[size];
    }

    ~Array() 
    {
        delete[] data;
    }
    friend ostream& operator<<(ostream& os,  Array& arr);
    friend istream& operator>>(istream& is, Array& arr) 
};
    // Overloading << operator for displaying array
ostream& operator<<(ostream& os,  Array& arr) 
{
    for (int i = 0; i < arr.size; ++i) 
    {
        os << arr.data[i] << " ";
    }
    return os;
}
    // Overloading >> operator for inputting array
istream& operator>>(istream& is, Array& arr) 
{
    for (int i = 0; i < arr.size; ++i) 
    {
        is >> arr.data[i];
    }
    return is;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    Array arr(size);

    cout << "Enter " << size << " elements for the array:\n";
    cin >> arr; // operator>>()

    cout << "Array elements are: " << arr << std::endl; // operator<<()

    return 0;
}

//------------------------------------------------------------------------------------

	// Type conversion in C++:


	int x=10;
	double y=x; // here int converted to double.

	Then we have to now the type conversion happens in classes.

	- base type to class type (defacto conversion) - constructor
	- class type to base type (conversion function) - member function/ operrator overload
	- class type to another class type (source to destination conversion)
           - Constructor/operrator overload

#include <iostream>
using namespace std;
class Rect;
class Square
{
    private: 
	int side;
    public:
	Square()
	{
		side=0;
	}
	Square(int t)
	{
		side=t;
	}
	int area()
	{
		return (side*side);
	}
	friend class Rect;
};
class Rect
{
    private:
	int l;
	int b;
    public:
	Rect()
	{
		l=b=0;
	}
	Rect(int a1, int a2)
	{
		l=a1;
		b=a2;
	}
	Rect(Square t)
	{
		l=b=t.side;
	}
	int area()
	{
		return (l*b);
	}
};
int main()
{
	int n=5;
	Square s1(n); // base type converted into class type
	int a=s1.area(); // class type converted into base type
	cout<<endl<<"Area of Square: "<<a;

	Rect r1(s1); // class type to another class type
	a=r1.area();
	cout<<endl<<"Area of Rect: "<<a;

	return 0;
}

//-----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------

	// Relationship between Classes - Inheritance and Assoiciation

 Suppose we dec. multiple classes

i.e.

	class A				class B
	{				{
		------------;			--------------;
		------------;			--------------;
		------------;			--------------;
		------------;			--------------;
	};				};

	These are individual or independent classes. Now we have see, how the relationship
	is formed between two or more classes.

	Why to form the relationship between two or more classes:
		- Code reusibility.
		- Cost cutting
		- to avoid code redundancy
	
	There are two different ways of forming the relationship between classes
	
	1. Inheritance(IS-A Relationship): Tight coupling (Blood Relation)
	2. Association(HAS-A Relationship): Loose coupling


	Lets see, Inheritace first,

	class A			// parent / base / super
	{
		....;
	};
	class B:public A	// child / derived / sub
	{
		.....;
	};

	In this case class B having blood relationship with class A, so it will inherit some
	properties from class A. Means when we create the object oc class B, we will gain the
	memory space for both classes.

	It is known as IS-A relationship, lets see the example

		  class Person					class Animal
			|						|
		---------------------				--------------------
		|	     	    |				|	|	   |
	   class Student	class Employee             class Cow  class Dog  class Human


	   Student  IS-A Person					Cow   IS-A Animal
	   Employee IS-A Person					Dog   IS-A Animal
								Human IS-A Animal


	Now, lets discuss Association,

	class Engine
	{
	};
	class MusicPlayer
	{
	};
	class Car
	{
		Engine e;
		MusicPlayer mp;
	};

	Car HAS-A Engine
	Car HAS-A MusicPlayer

	This Assiciation is divided in to two sub types

		a. Aggregation
		b. Composition

	class Teacher
	{
	};
	class Trade
	{
	};

	class College
	{
		Teacher t1[50];
		Trade t2[6];
	};	

	College 	- Container Object
	Teacher, Trade  - Content Object

	- If Content object having exsistance evenif Container Object not present,
	  then such relationship called as Aggregation. where both classes have
	  weak bond between each other.

	- If Exsistence of Container Object and Content Object strictly dependents
	  on each other i.e. Exsistence of any one is useless then it is known as a
	  composition. Here both classes forms strong bond between each other.

	lets see one another example

		        Car
			 |
		--------------------
		|		   |
	     Engine		MusicPlayer

	Car-Engine 	- forms strong bond - Composition
	car-MusicPlayer	- forms weak Bond   - Aggregation

	Composition is also known as PART-OF Relationship.


	______________________________________________________
	|						      |
	|	Assiciation 				      |
	|    ____________________________________________     |
	|    |						|     |
	|    |  Aggregation			        |     |
	|    |    _________________________________     |     |
	|    |    |                               |     |     |
	|    |    | Composition			  |     |     |
	|    |    |_______________________________|     |     |
	|    |__________________________________________|     |
	|_____________________________________________________|     


 //-----------------------------------------------------------------

	Now, Lets start the INHERITANCE in Detail..!!
	
	It is act of defining the new class using the pre-defined classes.
        It will provide the next level of reusability

    consider the example, in normal case,

    class employee              class student           class Teacher           class Driver
    {                           {                       {                       {
        char name[50];              char name[50];         char name[50];           char name[50];
        int age;                    int age;                int age;                int age;
        -----------;                -----------;            -----------;            -----------;
        -----------;                -----------;            -----------;            -----------;
        -----------;                -----------;            -----------;            -----------;
        -----------;                -----------;            -----------;            -----------;
    };                          };                      };                      };

  some elements are there in each class, and every class having code related to IO of those
    member, which is code repetition and can be avoided using the class inheritance as


    /// syntax of inheritance

    class <base/super/parent_class>
    {
        ........;
    };
    class <derived/sub/child_class> : <visibility_Modifier> <base_class_nm>
    {
        --------;
        --------;
    };

 e.g.

        class person
        {
            char name[50];
            int age;
            --------------;
            --------------;
            --------------;
        };


class employee:public person    class student:public person     class Teacher:public person        class Driver:public person
{                               {                               {                                  {
    -----------;                      -----------;                   -----------;                        -----------;
    -----------;                      -----------;                   -----------;                        -----------;
    -----------;                      -----------;                   -----------;                        -----------;
};                              };                              };                                };

///--------------------------------------------------------------------------------------------

        /// Types of Inheritance


            single          Multi-level          hierarchical        Multiple         Hybrid
          Inheritance       Inheritance           Inheritance       Inheritance     Inheritance

             [   ] A            [     ]  A             [ ] A           A       B       [ ]A                  A
               |                   |                    |              [ ]     [ ]      |                   [ ]
               |                [     ]  B        --------------        |_______|      [ ] B                 |
               V                   |              |            |             |          |         D     -------------
             [   ]  B           [     ]  C       [ ]B         [ ]c          [ ]        [ ] C     [ ]    |           |
                                                  |            |             C          |         |    [ ] B       [ ] C
                                              ---------      ---------                 [ ] -------|     |___________|
                                              |        |     |   |    |                 Z                     |
                                             [ ]      [ ]   [ ] [ ]  [ ]                                     [ ]
                                              D        E     F   G    H                                       D

    - Single Inheritance:   One to one relationship, two layers
    - Multi-level Inheritance: one to one relationship, more than two layers
    - Hierarchical Inheritance: One to many relationship
    - Multiple Inheritance: many to one relationship
    - Hybrid Inheritance: combinations of any two or more inheritance

//-------------------------------------------------------------------------

  - Single Inheritance:  Public Visibility

	Note that private members are not inheritable.

class A
{
    private:
	double x;
    public:
	void in()
	{
		cout<<endl<<"Enter the value of x: ";
		cin>>x;
	}
	void out()
	{
		cout<<endl<<"x= "<<x;
	}
};
class B
{
    private:
	double y;
    public:
	void set()
	{	
		in();
		cout<<endl<<"Enter the value of y: ";
		cin>>y;
	}
	void show()
	{
		out();
		cout<<endl<<"y= "<<y;
	}
};
int main()
{
	A ob1;
	ob1.in();
	ob1.out();

	B ob2;
	ob2.set();
	ob2.show();

	return 0;
}

//---------------------------------------------------------------------------------

	Single Inheritance:  public Visibility - calling inherited functions in a nested manner

class A
{
    private:
	double x;
    public:
	void in()
	{
		cout<<endl<<"Enter the value of x: ";
		cin>>x;
	}
	void out()
	{
		cout<<endl<<"x= "<<x;
	}
};
class B:public A
{
    private:
	double y;
    public:
	void set()
	{	
		in();
		cout<<endl<<"Enter the value of y: ";
		cin>>y;
	}
	void show()
	{
		out();
		cout<<endl<<"y= "<<y;
	}
};
int main()
{
	B ob2;
	ob2.set();
	ob2.show();

	return 0;
}

//----------------------------------------------------------------------------------------------------------

	Single Inheritance:  public Visibility - calling inherited functions directly using child class object

#include <iostream>
using namespace std;

class A
{
    private:
	double x;
    public:
	void in()
	{
		cout<<endl<<"Enter the value of x: ";
		cin>>x;
	}
	void out()
	{
		cout<<endl<<"x= "<<x;
	}
};
class B:public A
{
    private:
	double y;
    public:
	void set()
	{	
		cout<<endl<<"Enter the value of y: ";
		cin>>y;
	}
	void show()
	{
		cout<<endl<<"y= "<<y;
	}
};
int main()
{

	B ob2;
	ob2.in();
	ob2.set();
	
	ob2.out();
	ob2.show();

	return 0;
}

//------------------------------------------------------------------------------------------
	
	- Single Inheritance: Private

#include <iostream>
using namespace std;

class A
{
    private:
	double x;
    public:
	void in()
	{
		cout<<endl<<"Enter the value of x: ";
		cin>>x;
	}
	void out()
	{
		cout<<endl<<"x= "<<x;
	}
};
class B:private A
{
    private:
	double y;
    public:
	void set()
	{	
	    	in();
	    	cout<<endl<<"Enter the value of y: ";
	    	cin>>y;
	}
	void show()
	{
	    	out();
		cout<<endl<<"y= "<<y;
	}
};
int main()
{
	B ob2;
	 // ob2.in();   - will generate an error message coz inhertency in private
	ob2.set();
	
	// ob2.out();   - will generate an error message coz inhertency in private
	ob2.show();

	return 0;
}

//-----------------------------------------------------------------------------------------------------------

	// Another Example

	 [ ]	person
	  |
	  |
	 [ ]    student

class Person
{
	char nm[50];
	int age;
    public:
	void indata()
	{
		cout<<endl<<"enter the person name: ";
		cin.getline(nm,50);
		cout<<endl<<"enter the age: ";
		cin>>age;
	}
	void outdata()
	{
		cout<<endl<<"Name: "<<nm<<"\t Age: "<<age;
	}
};
class Student:private Person
{
	float sper;
	float hper;
    public:
	void input()
	{
		indata();
		cout<<endl<<"Enter the SSC Percentage: ";
		cin>>sper;
		cout<<endl<<"Enter the HSC Percentage: ";
		cin>>hper;
	}
	void output()
	{
		outdata();
		cout<<endl<<"Percentage: HSC: "<<hper<<"\t SSC: "<<sper;
	}
};
int main()
{
	Student sob;
	
	sob.input();
	sob.output();

	return 0;
}

//-----------------------------------------------------------------------------------------------------------------------

	// Using method overloading in inheritancy


 	 [ ]	person
	  |
	  |
	 [ ]    student

#include <iostream>
#include <string.h>
using namespace std;
class Person
{
	char nm[50];
	int age;
    public:
	void indata()
	{
		cout<<endl<<"enter the person name: ";
		cin.getline(nm,50);
		cout<<endl<<"enter the age: ";
		cin>>age;
	}
	void indata(char a1[], int a2)
	{
		strcpy(nm,a1);
		age=a2;
	}
	void outdata()
	{
		cout<<endl<<"Name: "<<nm<<"\t Age: "<<age;
	}
};
class Student:private Person
{
	float sper;
	float hper;
    public:
	void input()
	{
		indata();
		cout<<endl<<"Enter the SSC Percentage: ";
		cin>>sper;
		cout<<endl<<"Enter the HSC Percentage: ";
		cin>>hper;
	}
	void input(char s[], int a, float p1, float p2)
	{
		indata(s,a);
		sper=p1;
		hper=p2;		
	}
	void output()
	{
		outdata();
		cout<<endl<<"Percentage: HSC: "<<hper<<"\t SSC: "<<sper;
	}
};
int main()
{
	Student sob1;
	sob1.input();
	sob1.output();

	Student sob2;
	sob2.input("Kiran", 23, 78.45, 90.21);
	sob2.output();

	return 0;
}

//----------------------------------------------------------------------------------------------------------

	// Using constructors in inheritency

	Note: when base and child, both constaints constructors, the base class constructors are executed first
	      and then the chils class constructors are executed.

	      from child class when you want to execute parameterized constructor of base, than you 
	      need special call (:base(<argu>))

#include <iostream>
#include <string.h>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<endl<<"In Default Constructor A";
    }
};
class B:public A
{
    public:
    B()
    {
        cout<<endl<<"In Default Constructor B";
    }
};
int main()
{
    B ob1;
    return 0;
}
//---------------------------------------------------------------------------------
#include <iostream>
#include <string.h>
using namespace std;
class A
{
    int x;
    public:
    A()
    {
        cout<<endl<<"In Default Constructor A";
    }
    A(int a1)
    {
        x=a1;
        cout<<endl<<"In para Constructor A";
    }
};
class B:public A
{
    int y;
    public:
    B()
    {
        cout<<endl<<"In Default Constructor B";
    }
    B(int a1, int a2):A(a1)
    {
        y=a2;
        cout<<endl<<"In para Constructor B";
    }
};
int main()
{
    B ob1;
    cout<<endl<<"-------------------------------------------"<<endl;
    B ob2(10,20);
    return 0;
}

//-----------------------------------------------------------------------------------------------------------------

	// Another example

#include <iostream>
#include <string.h>
using namespace std;
class Person
{
	char nm[50];
	int age;
   	public:
    	Person()
   	{
        	strcpy(nm,"NA");
        	age=0;
    	}
    	Person(char a[], int b)
    	{
        	strcpy(nm,a);
        	age=b;
    	}
	void indata()
	{
		cout<<endl<<"enter the person name: ";
		cin.getline(nm,50);
		cout<<endl<<"enter the age: ";
		cin>>age;
	}
	void indata(char a1[], int a2)
	{
		strcpy(nm,a1);
		age=a2;
	}
	void outdata()
	{
		cout<<endl<<"Name: "<<nm<<"\t Age: "<<age;
	}
};
class Student:private Person
{
	float sper;
	float hper;
    public:
    	Student()
    	{
       	 	sper=0.0;
        	hper=0.0;
    	}
    	Student(char a1[], int a2, float a3, float a4):Person(a1, a2)
    	{
        	sper=a3;
        	hper=a4;
    	}
	void input()
	{
		indata();
		cout<<endl<<"Enter the SSC Percentage: ";
		cin>>sper;
		cout<<endl<<"Enter the HSC Percentage: ";
		cin>>hper;
	}
	void input(char s[], int a, float p1, float p2)
	{
		indata(s,a);
		sper=p1;
		hper=p2;		
	}
	void output()
	{
		outdata();
		cout<<endl<<"Percentage: HSC: "<<hper<<"\t SSC: "<<sper;
	}
};
int main()
{
	Student sob1;
	sob1.input();
	sob1.output();

	Student sob2;
	sob2.input("Kiran", 23, 78.45, 90.21);
	sob2.output();
	
	Student sob3("Mithun", 31, 89.67, 99.12);
	sob3.output();

	return 0;
}

//--------------------------------------------------------------------------------------------------------------------------

	// Method Overriding

class A
{
	int x;
    public:
	A()
	{
		x=10;
	}
	void display()
	{
		cout<<endl<<"x="<<x;
	}
};
class B:public A
{
	int y;
    public:
	B()
	{
		y=20;
	}
	void display()
	{
		cout<<endl<<"y="<<y;
	}
};
int main()
{
	B ob;
	ob.display();
	return 0;
}

Here  we will gat y=20 in output.

means even if there are two copies of display() function(1 inherited and 1 its own) in B class,
only native(owned) copy will be executed, so we can say that inherited copy(base class copy) of 
display() is overriden by the native copy(child class copy)

so overriding refers to redefining base class function in the child class.

Then how to access the overriden function (Base class copy of function)

	there are two different ways

#include <iostream>
#include <string.h>
using namespace std;
class A
{
	int x;
    public:
	A()
	{
		x=10;
	}
	void display()
	{
		cout<<endl<<"x="<<x;
	}
};
class B:public A
{
	int y;
    public:
	B()
	{
		y=20;
	}
	void display()
	{
	    // display(); // will attend the recursion so not useful
	    // A::display(); // option 1
		cout<<endl<<"y="<<y;
	}
};
int main()
{
	B ob;
	ob.display();
	ob.A::display(); // option 2
	return 0;
}

//---------------------------------------------------------------------------------------------------

	// Access Overriden data member

#include <iostream>
using namespace std;
class Demo
{
    public:
	int a;
	void show()
	{
		cout<<endl<<"Demo a: "<<a;
	}
};
class Test:public Demo
{
    private:
	int a;
    public:
	Test()
	{
		a=10;
		Demo::a=100;  // overriden data member access
	}
	void show()
	{
		Demo::show();   // overriden member function access
		cout<<endl<<"Test a: "<<a;
	}
};
int main()
{
	Test ob;
	ob.show();
	return 0;
}

//-----------------------------------------------------------------------------------------------------

	Using "protected": It is visibility modifier/Accessibility specifier, which is used to inherite
			   base class member without loosing its data hiding.

			   We can say that it is "Inheritable Private"

					 Inheritance visibility

	   Base class		private		protected	public	

	private Memebers	NI		NI		NI

	protected Memebers	private		protected	protected

	public Memebers		private		protedted	public

	
#include <iostream>
using namespace std;
class A
{
    private:
	int x;
    protected:
	void input()
	{
		cout<<endl<<"Enter the val of x: ";
		cin>>x;
	}
    public:
	void output()
	{
		cout<<endl<<"x="<<x;
	}	
};
class B: public A
{ 
    private:
	int y;
    public:
	void in()
	{
	   	input();
		cout<<endl<<"Enter the val of y: ";
		cin>>y;
	}
	void out()
	{
		cout<<endl<<"y="<<y;
	}
};
int main()
{
	B ob;
	
	// ob.input(); No access coz it is protected in base so it remain protected in public inheritancy also.
	ob.in();

	ob.output();
	ob.out();
	
	return 0;
}

//----------------------------------------------------------------------------------------------------------------

	// Multilevel Inheritance


	[ ] Person
	 |
	 |
	[ ] Student
	 |
	 |
	[ ] Result

#include <iostream>
using namespace std;

class Person
{
   private:
	int uid;
	char nm[50];
	int age;
   public:
	void in()
	{
		cout<<endl<<"Enter the name: ";
		cin.getline(nm,50);
		
		cout<<endl<<"Enter the uid: ";
		cin>>uid;
		
		cout<<endl<<"Enter the age: ";
		cin>>age;		
	}
	void out()
	{
		cout<<endl<<"Name: "<<nm<<"\t Age: "<<age<<"\t UID: "<<uid;
	}
	
};
class Student:public Person
{
    private:
	int phy;
	int chem;
	int maths;
    protected:
	int getPhy() {return phy;}
	int getChem() {return chem;}
	int getMaths() {return maths;}
    public:
	void input()
	{
		in();
		cout<<endl<<"Enter the marks in physics: ";
		cin>>phy;
		cout<<endl<<"Enter the marks in chem: ";
		cin>>chem;
		cout<<endl<<"Enter the marks in maths: ";
		cin>>maths;
	}
	void output()
	{
		out();
		cout<<endl<<"Marks: PHY: "<<phy<<"\t CHEM: "<<chem<<"\t MATHS: "<<maths;
	}
};
class Result:protected Student
{
    private:
	char passflag;
    public:
	void setData()
	{
		input();
		if(getPhy()>=40 && getChem()>=40 && getMaths()>=40 )
		{
			passflag='y';
		}
		else
		{
			passflag='n';
		}
	}
	void showResult()
	{
		output();
		if(passflag=='y')
		{
			cout<<endl<<"Student Result: PASS";
		}
		else
		{
			cout<<endl<<"Student Result: FAIL";
		}
	}
};
int main()
{
	Result rob;

	rob.setData();
	rob.showResult();

	return 0;
}



//----------------------------------------------------------------------------------------------------------------

	// Hierarchical Inheritance

			
				Person
				  |
		---------------------------------
		|		|		|
              Student	      Employee	      Driver
		|		|		|
	----------------    --------------      ----------
 	|	|      |    |	  |	 |	|	 |	
      Arts   Engg    Medi  HR    GM    ACC     LMV      HMV



//----------------------------------------------------------------------------------------------------------------



	// MULTIPLE INHERITANCE

  in(), getmaths()       Exam            Sport  input()
  out(), getchem()        |                |    output(), getpoint()
  getphy()                |________________|
                                  |
                               Result

   in(), getmaths()           setdata()     input()
   out(), getchem()           display()     output()
   getphy()                                 getpoint()


#include<iostream>
using namespace std;
class Exam
{
    int phy;
    int chem;
    int maths;

public:
    void in()
    {
        cout<<endl<<"Enter the marks of physics, chemistry and maths: ";
        cin>>phy>>chem>>maths;
    }
    void out()
    {
        cout<<endl<<"Phy: "<<phy<<"\t Chem: "<<chem<<"\t Maths: "<<maths;
    }

protected:
    int getphy()
    {
        return phy;
    }
    int getChem()
    {
        return chem;
    }
    int getMaths()
    {
        return maths;
    }
};
class Sport
{
    int point;

public:
    void input()
    {
        cout<<endl<<"Enter the points: ";
        cin>>point;
    }
    void output()
    {

        cout<<endl<<"Points are: "<<point;
    }

protected:
    getPoint()
    {
        return point;
    }

};
class Result: public Exam, public Sport
{
    char resultFlg;

public:
    void setdata()
    {
        in();
        input();

        if(getphy()>=40 && getChem()>=40 && getMaths()>=40 && getPoint()>=5)
        {
            resultFlg='y';
        }
        else
        {
            resultFlg='n';
        }
    }

    void display()
    {
        out();
        output();
        if(resultFlg=='y')
        {
            cout<<endl<<" Pass!!!!!!!!";
        }
        else
        {
            cout<<endl<<" Fail!!!!!!!!!!";
        }
    }
};
int main()
{
    Result r;
    r.setdata();
    r.display();

    return 0;
}

    Note that the class Exam and class Sport must not contain a function having same name
    if it contains the function with same name, then by inheritance multiple copies
    are present in the child class Result, which will results in Ambiguity error, when
    call that function using object of child.

    You can avoid the Ambiguity Error, by using <base_class_Name>::


 MULTIPLE INHERITANCE

  input(), getmaths()    Exam            Sport  input()
  out(), getchem()        |                |    output(), getpoint()
  getphy()                |________________|
                                  |
                               Result

         getmaths()           setdata()     input()
   out(), getchem()           display()     output()
   getphy()   input()                        getpoint()



#include<iostream>
using namespace std;
class Exam
{
    int phy;
    int chem;
    int maths;

public:
    void input()
    {
        cout<<endl<<"Enter the marks of physics, chemistry and maths: ";
        cin>>phy>>chem>>maths;
    }
    void out()
    {
        cout<<endl<<"Phy: "<<phy<<"\t Chem: "<<chem<<"\t Maths: "<<maths;
    }

protected:
    int getphy()
    {
        return phy;
    }
    int getChem()
    {
        return chem;
    }
    int getMaths()
    {
        return maths;
    }
};
class Sport
{
    int point;

public:
    void input()
    {
        cout<<endl<<"Enter the points: ";
        cin>>point;
    }
    void output()
    {

        cout<<endl<<"Points are: "<<point;
    }

protected:
    getPoint()
    {
        return point;
    }

};
class Result: public Exam, public Sport
{
    char resultFlg;

public:
    void setdata()
    {
         input(); ///error: reference to 'input' is ambiguous|

         Exam::input();
         Sport::input();

        if(getphy()>=40 && getChem()>=40 && getMaths()>=40 && getPoint()>=5)
        {
            resultFlg='y';
        }
        else
        {
            resultFlg='n';
        }
    }

    void display()
    {
        out();
        output();
        if(resultFlg=='y')
        {
            cout<<endl<<" Pass!!!!!!!!";
        }
        else
        {
            cout<<endl<<" Fail!!!!!!!!!!";
        }
    }
};
int main()
{
    Result r;
    r.setdata();
    r.display();

    return 0;
}


//-------------------------------------------------------------------------------------------------------------

	// Hybrid Inheritance:

	    setstudentdetails() 	 getstudentdetails()
				student
			  ________|________
  getstudentdetails()	  |		  |
  setstudentdetails()	  |		  |
  in(), getmaths()      Exam            Sport  input()
  out(), getchem()        |                |    output(), getpoint()
  getphy()                |________________|	getstudentdetails(),setstudentdetails()
                                  |
                               Result

         getmaths()           setdata()     input()
   out(), getchem()           display()     output()
   getphy()   input()                        getpoint()
   setstudentdetails()			     getstudentdetails()
   getstudentdetails()			     setstudentdetails()

#include <iostream>

#include<iostream>
using namespace std;
class Student
{
    private:
	int id;
	char nm[30];
    public:
	void setstudentdetails()
	{
		cout<<endl<<"Enter the name: ";
		cin.getline(nm,50);
		
		cout<<endl<<"Enter the id: ";
		cin>>id;	
	}
	void getstudentdetails()
	{
		cout<<endl<<"Name: "<<nm<<"\t ID: "<<id;
	}
};
class Exam:public Student
{
    int phy;
    int chem;
    int maths;

public:
    void in()
    {
        cout<<endl<<"Enter the marks of physics, chemistry and maths: ";
        cin>>phy>>chem>>maths;
    }
    void out()
    {
        cout<<endl<<"Phy: "<<phy<<"\t Chem: "<<chem<<"\t Maths: "<<maths;
    }

protected:
    int getphy()
    {
        return phy;
    }
    int getChem()
    {
        return chem;
    }
    int getMaths()
    {
        return maths;
    }
};
class Sport:public Student
{
    int point;

public:
    void input()
    {
        cout<<endl<<"Enter the points: ";
        cin>>point;
    }
    void output()
    {

        cout<<endl<<"Points are: "<<point;
    }

protected:
    int getPoint()
    {
        return point;
    }

};
class Result: public Exam, public Sport
{
    char resultFlg;

public:
    void setdata()
    {
	    setstudentdetails(); /// error: reference to ‘setstudentdetails’ is ambiguous
        in();
        input();

        if(getphy()>=40 && getChem()>=40 && getMaths()>=40 && getPoint()>=5)
        {
            resultFlg='y';
        }
        else
        {
            resultFlg='n';
        }
    }

    void display()
    {
	    getstudentdetails(); // error: reference to ‘getstudentdetails’ is ambiguous
        out();
        output();
        if(resultFlg=='y')
        {
            cout<<endl<<" Pass!!!!!!!!";
        }
        else
        {
            cout<<endl<<" Fail!!!!!!!!!!";
        }
    }
};
int main()
{
    Result r;
    r.setdata();
    r.display();

    return 0;
}

The program will gives errors,

	- error: reference to ‘getstudentdetails’ is ambiguous
	- error: reference to ‘setstudentdetails’ is ambiguous

coz there are two copies of both functions, you can avoid ambiguous error
using call, Exam::getstudentdetails() and Exam::setstudentdetails or you can use
sport class i.e. Sport::getstudentdetails() and Sport::setstudentdetails 


#include <iostream>

#include<iostream>
using namespace std;
class Student
{
    private:
	int id;
	char nm[30];
    public:
	void setstudentdetails()
	{
		cout<<endl<<"Enter the name: ";
		cin.getline(nm,50);
		
		cout<<endl<<"Enter the id: ";
		cin>>id;	
	}
	void getstudentdetails()
	{
		cout<<endl<<"Name: "<<nm<<"\t ID: "<<id;
	}
};
class Exam:public Student
{
    int phy;
    int chem;
    int maths;

public:
    void in()
    {
        cout<<endl<<"Enter the marks of physics, chemistry and maths: ";
        cin>>phy>>chem>>maths;
    }
    void out()
    {
        cout<<endl<<"Phy: "<<phy<<"\t Chem: "<<chem<<"\t Maths: "<<maths;
    }

protected:
    int getphy()
    {
        return phy;
    }
    int getChem()
    {
        return chem;
    }
    int getMaths()
    {
        return maths;
    }
};
class Sport:public Student
{
    int point;

public:
    void input()
    {
        cout<<endl<<"Enter the points: ";
        cin>>point;
    }
    void output()
    {

        cout<<endl<<"Points are: "<<point;
    }

protected:
    int getPoint()
    {
        return point;
    }

};
class Result: public Exam, public Sport
{
    char resultFlg;

public:
    void setdata()
    {
	    Exam::setstudentdetails(); 
        in();
        input();

        if(getphy()>=40 && getChem()>=40 && getMaths()>=40 && getPoint()>=5)
        {
            resultFlg='y';
        }
        else
        {
            resultFlg='n';
        }
    }

    void display()
    {
	    Exam::getstudentdetails(); 
        out();
        output();
        if(resultFlg=='y')
        {
            cout<<endl<<" Pass!!!!!!!!";
        }
        else
        {
            cout<<endl<<" Fail!!!!!!!!!!";
        }
    }
};
int main()
{
    Result r;
    r.setdata();
    r.display();

    return 0;
}


or


#include<iostream>
using namespace std;
class Student
{
    private:
	int id;
	char nm[30];
    public:
	void setstudentdetails()
	{
		cout<<endl<<"Enter the name: ";
		cin.getline(nm,50);
		
		cout<<endl<<"Enter the id: ";
		cin>>id;	
	}
	void getstudentdetails()
	{
		cout<<endl<<"Name: "<<nm<<"\t ID: "<<id;
	}
};
class Exam:public Student
{
    int phy;
    int chem;
    int maths;

public:
    void in()
    {
        cout<<endl<<"Enter the marks of physics, chemistry and maths: ";
        cin>>phy>>chem>>maths;
    }
    void out()
    {
        cout<<endl<<"Phy: "<<phy<<"\t Chem: "<<chem<<"\t Maths: "<<maths;
    }

protected:
    int getphy()
    {
        return phy;
    }
    int getChem()
    {
        return chem;
    }
    int getMaths()
    {
        return maths;
    }
};
class Sport:public Student
{
    int point;

public:
    void input()
    {
        cout<<endl<<"Enter the points: ";
        cin>>point;
    }
    void output()
    {

        cout<<endl<<"Points are: "<<point;
    }

protected:
    int getPoint()
    {
        return point;
    }

};
class Result: public Exam, public Sport
{
    char resultFlg;

public:
    void setdata()
    {
	    Sport::setstudentdetails(); 
        in();
        input();

        if(getphy()>=40 && getChem()>=40 && getMaths()>=40 && getPoint()>=5)
        {
            resultFlg='y';
        }
        else
        {
            resultFlg='n';
        }
    }

    void display()
    {
	    Sport::getstudentdetails(); 
        out();
        output();
        if(resultFlg=='y')
        {
            cout<<endl<<" Pass!!!!!!!!";
        }
        else
        {
            cout<<endl<<" Fail!!!!!!!!!!";
        }
    }
};
int main()
{
    Result r;
    r.setdata();
    r.display();

    return 0;
}


In Above two programs, ambiguous errors are eliminated after the transfer of multiple copies
of functions. we we will see hoe to restrict transfer of multiple copies of same function.



	   	 setstudentdetails() 		 getstudentdetails()
				       Student
			  _______________|_______________
  getstudentdetails()	  |		 |		 |
  setstudentdetails()	  |		 |		 |
    class Exam:public virtual student    | 	class Sport:virtual public student
  in(), getmaths()      Exam             |		Sport  input()
  out(), getchem()        |              | 		 |     output(), getpoint()
  getphy()                |______________o_______________|	getstudentdetails(),setstudentdetails()
                                         |
                                      Result

 	        getmaths()           setdata()       input()
 	 out(), getchem()            display()       output()
   	getphy()   input()                           getpoint()
   	setstudentdetails()			     getstudentdetails()
   	getstudentdetails()			     setstudentdetails()


#include <iostream>

#include<iostream>
using namespace std;
class Student
{
    private:
	int id;
	char nm[30];
    public:
	void setstudentdetails()
	{
		cout<<endl<<"Enter the name: ";
		cin.getline(nm,50);
		
		cout<<endl<<"Enter the id: ";
		cin>>id;	
	}
	void getstudentdetails()
	{
		cout<<endl<<"Name: "<<nm<<"\t ID: "<<id;
	}
};
class Exam:public virtual Student
{
    int phy;
    int chem;
    int maths;

public:
    void in()
    {
        cout<<endl<<"Enter the marks of physics, chemistry and maths: ";
        cin>>phy>>chem>>maths;
    }
    void out()
    {
        cout<<endl<<"Phy: "<<phy<<"\t Chem: "<<chem<<"\t Maths: "<<maths;
    }

protected:
    int getphy()
    {
        return phy;
    }
    int getChem()
    {
        return chem;
    }
    int getMaths()
    {
        return maths;
    }
};
class Sport:virtual public Student
{
    int point;

public:
    void input()
    {
        cout<<endl<<"Enter the points: ";
        cin>>point;
    }
    void output()
    {

        cout<<endl<<"Points are: "<<point;
    }

protected:
    int getPoint()
    {
        return point;
    }

};
class Result: public Exam, public Sport
{
    char resultFlg;

public:
    void setdata()
    {
	    setstudentdetails(); /// error: reference to ‘setstudentdetails’ is ambiguous
        in();
        input();

        if(getphy()>=40 && getChem()>=40 && getMaths()>=40 && getPoint()>=5)
        {
            resultFlg='y';
        }
        else
        {
            resultFlg='n';
        }
    }

    void display()
    {
	    getstudentdetails(); // error: reference to ‘getstudentdetails’ is ambiguous
        out();
        output();
        if(resultFlg=='y')
        {
            cout<<endl<<" Pass!!!!!!!!";
        }
        else
        {
            cout<<endl<<" Fail!!!!!!!!!!";
        }
    }
};
int main()
{
    Result r;
    r.setdata();
    r.display();

    return 0;
}


    /// Virtual Base Class:

    Normally in diamond shape inheritance (or in the multiple/hybrid inheritance),
    means where a class gains the properties from two or more classes, if the child
    class contains two or more inherited copies of functions having same name and the
    child don't have the native function having same name, then it will generate the
    ambiguous error. which can be corrected using two different ways.

        - Using <class_name>::<fun_nm>();
        - Using virtual base class

    The virtual base class is not a direct base, it is present in the top hierarchy
    of selected class, Normally in diamond shape inheritance, the base class functions
    are inherited to child via two different ways, i.e. via left hand child and via right
    hand child, in such case child class contents the multiple copies of functions having
    same signature and which are from ultimate base class. which leads to ambiguous
    condition, to avoid this we need to make a provision to pass the single copy
    to the child class and it is done by using virtual keyword in the inheritance of
    intermediate base classes. Due to that only single copy of function is passed to child
    from the intermediate base classes which are inherited as virtual, means the result
    is same like the child class inherits the ultimate base.therefore that ultimate base
    class is called as virtual base class.

    In above example, Student class is virtual base class.

//------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------

	// Pointer, Virtual function and Polymorphism

	Pointer: When the element count decided at runtime, you need the dynamic memory allocation,
		 for that in C, malloc(), realloc() and calloc() functions are used where as in C++,
		 new and delete operators are provided.

		so lets see how the pointer variable is used to stote an address of location.


	// pointer used to refer the variables of builtin type

int main()
{
	int x=10;
	int *p;
	p=&x;
	cout<<endl<<"Using x, x="<<x;
	cout<<endl<<"Using p, x="<<*p;

	float ft=3.4;
	flaot *fp;
	fp=&ft;
	cout<<endl<<"Using ft, ft="<<ft;
	cout<<endl<<"Using fp, ft="<<*fp;

	return 0;
}


//---------------------------------------------------------------------------------

	// Using pointer to refer array

#include <iomanip>
int main()
{
	int x[5]={11,22,33,44,55};
	int *p;

	p=x;	// or p=&x[0];
	cout<<endl<<"Array elements are: ";
	for(int i=0;i<5;i++)
	{
		cout<<setw(6)<<*(p+i);
	}
	return 0;
}

//------

	// input display in above program

int main()
{
	int x[5];
	int *p;

	p=x;	
	cout<<endl<<"Enter the array elements: ";
	for(int i=0;i<5;i++)
	{
		cin>>*(p+i);
	}

	cout<<endl<<"Array elements are: ";
	for(int i=0;i<5;i++)
	{
		cout<<setw(6)<<*(p+i);
	}
	return 0;
}

//---------------------------------------------------------

	// suing pointer arithmatic in above program


int main()
{
	int x[5];
	int *p;

	p=x;	
	cout<<endl<<"Enter the array elements: ";
	for(int i=0;i<5;i++)
	{
		cin>>*p;
		p++;
	}
	p=x;
	cout<<endl<<"Array elements are: ";
	for(int i=0;i<5;i++)
	{
		cout<<setw(6)<<*(p++);
	}
	return 0;
}

//-------------------------------------------------------------------------------

	// Dynamic memory allocation for pointer using "new"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int cnt;

	cout<<endl<<"Enter the count: ";
	cin>>cnt;

	int *p=new int[cnt];
	cout<<endl<<"Enter the array elements: ";
	for(int i=0;i<cnt;i++)
	{
		cin>>*(p+i);
	}
	
	cout<<endl<<"Array elements are: ";
	for(int i=0;i<cnt;i++)
	{
		cout<<setw(6)<<*(p+i);
	}
	delete p;
	return 0;
}

//----------------------------------------------------------------------------------------------

	// pointer to function

#include <iostream>
#include <iomanip>
using namespace std;

void add(int x,int y)
{
	cout<<endl<<"Addition is: "<<(x+y);
}
void multi(int x,int y)
{
	cout<<endl<<"Addition is: "<<(x*y);
}

int main()
{
	int a,b;

	cout<<endl<<"Enter the values of a and b: ";
	cin>>a>>b;

	add(a,b);
	multi(a,b);

	void (*fptr)(int,int);

	fptr=&add;
	fptr(a,b);

	fptr=&multi;
	fptr(a,b);
	
	return 0;
}

//--------------------------------------------------------------------------------------

	// pointer to Object

class Item
{
    private:
	int ic;
	float ip;
    public:
	void in()
	{
		cout<<endl<<"Ente the item code and price: ";
		cin>>ic>>ip;
	}
	void out()
	{
		cout<<endl<<"Item Code: "<<ic<<"\t Price: "<<ip;
	}
};

int main()
{
	Item ob;
	ob.in();
	ob.out();

	Item *p;
	p=&ob;
	p->out();

	return 0;
}

//---------------------------------------------------------------------------------------------------

	// Dynamic memory alocation for objects

#include <iostream>
#include <iomanip>
using namespace std;

class Item
{
    private:
	int ic;
	float ip;
    public:
	void in()
	{
		cout<<endl<<"Ente the item code and price: ";
		cin>>ic>>ip;
	}
	void out()
	{
		cout<<endl<<"Item Code: "<<ic<<"\t Price: "<<ip;
	}
};

int main()
{
	int cnt;
	cout<<"endl"<<"Enter the element count: ";
	cin>>cnt;

	Item *p;
	p=new Item[cnt];

	cout<<endl<<"Enter the information of "<<cnt<<"Items: ";
	for(int i=0;i<cnt;i++)
	{
		(p+i)->in();
	}

	cout<<endl<<"The information of "<<cnt<<"Items: ";
	for(int i=0;i<cnt;i++)
	{
		(p+i)->out();
	}
	return 0;
}

//--------------------------------------------------------------------------------------------------

	// WAP using switch case, to input the list of items, and display total bill with discount

//--------------------------------------------------------------------------------------------------

	// Pointer to class members

#include <iostream>
#include <iomanip>
using namespace std;

class Demo
{
	int x;
	float y;
    public:
	Demo()
	{
		x=1;
		y=1.1;
	}
	Demo(int a1, float a2)
	{
		x=a1;
		y=a2;
	}
	void display()
	{
		cout<<endl<<"x="<<x<<"\t y="<<y;
	}
};
int main()
{
	Demo ob;
	ob.display();

	void (Demo::*fptr)()=&Demo::display;
	(ob.*fptr)();

	return 0;
}

//----------------

#include <iostream>
#include <iomanip>
using namespace std;
class M
{
    int x;
    int y;
   public:
       void set_xy(int a,int b)
       {
           x=a;
           y=b;
       }
       friend int sum(M m);
};
int sum(M ob)
{
    int M::*px=&M::x;
    int M::*py=&M::y;

    M *pm=&ob;
   // int s = ob.*px + ob.*py;
    int s = pm->*px + pm->*py;
    return s;
}
int main()
{
    M n;

    void (M::*pf)(int,int)=&M::set_xy;
    (n.*pf)(10,20);
    cout<<"\n Sum is: "<<sum(n);
    return 0;
}

//------------------------------------------------------------------------------------------

	// this pointer: It is keyword, which bydefault refer to invoking object.

class Person
{
	int uid;
	int age;
    public:
	void in()
	{
		cout<<endl<<"Enter the UID and age: ";
		cin>>uid>>age;
	}
	void out()
	{
		cout<<end<<"UID: "<<uid<<"\t Age: "<<age;
	}
	Person findElder(Person t)
	{
		if(t.age>age)
		{
			return t;
		}
		else
		{
			return *this;
		}
	}
};
int main()
{
	Person p1;
	p1.in();
	p1.out();

	Person p2;
	p2.in();
	p2.out();

	Person p3=p1.findElder(p2);
	cout<<endl<<"Elder Person";
	p3.out();

	return 0;
}


///======================================================================

    /// Using the pointer in inheritance

#include <iostream>
#include <iomanip>
using namespace std;

class Demo
{
    public:
	void show()
	{
		cout<<endl<<"In Demo Show()";
	}	
};

class Sample:public Demo
{
    public:
	void display()
	{
		cout<<endl<<"In Sample display()";
	}	
};

int main()
{
	Demo dob;
	Sample sob;

	// pointer of child pointing to base and child object
	
	Sample *sp;

	// sp=&dob; // error: invalid conversion from ‘Demo*’ to ‘Sample*’ [-fpermissive]
	// sp->show();

	sp=&sob;
	sp->display();
	
	//-----------------------------------------------------------------
    	// pointer of base pointing to base and child object
    
    	Demo *dp;
    	dp=&dob;
	dp->show();
	
	dp=&sob;
	//dp->display(); // error: ‘class Demo’ has no member named ‘display’
	((Sample*)dp)->display();
	return 0;
}

Note That,
	
	- Child class pointer able to refer object of child only, where as base class
	  class pointer able to refer both child and base class object.

	- When base class pointer is pointing towards object of child, and making a call to
	  child class method, then the method will be searched in the base class. if it is not
	  present over there, it will generate an error message. To avoid that error, we need to
	  cast that pointer to child type.


 Now, we wil do one thing that, rather than going for type cast of base class to child type,
 as the error suggest, lets write same function i.e. display(), it base class Demo.

#include <iostream>
#include <iomanip>
using namespace std;

class Demo
{
    public:
	void display()
	{
		cout<<endl<<"In Demo display()";
	}	
	void show()
	{
		cout<<endl<<"In Demo Show()";
	}	
};

class Sample:public Demo
{
    public:
	void display()
	{
		cout<<endl<<"In Sample display()";
	}	
};

int main()
{
	Demo dob;
	Sample sob;
	
	//-----------------------------------------------------------------
    // pointer of base pointing to child object
    
    Demo *dp;

	dp=&sob;
	dp->display();
	
	return 0;
}


 Now We will the output from base class copy, means display() from base class is executed.
 But we want to execute the child class copy of display(), then we need to use "virtual"
 keyword as a qualifier to display() function in base class Demo.

#include <iostream>
#include <iomanip>
using namespace std;

class Demo
{
    public:
	virtual void display()
	{
		cout<<endl<<"In Demo display()";
	}	
	void show()
	{
		cout<<endl<<"In Demo Show()";
	}	
};

class Sample:public Demo
{
    public:
	void display()
	{
		cout<<endl<<"In Sample display()";
	}	
};

int main()
{
	Demo dob;
	Sample sob;
	
	//-----------------------------------------------------------------
    // pointer of base pointing to child object
    
    Demo *dp;

	dp=&sob;
	dp->display();
	
	return 0;
}


 Now we will get the output from child class copy, so virtual function can be defined as
 it is function from base class havinfg empty body and qualified with virtual keyword.

//=====================================================================================================
	
	Polymorphism: One name many forms

			Polymorphism
			     |
		------------------------------	
		|			     |
   	  static/compile-time/		Dynamic/Run-time
	  Early binding			Late baiding
		|			     |
	   Overloading			 Overriding
		|
          - function overloading	
          - operatoe overloading	

	lets see, Run-time Polymorphism

			Shape
			[   ] area()
			  |
	  ________________|_________________
	  |		  |		  |
	  |     	  |     	  |
	[   ]		[   ]		[   ]
	Rect   	       Circle  	       Triangle 
	area()		area()		area()

#include <iostream>
#include <iomanip>
using namespace std;

class Shape
{
    public:	
    	virtual void area()		// Virtual function
	{
	}
};
class Rect:public Shape
{
    public:
	void area()
	{
		cout<<endl<<"In Rect area()";
	}
};
class Circle:public Shape
{
    public:
	void area()
	{
		cout<<endl<<"In Circle area()";
	}
};
class Triangle:public Shape
{
    public:
	void area()
	{
		cout<<endl<<"In Triangle area()";
	}
};

int main()
{
	Shape *s;

	Rect rob;
	s=&rob;;
	s->area();

	Circle cob;
	s=&cob;;
	s->area();

	Triangle tob;
	s=&tob;;
	s->area();

	return 0;
}

//--------------------------------------------

 Now, we and to ad one more child

			Shape
			[   ] area()
			  |
	  ________________|________________- - - - - - - - 
	  |		  |		  |		 |
	  |     	  |     	  |  		 |
	[   ]		[   ]		[   ]	       [   ]	
	Rect   	       Circle  	       Triangle      Parabola
	area()		area()		area()



#include <iostream>
#include <iomanip>
using namespace std;

class Shape
{
    public:	
    virtual void area()=0; // pure virtual function
};
class Rect:public Shape
{
    public:
	void area()
	{
		cout<<endl<<"In Rect area()";
	}
};
class Circle:public Shape
{
    public:
	void area()
	{
		cout<<endl<<"In Circle area()";
	}
};
class Triangle:public Shape
{
    public:
	void area()
	{
		cout<<endl<<"In Triangle area()";
	}
};
class Parabola:public Shape
{
    public:
	void area()
	{
		cout<<endl<<"In parabola area()";
	}
};

int main()
{
	Shape *s;

	Rect rob;
	s=&rob;;
	s->area();

	Circle cob;
	s=&cob;;
	s->area();

	Triangle tob;
	s=&tob;;
	s->area();

	Parabola pob;
	s=&pob;;
	s->area();

	return 0;
}


Abstract Class: 

//-----------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------

	//  Input-Output in C++: 

		There are different ways of taking data in the computer memory, and differnt ways of
	reprenting data to outside world. how to deal with these different ways of input-output, that
	we hve to study in this topic, Input-Output in C++ or IO in C++


		 				  CPU  
					_________________________
					|			|     sends the command signal 
				|----->	|	  CU		|---> to every connected peripherial
				|	|_______________________|     
		   Input	|	|			|	 	 Output
		    [ ]		|   |-->|	  ALU		|---|     |--->   [ ]
		     |		|   |	|_______________________|   |	  |
		     |		|   |---|			|<--|	  |
 In C   - scanf()    |		|-------|	  IM		|	  |  In C   - printf()
 In C++ - cin	     |---------------->	|_______________________|---------|  In C++ - cout
					       ^          |	
	       fp=fopen("<path>",<Read_Mode>)  |          | fp=fopen("<path>",<Write_Mode>)	
					 ______|__________V______
					|			|
					|	  EM		|
					|_______________________|


	Stream: It is path or channel thw. which data flows in terms of bits and bytes.


	  Console output Stream - cout(default)   Output file stream - say fout(userdefined)

  		   _____[][][][][][][][][]_________[][][][][][][][][]_____
                   |			     |				 |
 		   |			     ^				 V
		   V	    Console	     |		File		 |
		[    ]        IO           [   ]	 IO	       [   ]
	       IO Device             	  Program   		    File on Disk
		   |			     |			 	 |
		   |			     ^				 V
		   V			     |				 |
		   |___[][][][][][][][][]____|____[][][][][][][][][]_____|

	  Console Input Stream - cin(default)	    Input file stream - say fin(userdefined)


	class hierarchy of IO class in the library


					     ios
		--------------<---------------|
		|		              |
		|	----------------------|-----------------------
		|	|		  streambuf		    |
		|	V			|________	    V
		|     istream				|	ostream
		|	|  |____________________________|________|   |
		|	|		      | 	|____________|______> filebuf
		|	|		      V			     |
		|	|		  iostream		     |       Console IO
  ______________|_______|____________________|_______________________|________________
		|	|		     |			     |
		V	V		     V  		     V       File IO 
		|     ifstream		    fstream	          ofstream
		|	^		      ^			     ^	
		|       |_____________________|______________________| 
		|                             |    
		|			    fstreambase
		|______________>______________|


	We have provided with the built-in io objects used to deal with standard input and standard output
	and these are cin and cout respectively.

		cin - It is predefined object istream class.
		cout - It is predefined object of ostream class

	In case of file io, no any predefined stream object are provided, we need to decl. it in the program as

		ifstream fin  - to create the input stream
		ofstream fout - to create the output stream		
	

//-------------------------------------------------------------

	Now lets start with - Console IO:
	


	- Console Input Stream : This stream is created using the scanf() function in C, which is buitin
				 function from stdio.h.
					 Here in C++, These streams are created using the istream class and
				 ostream class. The cin is predefined object of istream class. which creates
				 the standard(console) input stream. and therefore cin.getline() is called using
				 such way, i.e. using the . operator

				In case of cin>>,  in this case cin is object and  >> is actually bitwise rh+ shift
				operator, which is overloaded here in istream class to take the input and therefore
				it is known as get-in or extraction operator.

	- Console Output Stream : Here the cout is predefined object of ostream class, and << is actrually bitwise
				leftshift operator, which is overloaded here in ostream class to put the data on
				screen and therefore it is known as put-to or insertion operator.


	Using get() and put() functions: 
  	
			here the get() and put() are the two different methods from istream and ostream classes resp.
	the get() having two different form used to take the single character. whereas the put() is used to display
	the single character to screen.

#include <iostream>
using namespace std;
int main()
{
    char ch;

    cin.get(ch);
    //ch=cin.get(); // or

    cout.put(ch);
    cout<<"\n"<<ch;

    return 0;
}


//--------------------------------------------------------------------------------------------

	// Using the getline() and write() functions: The getline() is from istream and write() is 
			from ostream class, used to input/display the collection of characters (String) .



#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[50];

    cout<<"\n Enter the string: ";
    cin.getline(str,50);
    cout.write(str,strlen(str));

    return 0;
}

//------------------

#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[50]="good day jay";

    int i;
    for(i=0;i<=strlen(str);i++)
    {
        cout.write(str,i);
        cout<<endl;
    }
    for(i=i-2;i>0;i--)
    {
        cout.write(str,i);
        cout<<endl;
    }

    return 0;
}
//-----------------------------------------------------------------------------------

/// Formatted Console IO Operations
Formatted IO using ios class memebers:
---------------------------------------

The ios class contains several member functions that are used to perform formmated IO operations.

The ios class also contains few format flags used to format the output. It has format flags like showpos, showbase, oct, hex, etc. The format flags are used by the function setf( ).

The following table provides the details of the functions of ios class used to perform formatted IO in C++.

Function	Description

width(int)			Used to set the width in number of character spaces for the immediate output data.
fill(char)			Used to fill the blank spaces in output with given character.
precision(int)			Used to set the number of the decimal point to a float value.
setf(format flags)		Used to set various flags for formatting output like showbase, showpos, oct, hex, etc.
unsetf(format flags)		Used to clear the format flag setting.

All the above functions are called using the built-in object cout.


The C++ programming language provides the several built-in functions to display the output in formatted form. These built-in functions are available in the header file iomanip.h and ios class of header file iostream.h.


In C++, there are two ways to perform the formatted IO operations.

	- Using the member functions of ios class.
	- Using the special functions called manipulators defined in iomanip.h.
	- Using userdefined output functions


All the above functions are called using the built-in object cout.

Lets look at the following code to illustrate the formatted IO operations using member functions of ios class.
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << "Example for formatted IO" << endl;

    cout << "Default: " << endl;
    cout << 123 << endl;

    cout << "width(5): " << endl;
    cout.width(5);
    cout << 123 << endl;

    cout << "width(5) and fill('*'): " << endl;
    cout.width(5);
    cout.fill('*');
    cout << 123 << endl;

    cout.precision(6);
    cout << "precision(6) ---> " << 123.4567890 << endl;
    cout << "precision(6) ---> " << 19.876543210 << endl;

    cout << "setf(showpos): " << endl;
    cout.setf(ios::showpos);
    cout << 123 << endl;

    cout << "unsetf(showpos): " << endl;
    cout.unsetf(ios::showpos);
    cout << 123 << endl;

    return 0;
}

//----------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------

Formatted IO using manipulators
-------------------------------------

The iomanip.h header file contains several special functions that are used to perform formmated IO operations.

The following table provides the details of the special manipulator functions used to perform formatted IO in C++.

Function				Description
setw(int)			Used to set the width in number of characters for the immediate output data.
setfill(char)			Used to fill the blank spaces in output with given character.
setprecision(int)		Used to set the number of digits of precision.
setbase(int)			Used to set the number base.
setiosflags(format flags)	Used to set the format flag.
resetiosflags(format flags)	Used to clear the format flag.

The iomanip.h also contains the following format flags using in formatted IO in C++.

Flag				Description
endl			Used to move the cursor position to a newline.
ends			Used to print a blank space (null character).
dec			Used to set the decimal flag.
oct			Used to set the octal flag.
hex			Used to set the hexadecimal flag.
left			Used to set the left alignment flag.
right			Used to set the right alignment flag.
showbase		Used to set the showbase flag.
noshowbase		Used to set the noshowbase flag.
showpos			Used to set the showpos flag.
noshowpos		Used to set the noshowpos flag.
showpoit		Used to set the showpoit flag.
noshowpoint		Used to set the noshowpoint flag.

Lets look at the following code to illustrate the formatted IO operations using manipulators.

#include <iostream>
#include <fstream>
#include<iomanip>

using namespace std;

void line() {
    cout << "-------------------------------" << endl;
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
//------------------------------------------------------------------------------------------------------------------

// user defined manipulators 
//---------------------------

C++ provides a set of predefined manipulators. The header file iomanip.h header file contains these manipulators. Moreover, you can design your own manipulators in C++ to suit specific purpose. The user defined manipulators are defined as follows:

ostream & manipulator(ostream & ostr)
{
	set of statements;
	return ostr;
}

Consider the following example which creates a user defined manipulator named curr for displaying Rs. and sets the precision to 2.

#include <iostream>
#include <iomanip>
using namespace std;
ostream& curr(ostream& ostr)
{
	cout<< setprecision(2);
	cout<<"Rs. ";
	return ostr;
}

int main()
{
	float amt = 4.5476;
	cout<<curr<<amt;
	return 0;
}

Copyrights  Archer InfoTech Pune 9850678451

//========================================================================================================
//========================================================================================================

	// File IO

In C++, file I/O (Input/Output) involves reading from and writing to files. A "file" in this context typically refers to a named collection of data stored on a storage medium, such as a hard drive or SSD.

In C++, you perform file I/O operations using, the <fstream> library, which provides classes like 
	- ifstream (for input from a file)
	- ofstream (for output to a file),
	- fstream (for both input and output). 

These classes allow you to interact with files in a way that's similar to how you interact with streams of data.

To perform file I/O in C++, you typically follow these steps:

	- Include the necessary header file: #include <fstream>.

	- Open the file: Use an instance of ifstream, ofstream, or fstream to open the file you want to read from or write to. You specify the filename and optionally the file mode (e.g., ios::in for input, ios::out for output, ios::binary for binary mode, etc.).

	- Perform read or write operations: Once the file is open, you can use standard input/output operations (<< and >> operators) or member functions (getline(), write(), read(), etc.) to perform read or write operations on the file.

	- Close the file: After you're done with the file, it's essential to close it using the close() method of the file stream object. This ensures that any buffers are flushed, and system resources associated with the file are released.
	

//-------------------------------------------------------------------------------
How to Open the file:
--------------------

Now the first step to open the particular file for read or write operation. We can open file by 
1. passing file name in constructor at the time of object creation 
2. using the open method 

For e.g.  

Open File by using constructor 
ifstream (const char* filename, ios_base::openmode mode = ios_base::in); 
ifstream fin(filename, openmode) by default open mode = ios::in 
ifstream fin(“filename”);

Open File by using open method 
Calling of default constructor 
ifstream fin;
fin.open(filename, openmode) 
fin.open(“filename”); 

//---------------------------------------------------------------
/// Using the get() and put(): 
// Program to read the single character from the file
#include<fstream>
int main()
{
 ifstream fin("E:\\sample.txt");
 cout<<(char)fin.get();
 return 0;
}

Note that the file pointer by default refers at start, and after 
the read operation in will increases
by one automatically. to the program below gives the first 3 
characters;
#include<fstream>
int main()
{
 ifstream fin("f:\\sample.txt");
 cout<<(char)fin.get();
 cout<<(char)fin.get();
 cout<<(char)fin.get();
 return 0;
}
// Again note that the file contains EOF (End of File ) at last 
which is given by eof() or
// int the read operation the -1 will be returned.
// so all characters are collected from file as
#include<fstream>
int main()
{
 ifstream fin("f:\\sample.txt");
 int t;
 while( (t=fin.get())!=-1 )
 {
 	cout<<(char)t;
 }
 return 0;
}
//----------------------------------------------------------------
#include<fstream>
int main()
{
 ifstream fin("f:\\sample.txt");
 int t;
 while(!fin.eof())
 {
 cout<<(char)fin.get();
 }
 return 0;
}
// Note carefully that eof() returns 1 when reached at end 
otherwise 0.

//====================================================================

/// Write operation in c++
int main()
{
ofstream fout("data.txt");
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
//==================================================================
 // File opening using the open() function
int main()
{
ofstream fout;
ifstream fin;
 int t;
 fout.open("data.txt");
 fin.open("sample.txt");
 while(!fin.eof())
 {
 t=fin.get();
 fout.put(t);
}
fin.close();
fout.close();
 return 0;
}
=============================
// Using the fstream
*/
int main()
{
fstream fio;
ifstream fin("data.txt");
char ch;
fio.open("sample.txt",ios::in | ios::out);
// open the data file and after reading the data write that data 
into another file
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
//=======================================================================
=================
// Writing the object of class to file
class item
{
int icode;
float ipr;
 public:
void indata()
{
cout<<"\n Enter the item code: ";
cin>>icode;
cout<<"\n Enter the item price: ";
cout<<ipr;
}
void outdata()
{
cout<<"\n Item Code: "<<icode<<"\t Price: "<<ipr;
}
};
int main()
{
item ob;
ob.indata();
fstream fio;
fio.open("itemdata.txt",ios::in | ios::out);
fio.write((char*) &ob, sizeof(ob));
fio.seekg(0);
item tmp;
fio.read((char*)&tmp, sizeof(tmp));
tmp.outdata();
return 0;
}