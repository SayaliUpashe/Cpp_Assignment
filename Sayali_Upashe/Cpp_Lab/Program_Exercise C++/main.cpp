//1.CPP Program to Check Whether a Number is Triangular or Not.
//Triangular Numbers are those numbers which are obtained by continued summation of the natural numbers 1, 2, 3, 4, 5, etc.
//Example: 15 is Triangular Number because it can be obtained by 1+2+3+4+5+6 i.e. 1+2+3+4+5+6=15
/*
#include <iostream>
using namespace std;
int main()
{
    int no,sum=0;
    cout<<"Enter the number:"<<endl;
    cin>>no;

    for(int i=1;i<no;i++)
    {
        if(sum<no)
        {
            sum=sum+i;
        }
        //sum=sum+i;
        //cout<<sum<<"\n";
    }

    if(sum==no)
    {
        cout<<"Number is Triangular:"<<no<<endl;
    }
    else
    {
        cout<<"Number is not Triangular:"<<no<<endl;
    }
    return 0;
}

//---------------------------------------------------------------------------------------------------------------
/*
//CPP Program to check Natural Number:
#include<iostream>
using namespace std;
int main()
{
    int no;

    cout<<"Enter the number :"<<endl;
    cin>>no;

    if(no>0)
    {
        cout<<"no is natural number:"<<endl;
    }
    else
    {
        cout<<"no is not natural number :"<<endl;
    }
    return 0;
}

//-----------------------------------------------------------------------------------------------------------------------
/*
//PP Program to Check Abundant Number.
//Ex:- Abundant number  12 having a proper divisor is 1, 2, 3, 4, 6
//The sum of these factors is 16 it is greater than 12
//So it is an Abundant number
#include<iostream>
using namespace std;
int main()
{
    int no,sum=0;

    cout<<"Enter the number :"<<endl;
    cin>>no;

    for(int i=1;i<no;i++)
    {
        if(no%i==0)
        {
           sum=sum+i;
        }

    }
    cout<<"sum is :"<<sum<<endl;

    if(no<sum)
    {
        cout<<"Number is Abudant:"<<no<<endl;
    }
    else
    {
        cout<<"Number is not abudant:"<<no<<endl;
    }
    return 0;
}
//-------------------------------------------------------------------------------------------------------------------------------------------
/*
//CPP Program to Check Amicable Number
//Amicable numbers exhibit a unique relationship where the sum of the proper divisors of each number is equal to the other number.
//For example, the pair (220, 284) is amicable because the sum of divisors of 220 is 284, and the sum of divisors of 284 is 220.
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,sum=0,sum1=0;

    cout<<"Enter the two number:"<<endl;
    cin>>num1>>num2;

    for(int i=1;i<num1;i++)
    {
        if(num1%i==0)
        {
            sum=sum+i;
        }
    }
    //cout<<"sum is :"<<sum<<endl;

    for(int j=1;j<num2;j++)
    {
        if(num2%j==0)
        {
            sum1=sum1+j;
        }
    }
    //cout<<"sum1 is :"<<sum1<<endl;

    if(sum==num2 && sum1==num1)
    {
        cout<<"Number "<<num1<<" and "<<num2<<" are Amicable"<<endl;
    }
    else
    {
        cout<<"Numbers "<<num1<<" and "<<num2<<" are not Amicable"<<endl;
    }
    return 0;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------

//CPP Program to Condense a Number
//For example, consider the number 9875. The program would calculate 9 + 8 + 7 + 5 = 29, then 2 + 9 = 11, and finally 1 + 1 = 2. The condensed form is 2.
#include<iostream>
using namespace std;
int main()
{
    int no,rem,sum=0,sum1=0,sum2=0;
    cout<<"Enter the number :"<<endl;
    cin>>no;

    while(no!=0)
    {
        rem=no%10;
        sum=sum+rem;
        no=no/10;

    }
    cout<<"sum is :"<<sum<<endl;

    no=sum;
    while(no!=0)
    {
        rem=no%10;
        sum1=sum1+rem;
        no=no/10;

    }
    cout<<"sum1 is :"<<sum1<<endl;

    no=sum1;
    while(no!=0)
    {
        rem=no%10;
        sum2=sum2+rem;
        no=no/10;
    }
    cout<<"sum2 is :"<<sum2<<endl;

    return 0;
}
//----------------------------------------------------------------------------------------------------------------------------------------

//CPP Program to Check Disarium Number
//For example, the number 89 is a Disarium number because 8^1 + 9^2 equals 89.
//
//no   dc=0  rem    ans=0
//89   2      9       9^2=81
//8    1      8       8^1=8
//-----------------------------
//                    ans=89
//                    ans==no
//
#include<iostream>
using namespace std;
int main()
{
    int no,cnt=0,rem,ans=0;

    cout<<"Enter the number :"<<endl;
    cin>>no;
    int tmp=no;
    while(no!=0)
    {
        cnt++;
        no=no/10;
    }
    cout<<"count of digit :"<<cnt<<endl;

    int i=0;
    no=tmp;
    while(no!=0)
    {
        int pow=1;
        i=0;
        rem=no%10;
        no=no/10;
        while(i<cnt)
        {
            pow=pow*rem;//9=81  8=8
            i++;
        }
        ans=ans+pow;
        cnt--;
        cout<<"Ans is :"<<ans<<endl;
    }
    no=tmp;
    if(ans==no)
    {

        cout<<" no is Disarium "<<no<<"\t"<<ans<<endl;
    }
    else
    {
        cout<<"no is not Disarium "<<no<<"\t"<<ans<<endl;
    }
    return 0;
}
//--------------------------------------------------------------------------------------------------------------------------------------------

//CPP Program to Check Automorphic Number
//For example, 25 is an automorphic number because its square is 625, and the last two digits (25) match the original number.
#include<iostream>
using namespace std;
int main()
{
    int no,sqr=0,cnt=0,flg=0;

    cout<<"Enter the number :"<<endl;
    cin>>no;
    int tmp=no;
    sqr=no*no;
    cout<<" ans is :"<<sqr<<endl;

    while(no!=0)
    {
        cnt++;
        no=no/10;
    }

    no=tmp;
    int i=0;
    while(i<cnt)
    {
       int rem=sqr%10;
        no=no%10;

        if(rem!=no) //no => 25  sqr => 625  5!=5  2!=2
        {
            flg=0;
            break;

        }
        no=no/10;
        sqr=sqr/10;
        i++;

    }

    no=tmp;
    if(flg==1)
    {

        cout<<"Automorphic no is "<<no<<endl;
    }
    else
    {
        cout<<"not automorphic is "<<no<<endl;
    }


    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------------
/*
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int square = num * num;
    int temp = num;
    bool isAutomorphic = true;

    while (temp > 0)
        {
        if (temp % 10 != square % 10)
        {
            isAutomorphic = false;
            break;
        }
        temp /= 10;
        square /= 10;
    }

    if (isAutomorphic) {
        cout << num << " is an automorphic number." << endl;
    } else {
        cout << num << " is not an automorphic number." << endl;
    }

    return 0;
}
*/
///=======================================================================================================================================================
//----------------------------------------------------------Class And Object------------------------------------------------------------------------------
///=======================================================================================================================================================
/*
//C++ program to find factorial by defining functions outside the class:
#include<iostream>
using namespace std;
class Fact
{
private:
    int no;
public:
    void in()
    {
        cout<<"Enter the number:"<<endl;
        cin>>no;
    }
//    void out()
//    {
//        cout<<"Factorial Number:"<<fact;
//    }
    friend void findfact(Fact t);
};
void findfact(Fact t)
{
    int i,no,fact=1;

    i=1;
    while(i<=t.no)
    {
        fact=fact*i;
        i++;
    }
    cout<<"Factorial Number:"<<fact;
}
int main()
{
    Fact ob1;
    ob1.in();
    //ob1.out();
    findfact(ob1);

    return 0;
}
*/
///========================================================================================================
/*
//C++ program to find greatest b/w 3 nos. by defining the functions inside class:
#include<iostream>
using namespace std;
class Larger
{
private:
    int n1;
    int n2;
    int n3;
public:
    void in()
    {
        cout<<"Enter the Three number:"<<endl;
        cin>>n1>>n2>>n3;
    }
    int findmax()
    {
        if(n1>n2)
        {
            if(n1>n3)
            {
                return n1;
            }
            else
            {
                return n3;
            }
        }
        else
        {
            if(n2>n3)
            {
                return n2;
            }
        }
    }
    void out()
    {
        cout<<"Max number is"<<findmax();
    }
};
int main()
{
    Larger ob1;
    ob1.in();
    //ob1.out();
    //ob1.findmax();
    cout<<"Max number is"<<ob1.findmax();
}
*/
///========================================================================================================
/*
//C++ program to find reverse of number by defining functions outside class:
#include<iostream>
using namespace std;
class RevExample
{
private:
    int no;
public:
    void in()
    {
        cout<<"Enter the number:"<<endl;
        cin>>no;
    }
    friend void findrev(RevExample t);
};
void findrev(RevExample t)
{
    int rev=0,rem,no;
    while(t.no!=0)
    {
       rem=t.no%10;
       rev=(rev*10)+rem;
       t.no=t.no/10;
    }
    cout<<"Reverse Number:"<<rev;
}
int main()
{
    RevExample ob1;
    ob1.in();
    findrev(ob1);
    return 0;
}
///=========================================================================================================
/*
//C++ program to add two time by Call by reference:
#include<iostream>
using namespace std;
class Timeadd
{
private:
    int hh;
    int mm;
    int ss;
public:
    void in()
    {
        cout<<"Enter the hour minute and second:"<<endl;
        cin>>hh>>mm>>ss;
    }
    void out()
    {
        cout<<"hh"<<hh<<":"<<"mm"<<mm<<":"<<"ss"<<ss<<endl;
    }
    void add(Timeadd &t)
    {
        Timeadd tmp;
        tmp.ss=ss+t.ss+tmp.ss;
        tmp.mm=mm+t.ss+tmp.ss/60;
        tmp.ss=tmp.ss%60;

        tmp.hh=hh+t.hh+tmp.mm/60;
        tmp.mm=tmp.mm%60;

        return tmp;


    }
};
int main()
{
    Timeadd ob1,ob2,ob3;
    ob1.in();
    ob2.out();

    cout<<"Addition is "<<ob1.add(ob2);
    return 0;

}
/*
#include<iostream>
using namespace std;
class Item
{
private:
    int id;
    int price;
    int getprice()
    {
        return price;
    }
public:
    void in()
    {
        cout<<"Enter the id:";
        cin>>id;
        cout<<"Enter the price:"<<endl;
        cin>>price;
    }
    void out()
    {
        cout<<"id:"<<id<<"price:"<<price;
    }
    int getitemprice()
    {
        return getprice();
    }
};
int main()
{
    Item ob[2];
    for(int i=0;i<2;i++)
    {
        ob[i].in();
    }
    for(int i=0;i<2;i++)
    {
        ob[i].out();
    }
    int total=0;
    for(int i=0;i<2;i++)
    {
        total=total+ob[i].getitemprice();
    }
    cout<<"Total Bill:"<<total;
    return 0;
}

#include<iostream>
using namespace std;
class Item
{
private:
    int id;
    int pr;
    static int tot;
public:
    void in()
    {
        cout<<"Enter id:";
        cin>>id;
        cout<<"price:";
        cin>>pr;
        tot=tot+pr;
    }
    void out()
    {
        cout<<"id:"<<id<<endl<<"price:"<<pr;
    }
    static void displaytotal()
    {
        cout<<"Total Bill:"<<tot;
    }
};
int Item::tot;
int main()
{
//    Item ob[5];
//    for(int i=0;i<5;i++)
//    {
//        ob[i].in();
//    }
//    for(int i=0;i<5;i++)
//    {
//        ob[i].out();
//    }
   Item::displaytotal();
    return 0;
}
*/
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
class Student: public Person
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
		//indata();
		cout<<endl<<"Enter the SSC Percentage: ";
		cin>>sper;
		cout<<endl<<"Enter the HSC Percentage: ";
		cin>>hper;
	}
	void input(char s[], int a, float p1, float p2)
	{
		//indata(s,a);
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
//	Student sob1;
//	sob1.input();
//	sob1.output();
//
//	Student sob2;
//	sob2.input("Kiran", 23, 78.45, 90.21);
//	sob2.output();
//
//	Student sob3("Mithun", 31, 89.67, 99.12);
//	sob3.output();

	Student ob4;
	ob4.indata();


	return 0;
}

















