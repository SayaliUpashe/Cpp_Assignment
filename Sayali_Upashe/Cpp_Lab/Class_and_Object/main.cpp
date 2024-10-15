///Class and Object:
///Class:
///Without Public:
/*
#include<iostream>
using namespace std;
class Student
{

    char name[30];
    int id;
    float mark;
};
int main()
{
    Student s;
    cout<<"Student name:"<<endl;
    cin>>s.name;
    cout<<"Student id and mark:"<<endl;
    cin>>s.id>>s.mark;
    cout<<"\n Student name:"<<s.name<<" \t id:"<<s.id<<" \t mark:"<<s.mark<<endl;
    return 0;
}
*/
///------------------------------------------------------------------------------------------------------------------------------------------------
///With Public:
/*
#include<iostream>
using namespace std;
class Student
{
    public:
    char name[30];
    int id;
    float mark;
};
int main()
{
    Student s;
    cout<<"Student name:"<<endl;
    cin>>s.name;
    cout<<"Student id and mark:"<<endl;
    cin>>s.id>>s.mark;
    cout<<"\n Student name:"<<s.name<<" \t id:"<<s.id<<" \t mark:"<<s.mark<<endl;
    return 0;
}
*/
///-----------------------------------------------------------------------------------------------------------------------------------
///Another Problem:
/*
#include<iostream>
using namespace std;
class student
{
    private:
        char name[30];
        int id;
        float mark;
    public:
        void input()
        {
            cout<<"Student name:"<<endl;
            cin>>name;
            cout<<"Student id and mark:"<<endl;
            cin>>id>>mark;
        }
        void display()
        {
            cout<<"\n Student name:"<<name<<" \t id:"<<id<<" \t mark:"<<mark<<endl;
        }
};
int main()
{
    student s;
    s.input();
    s.display();
    return 0;
}*/
///---------------------------------------------------------------------------------------------------------------------------
///Number OF Variables:
/*
#include<iostream>
using namespace std;
class student
{
    private:
        char name[30];
        int id;
        float mark;
    public:
        void input()
        {
            cout<<"Student name:"<<endl;
            cin>>name;
            cout<<"Student id and mark:"<<endl;
            cin>>id>>mark;
        }
        void display()
        {
            cout<<"\n Student name:"<<name<<" \t id:"<<id<<" \t mark:"<<mark<<endl;
        }


};
int main()
{
    student s;
    s.input();
    s.display();

    student s1;
    s1.input();
    s1.display();
    return 0;
}
*/
///---------------------------------------------------------------------------------------------------------------------------------
///Another Program:
/*
#include<iostream>
using namespace std;
class Item
{
    private:
       char name[50];
       int id;
       float pr;
    public :
        void input()
        {
            cout<<"Enter the  item name:"<<endl;
            cin>>name;
            cout<<"Enter id and prize:"<<endl;
            cin>>id>>pr;
        }
        void display()
        {
            cout<<"item name:\t"<<name<<"id :\t "<<id<<" item prize:\t"<<pr<<endl;
        }
};
int main()
{
    Item ob1,ob2,ob3;

    ob1.input();
    ob2.input();
    ob3.input();

    ob1.display();
    ob2.display();
    ob3.display();

    return 0;
}
*/
///----------------------------------------------------------------------------------------------------------------------------------------------
/*
#include<iostream>
#include<iomanip>
using namespace std;
class sport
{
    private :
        char name[40];
        char type[30];
        int nop;
    public:
        void set()
        {
            cout<<"Enter the sport name: "<<endl;
            fflush(stdin);
            cin.getline(name,40);
            cout<<"Enter the sport type(Individual/Group): "<<endl;
            fflush(stdin);
            cin.getline(type,30);
            cout<<"Enter the number of players: "<<endl;
            cin>>nop;
        }
        void show()
        {
            cout<<endl<<"  Sport Information  "<<endl;
            cout<<setw(20)<<name<<setw(20)<<type<<setw(15)<<nop;
        }

};
int main()
{
	sport s1,s2;

	cout<<"Enter the information of sport: "<<endl;
	s1.set();
	s2.set();

	s1.show();
	s2.show();

	return 0;
}
*/
///---------------------------------------------------------------------------------------------------------------------------------------------
///Program to input and display the exam details :
/*
#include<iostream>
using namespace std;
class Exam
{
    private:
        char exname[50];
        int seatno;
        int phy;
        int chem;
        int maths;
        int tot;
        double per;
    public:
        void setdata()
        {
            cout<<endl<<"Enter the exam name:"<<endl;
            cin>>exname;
            cout<<endl<<"Enter the seat no :"<<endl;
            cin>>seatno;
            cout<<endl<<"Enter the marks physics,chemistry,maths:"<<endl;
            cin>>phy>>chem>>maths;

            tot=phy+chem+maths;
            per=(phy+chem+maths)/3.0;
        }
        void showdata()
        {
            cout<<endl<<" Exam Name:"<<exname<<endl;
            cout<<endl<<"seat no:"<<seatno<<endl;
            cout<<endl<<" marks:"<<phy<<chem<<maths<<endl;
            cout<<endl<<" Total:"<<tot<<endl;
            cout<<endl<<" percentage:"<<per<<endl;
        }

};
int main()
{
    Exam s1,s2,s3;
    cout<<"Enter the Student Exam Information:"<<endl;
    s1.setdata();
    s2.setdata();
    s3.setdata();

    s1.showdata();
    s2.showdata();
    s3.showdata();

    return 0;

}
*/
///---------------------------------------------------------------------------------------------------------------------------------------
///Calling Member Function by Passing Values:
/*
#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class Exam
{
private:
    char exname[50];
    int seatno;
    int phy;
    int chem;
    int maths;
    int tot;
    int per;
public:
   void setdata(char e[],int sn,int p1,int c1,int m1)
   {
       strcpy(exname,e);
       seatno=sn;
       phy=p1;
       chem=c1;
       maths=m1;

       tot=phy+chem+maths;
       per=(phy+chem+maths)/3.0;

   }
   void showdata()
   {
       cout<<"Exam Name:"<<exname<<endl;
       cout<<"Seat no:"<<seatno<<endl;
       cout<<"Marks :"<<phy<<chem<<maths<<endl;
       cout<<"total:"<<tot<<endl;
       cout<<"percentage:"<<per<<endl;
   }

};
int main()
{
    cout<<"Enter the Student exam Information:"<<endl;
    char exname[50];
    cout<<"Enter the Exam name:"<<endl;
    cin>>exname;

    int seatno;
    cout<<"Enter the  seat no :"<<endl;
    cin>>seatno;

    int p,c,m;
    cout<<"Enter the marks in physics ,chemistry,maths :"<<endl;
    cin>>p>>c>>m;

    Exam s1,s2,s3;
    s1.setdata(exname,seatno,p,c,m);
    s1.showdata();

    s2.setdata(exname,seatno,p,c,m);
    s2.showdata();
    return 0;
}
*/
///----------------------------------------------------------------------------------------------------------------------------------------------
///Returning the value from member function:
/*
#include<iostream>
using namespace std;
class Number
{
    private:
        int no;
    public:
        void indata(int a)
        {

            no=a;

        }
        int outdata()
        {

            return no;
        }
        int getreverse()
        {

            int rev=0;
            int n=no;
            //int sum=0;
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
    Number nob1;
    int no;
    cout<<"Enter number:"<<endl;
    cin>>no;

    nob1.indata(no);
    int val=nob1.outdata();
    cout<<"Value is :"<<val<<endl;

    int r=nob1.getreverse();
    cout<<"Reverse is :"<<r<<endl;
    return 0;
}
*/
///------------------------------------------------------------------------------------------------------------------------------------------
///Nesting of Member Functions: One member function can call directly to another member function:
/*
#include<iostream>
using namespace std;
class Number
{
    private:
        int no;
    public:
        void indata(int a)
        {
            no=a;
        }
        int outdata()
        {
            //cout<<"Return is :"<<no<<endl;
            return no;
        }
        int getreverse()
        {
            int rev=0;
            int n=no;
            while(n!=0)
            {

                rev=(rev*10)+(n%10);
                n=n/10;
            }
            return rev;
        }
        char ispalindrome()
        {
            //int t=getreverse();//if(no==t)
            if(no==getreverse())
            {
                return 'y';
            }
            else
            {
                return 'n';
            }

        }

};
int main()
{
    Number nob1;
    int no;
    cout<<"Enter number :"<<endl;
    cin>>no;

    nob1.indata(no);//member function called which collects an argument - boxing
    //nob1.outdata();
    int val=nob1.outdata();//member function returning value - unboxing
    cout<<"Return Value:"<<val<<endl;

    int r=nob1.getreverse();
    cout<<"Reverse is :"<<r<<endl;

    char ch=nob1.ispalindrome();
    if(ch=='y')
    {
        cout<<"Number is Palindrome"<<endl;
    }
    else
    {
        cout<<"Number is not Palindrome"<<endl;
    }
    return 0;
}
*/
///---------------------------------------------------------------------------------------------------------------------------------------------------
///Array is Member Of Class:
/*
#include<iostream>
using namespace std;
class MyArray
{
    private:
        int arr[5];
    public:
        void in()
        {
            cout<<"Enter the five elements:"<<endl;
            for(int i=0;i<5;i++)
            {
                cin>>arr[i];
            }
        }
        void out()
        {
            cout<<"Display the array elements :"<<endl;
            for(int i=0;i<5;i++)
            {
                cout<<arr[i]<<endl;
            }
        }

};
int main()
{
    MyArray ob,ob1;
    ob.in();
    ob.out();
    ob1.in();
    ob1.out();
    return 0;
}
*/
///---------------------------------------------------------------------------------------------------------------------------
///Array Of Object:It is collection Of object:
/*
#include<iostream>
using namespace std;
class Item
{
    private:
        int id;
        float pr;
    public:
        void in()
        {
            cout<<"Enter the id :"<<endl;
            cin>>id;
            cout<<"Enter the price:"<<endl;
            cin>>pr;
        }
        void out()
        {
            cout<<"id:"<<id<<"\t price:"<<pr<<endl;
        }

};
int main()
{
    Item arr[5];
    cout<<"Enter the Object of five item:"<<endl;
    for(int i=0;i<5;i++)
    {
        arr[i].in();
    }
    cout<<"............Display Item..............."<<endl;
    for(int i=0;i<5;i++)
    {
        arr[i].out();
    }
    return 0;
}
*/
///-----------------------------------------------------------------------------------------------------------------------------------------
///Another Program:
/*
#include<iostream>
#include<iomanip>
using namespace std;
class MyArray
{
	private:
	int arr[10];
	public:
	void in()
	{
	    cout<<"Enter the array elements:"<<endl;
	    for(int i=0;i<5;i++)
	    {
	        cin>>arr[i];
	    }
	}
	void out()
	{
	    cout<<"Display the array elements:"<<endl;
	    for(int i=0;i<5;i++)
        {
            cout<<setw(5)<<arr[i];
        }
	}
	void search(int no)
	{
	    int i,pos=-1;
	    for(int i=0;i<5;i++)
        {
            if(arr[i]==no)
            {
                 pos=i;
                break;
            }
        }
	    if(pos>=0)
        {
            cout<<"Number is present at"<<pos<<"Position and number"<<no;
        }
        else
        {
            cout<<"Number is not present "<<endl;
        }
	}
	void sort()
	{
	    int tmp;

	    for(int i=0;i<4;i++)
        {
            for(int j=i+1;j<5;j++)
            {
                if(arr[j]<arr[i])
                {
                    tmp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=tmp;
                }
            }
        }
        cout<<endl<<"Sort elements :"<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<setw(10)<<arr[i];
        }
	}
	int* evencount()
	{
	    int cnt=0;
	    int ev[5];
	    for(int i=0;i<5;i++)
        {
            if(arr[i]%2==0)
            {
                //ev[cnt]=arr[i];
                //cnt++;
                return arr;
            }
        }
       // return ev;
	}
};
int main()
{
    MyArray ob;
    ob.in();
    ob.out();

    int no;
    cout<<endl<<"Enter the number:"<<endl;
    cin>>no;
    ob.search(no);

    ob.sort();


    int *s=ob.evencount();
    cout<<endl<<"Even Elements:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<setw(5)<<s[i];
    }
    return 0;
}
*/
///--------------------------------------------------------------------------------------------------------------------------------------------------
///Defining private Member Function:
/*
#include<iostream>
using namespace std;
class MyArray
{
    private:
        int x[5];
        int Findmax()
        {
            int max=0;
            for(int i=0;i<5;i++)
            {
                if(x[i]>max)
                {
                    max=x[i];
                }
            }
            return max;
        }
    public:
        void in()
        {
            cout<<endl<<"Enter Five elements:";
            for(int i=0;i<5;i++)
            {
                cin>>x[i];
            }
        }
        void out()
        {
            cout<<endl<<"Display Five Elements :";
            for(int i=0;i<5;i++)
            {
                cout<<endl<<x[i];
            }
            cout<<endl<<"Max is :"<<Findmax();

        }
        //cout<<"Max is :"<<max;:Show error cause not write the function out of member function
};
int main()
{
    MyArray Ob;
    Ob.in();
    Ob.out();
    return 0;
}
*/
///------------------------------------------------------------------------------------------------------------------------------------------------------
///Another Program:
/*
#include<iostream>
using namespace std;
class Item
{
    private:
        int id;
        int price;
    public:
        void in()
        {
            cout<<endl<<"Enter the Id:"<<endl;
            cin>>id;
            cout<<endl<<"Enter the item price:"<<endl;
            cin>>price;
        }
        void out()
        {
            cout<<"Id "<<id<<" \t Price"<<price;
        }
        int getprice()
        {
            return price;
        }
};
int main()
{
    Item item1,item2,item3;
    item1.in();
    item1.out();
    int pr=item1.getprice();

    item2.in();
    item2.out();
    int sr=item2.getprice();

    item3.in();
    item3.out();
    int cr=item3.getprice();
/*
    int total=0;
    total=total+pr;
    cout<<endl<<"Total is :"<<total;

    int total1=0;
    total1=total1+sr;
    cout<<endl<<"Total is :"<<total1;

    int total2=0;
    total2=total2+cr;
    cout<<endl<<"Toatl is :"<<total2;

    int sum=0;
    sum=sum+total+total1+total2;
    cout<<endl<<"Sum is:"<<sum;
*//*
    int total=0;
    total=total+pr+sr+cr;
    cout<<endl<<"Total is:"<<total;
    return 0;
}
*/
///--------------------------------------------------------------------------------------------------------------------------------------
/// Here in this program we have to write a function in a private section, to calculate the total bill.
/// In a simple way, it can solved using public member function as shown below:
/*
#include <iostream>
#include <iomanip>
using namespace std;
class Item
{
	int id;
	int price;
	public:
	void input()
	{
		cout<<endl<<"Enter the id: ";
		cin>>id;

		cout<<endl<<"Enter the price: ";
		cin>>price;
	}
	void display()
	{
		cout<<endl<<"ID: "<<id<<"\t Price: "<<price;
	}
	int getprice()
	{
		return price;
	}
};
int main()
{
	// decl.
	Item ar[5];

	// input
	cout<<endl<<"Enter the price of five items: ";
	for(int i=0;i<5;i++)
	{
		ar[i].input();
	}

	// display
	cout<<endl<<"....Item List....."<<endl;
	for(int i=0;i<5;i++)
	{
		ar[i].display();
	}

	// find total bill
	int total=0;
	for(int i=0 ; i<5; i++)
	{
		total = total + ar[i].getprice();
	}
	cout<<endl<<"Total Bill: "<<total;
	return 0;
}
*/
///---------------------------------------------------------------------------------------------------------------------------------------------------------
/// But we want to use the private member function:
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
		cout<<endl<<"Enter the id: ";
		cin>>id;

		cout<<endl<<"Enter the price: ";
		cin>>price;
	}
	void out()
	{
		cout<<endl<<"ID: "<<id<<"\t Price: "<<price;
	}
	int getitemprice()
	{
	    return getprice();
	}
};
int main()
{
    Item ar[5];
    cout<<endl<<"Object of Item";
    for(int i=0;i<5;i++)
    {
        ar[i].in();
    }

    cout<<endl<<".......Item List.......";
    for(int i=0;i<5;i++)
    {
        ar[i].out();
    }

    int total=0;
    for(int i=0;i<5;i++)
    {
        total=total+ar[i].getitemprice();
    }
    cout<<endl<<"Total is :"<<total;

    return 0;
}
*/
///------------------------------------------------------------------------------------------------------------------------------
/// Using static data members and static member functions
/// static data member:
/*
#include<iostream>
using namespace std;
class Student
{
private:
    int id;
    int marks;
    static int tot;
public:
    void in()
    {
        cout<<endl<<"Enter the ID:";
        cin>>id;
        cout<<endl<<"Enter the marks:";
        cin>>marks;
        tot=tot+marks;
    }
    void out()
    {
        cout<<endl<<"Id:"<<id;
        cout<<endl<<"marks:"<<marks;
    }
    void total()
    {
        cout<<endl<<"Total Bill:"<<tot;
    }
};
int Student::tot;
int main()
{
    Student s[5];
    cout<<endl<<"Student list:";
    for(int i=0;i<5;i++)
    {
        s[i].in();
    }
    cout<<endl<<"Display List:";
    for(int i=0;i<5;i++)
    {
        s[i].out();
    }
    s[0].total();
    return 0;

}
*/
///-----------------------------------------------------------------------------------------------------------------------------------
/// Using static Member function with is class:
/*
#include<iostream>
using namespace std;
class Student
{
private:
    int id;
    int marks;
    static int tot;
public:
    void in()
    {
        cout<<endl<<"Enter the ID:";
        cin>>id;
        cout<<endl<<"Enter the marks:";
        cin>>marks;
        tot=tot+marks;
    }
    void out()
    {
        cout<<endl<<"Id:"<<id;
        cout<<endl<<"marks:"<<marks;
    }
    static void total()
    {
        cout<<endl<<"Total Bill:"<<tot;
    }
};
int Student::tot;
int main()
{
    Student s[5];
    cout<<endl<<"Student list:";
    for(int i=0;i<5;i++)
    {
        s[i].in();
    }
    cout<<endl<<"Display List:";
    for(int i=0;i<5;i++)
    {
        s[i].out();
    }
    s[0].total();
    Student::total();//Outside of class ....if call the function with class name thats way use ::
    return 0;
}
*/
///----------------------------------------------------------------------------------------------------------------------------------------------------
///Another purpose of using static method:
/*
#include<iostream>
using namespace std;
class Demo
{
    private:
    //static int no;
    public:
       static int no;
       static int geteven(int n)
        {
            return n%2;
        }

};
int Demo::no=100;
int main()
{
    cout<<Demo::no;//without create the object memory will create just show on this example

    int x;
    cout<<endl<<"Enter the value of x: ";
    cin>>x;

    if(Demo::geteven(x)==0)
    {
        cout<<endl<<"Number is even";
    }
    else
    {
        cout<<endl<<"Number is Odd";
    }

    return 0;

}
*/
///----------------------------------------------------------------------------------------------------------------------------------------------
/// User defined MyArray class to represent the array as an object and with some predefined functionalities:
/*
#include <iostream>
#include <iomanip>
using namespace std;
class MyArray
{
	private:
	int arr[10];
	public:
	void in()
	{
		cout<<endl<<"Enter any 10 nos: ";
		for(int i=0;i<10;i++)
		{
			cin>>arr[i];
		}
	}
	void out()
	{
		cout<<endl<<"Array Elements are: ";
		for(int i=0;i<10;i++)
		{
			cout<<setw(6)<<arr[i];
		}
	}
	void search(int no)
	{
	    int i;
		for(i=0;i<10;i++)
		{
			if(arr[i]==no)
			{
				break;
			}
		}
		if(i==10)
			cout<<endl<<"Number is not present";
		else
			cout<<endl<<"Number is present at "<<(i+1)<<" position";
	}
};
int main()
{
	MyArray ob;

	ob.in();
	ob.out();

	cout<<endl<<"Enter the number to be searched: ";
	int n;
	cin>>n;
	ob.search(n);

	return 0;
}
*/
///----------------------------------------------------------------------------------------------------------------------------------
///Passing an array as an argument to member function:
/*
#include <iostream>
#include <iomanip>
using namespace std;
class MyArray
{
	private:
	int arr[10];
	public:
	void in()
	{
		cout<<endl<<"Enter any 10 nos: ";
		for(int i=0;i<10;i++)
		{
			cin>>arr[i];
		}
	}
	void in(int t[])
	{
		for(int i=0;i<10;i++)
		{
		    arr[i]=t[i];//assign the value
		}
	}
	void out()
	{
		cout<<endl<<"Array Elements are: ";
		for(int i=0;i<10;i++)
		{
			cout<<setw(5)<<arr[i];
		}
	}
};
int main()
{
	MyArray ob;
	ob.in();
	ob.out();

	int nos[]={1,2,3,4,5,6,7,8,9,};
	MyArray ob1;
	ob1.in(nos);
	ob1.out();
	return 0;
}
*/
///-----------------------------------------------------------------------------------------------------------------------------------------
///Pointer as a member of class:
/*
#include<iostream>
#include<iomanip>
using namespace std;
class Myptr
{
    private:
        int *p;
        int cnt;
    public:
        void in()
        {
            cout<<endl<<"Enter the count:";
            cin>>cnt;
            p=new int[cnt];
            cout<<endl<<"Enter the"<<cnt<<"Nos:";
            for(int i=0;i<cnt;i++)
            {
                cin>>*(p+i);
            }
        }
        void out()
        {
            cout<<endl<<"Display the count element:";
            for(int i=0;i<cnt;i++)
            {
                cout<<setw(5)<<*(p+i);
            }
        }
        void in(int cn)
        {
            cnt=cn;
            p=new int[cnt];
            cout<<"\n Enter the "<<cnt<<" nos: ";
            for(int i=0;i<cnt;i++)
            {
                cin>>*(p+i);
            }
        }
};
int main()
{
    Myptr pob;
    pob.in();
    pob.out();

    Myptr pob1;
    int c;
    cout<<endl<<"Enter the count elements:";
    cin>>c;
    pob1.in(c);
    pob1.out();
    return 0;
}
*/
///--------------------------------------------------------------------------------------------------------------------------------
///Passing the object as an argument to member function:
/*
#include<iostream>
using namespace std;
class Time
{
private:
    int hh;
    int mm;
    int ss;
public:
    void intime()
    {
        cout<<endl<<"Enter Hours,Minute,Second:";
        cin>>hh>>mm>>ss;

    }
    void outtime()
    {
        cout<<endl<<"Time is :"<<hh<<":"<<mm<<":"<<ss;

    }
    void addtime(Time ob)
    {
        Time tmp;

        tmp.ss=ss+ob.ss;
        tmp.mm=mm+ob.mm+(tmp.ss/60);
        tmp.ss=(tmp.ss%60);

        tmp.hh=hh+ob.hh+(tmp.mm/60);
        tmp.mm=tmp.mm%60;

        cout<<endl<<"Time Addition:";
        tmp.outtime();

    }
};
int main()
{
    Time t1;
    t1.intime();
    t1.outtime();

    Time t2;
    t2.intime();
    t2.outtime();

    t1.addtime(t2);
}
*/
///--------------------------------------------------------------------------------------------------------------------------------------------------------
///Another Program:
/*
#include<iostream>
using namespace std;
class Time
{
private:
    int hh;
    int mm;
    int ss;
public:
    void intime()
    {
        cout<<endl<<"Enter Hours,Minute,Second:";
        cin>>hh>>mm>>ss;

    }
    void outtime()
    {
        cout<<endl<<"Time is :"<<hh<<":"<<mm<<":"<<ss;

    }
    Time addtime(Time ob)
    {
        Time tmp;
         tmp.ss=ss+ob.ss;
         tmp.mm=mm+ob.mm+(tmp.ss/60);
         tmp.ss=tmp.ss%60;

         tmp.hh=hh+ob.hh+(tmp.mm/60);
         tmp.mm=tmp.mm%60;

         return tmp;
    }
};
int main()
{
    Time t1,t2;
    t1.intime();
    t1.outtime();

    t2.intime();
    t2.intime();

    t1.addtime(t2);
    Time t3=t1.addtime(t2);
    cout<<endl<<"Time addition is :";
    t3.outtime();
    return 0;
}
*/
///----------------------------------------------------------------------------------------------------------------------------------------------
///Write a program to perform the following operation on the complex nos, where the user defined class
/// Complex represents complex number:
/*
#include<iostream>
using namespace std;
class Complex
{
private :
    int real;
    float img;
public:
    void in()
    {
        cout<<endl<<"Enter the Real and Img numbers:";
        cin>>real>>img;

    }
    void out()
    {
        cout<<endl<<"Real:"<<real<<"+i"<<"img:"<<img;
    }
    void addcomplex(Complex a,Complex b)
    {
        real=a.real+b.real;
        img=a.img+b.img;
    }

};
int main()
{
    Complex c1,c2,c3;

    c1.in();
    c1.out();

    c2.in();
    c2.out();

    c3.addcomplex(c1,c2);
    cout<<endl<<"Addition is:";
    c3.out();
    return 0;
}
*/
///---------------------------------------------------------------------------------------------------------------------------------------------------
///Using this keyword: Note carefully that when we pass an object as an argument to the member
/// function of class, there is one implicit pointer known as "this" which always refers to invoking
/// object.(Means Object for which member function is invoked(call )
/*
#include<iostream>
using namespace std;
class Person
{
    int uid;
    int age;
public:
    void in()
    {
        cout<<endl<<"Enter uid and age:";
        cin>>uid>>age;
    }
    void out()
    {
        cout<<endl<<"uid:"<<uid<<"age:"<<age;
    }
    Person findelder(Person p)
    {
        if(p.age>this.age)
        {
            return p;
        }
        else
        {
            return *this;
        }
    }
};
int main()
{
    Person p1,p2,p3;

    p1.in();
    p1.out();

    p2.in();
    p2.out();

    p3=p1.findelder(p2);
    cout<<endl<<"Elder Person details: ";
	cout<<endl<<"Person: ";	p3.out();

	return 0;
}
*/
///---------------------------------------------------------------------------------------------------------------------------------------------------------
///Another Program:
/*
#include <iostream>
using namespace std;
class Person
{
    private:
	int uid;
	int age;
    public:
	void indata(int uid, int age)
	{
	    //p1         p2
        this->uid = uid;
        this->age = age;
	}
	void outdata()
	{
		cout<<"uid : "<<uid<<"Age: "<<age;
	}
	Person findelder( Person a)
	{
		if(a.age>age)
			return a;
		else
			return *this;
	}
};
int main()
{
	Person p1, p2, p3;
    int a, b;

    cout<<endl<<"Enter the uid and Age: ";
	cin>>a>>b;
	p1.indata(a,b);

    cout<<endl<<"Enter the uid and Age: ";
	cin>>a>>b;
	p2.indata(a,b);

	p3=p1.findelder(p2);

	cout<<endl<<"Person P1: ";	p1.outdata();
	cout<<endl<<"Person P2: ";	p2.outdata();

	cout<<endl<<"Elder Person details: ";
	cout<<endl<<"Person: ";	p3.outdata();

	return 0;
}
*/
///----------------------------------------------------------------------------------------------------------------
///Friend Function:
/*
#include<iostream>
using namespace std;
class Number
{
private:
    int x;
    int y;
public:
    void in()
    {
        cout<<endl<<"Enter the Two Numbers:";
        cin>>x>>y;
    }

};
void out
int main()
{
    Number nob;
    nob.in();
    nob.out();
    return 0;
}
*/
///=========================================================================================================================================================
///-----------------------------------------Constructor----------------------------------------------------------------------------------------------------
///Default Constructor:Constructor with no arguments:
/*
#include<iostream>
using namespace std;
class Demo
{
private:
    int x;
    int y;
public:
    Demo()
    {
      x=10;
      y=10;
    }
//    void in()
//    {
//        cout<<"Enter the values of x and y:"<<endl;
//        cin>>x>>y;
//    }
    void out()
    {
        cout<<endl<<"x:"<<x<<endl<<"y:"<<y;
    }

};
int main()
{
    Demo ob1;//not call input function without input function constructor display
               // default value or not pass any argument
    ob1.out();

//ob1.in();
   // ob1.out();
    return 0;
}
*/
///--------------------------------------------------------------------------------------------------------------------------------------------------------
///Defining Constructor Outside Of Class:
/*
#include<iostream>
using namespace std;
class Demo
{
private:
    int x;
    int y;
public:
    Demo();
    void out()
    {
        cout<<"x:"<<x<<"y:"<<endl<<y<<endl;
    }
};
Demo::Demo()//class name::function name
{
    cout<<"Default Constructoi"<<endl;
    x=10;
    y=10;
}
int main()
{
    Demo ob1;
    ob1.out();
    return 0;
}
*/
///-------------------------------------------------------------------------------------------------------------------------------------------------------
///Parameterised Constructor:Constructor which collect an arguments:
/*
#include<iostream>
using namespace std;
class Demo
{
private:
    int x;
    float y;
    double z;
public:
    Demo()//Default
    {
        cout<<"Default Constructor"<<endl;
        x=1;
        y=2;
        z=3;
       //cout<<"x:"<<x<<endl<<"y:"<<y<<endl<<"z:"<<z;//Its excuate
    }
    Demo( int a)
    {
        cout<<endl<<"Parameter 1"<<endl;
        x=a;
        y=a;
        z=a;
    }
    Demo(int a ,float b,double e=2.20)
    {
        cout<<endl<<"Parameter 2"<<endl;
        x=a;
        y=b;
        z=e;
    }
    void out()
    {
        cout<<"x:"<<x<<endl<<"y:"<<y<<endl<<"z:"<<z;
    }
};
int main()
{
    Demo ob;
    ob.out();

    int a=10;
    float b=20.45;
    double c=30;

    Demo ob1(a);
    ob1.out();

    Demo ob2(a,b);
    ob2.out();

//    Demo ob3(a,b);//Ambiguous Error because compiler will confuse which function will call cause you already
 //       ob3.out(); // call passing two argument and one is default argument and  again you pass two argument to
                    //next function of Demo(ob3) (error is call overloaded)
    return 0;

}
*/
///--------------------------------------------------------------------------------------------------------------------------------------------------------
///Copy Constructor:
/*
#include<iostream>
using namespace std;
class Demo
{
private:
    int x;
    float y;
    double z;
public:
    Demo()
    {
        cout<<"Default Constructor"<<endl;
        x=1;
        y=2;
        z=3;
    }
    Demo(int a,float b,double c)
    {
        cout<<"Parameter Constructor"<<endl;
        x=a;
        y=b;
        z=c;
    }
    Demo(Demo &t)
    {
        cout<<"Copy Constructor"<<endl;
        x=t.x;
        y=t.y;
        z=t.z;

    }
    void out()
    {

        cout<<"x:"<<x<<endl<<"y:"<<y<<endl<<"z:"<<z<<endl;
    }
};
int main()
{
    Demo ob;//input
    ob.out();

    Demo ob2(11,12.12,12.20);//input
    ob2.out();

    Demo ob3(ob2);
    ob3.out();
    return 0;
}
*/
///--------------------------------------------------------------------------------------------------------------
///Passing Default Arguments:
/*
#include<iostream>
using namespace std;
class Demo
{
private:
    int x;
    float y;
    double z;
public:
    Demo()
    {
        cout<<"default argument"<<endl;
        x=10;
        y=20;
        z=30;
    }
    Demo(int a,float b)
    {
        cout<<endl<<"Parameter 1"<<endl;
        x=a;
        y=b;


    }
    Demo(int a,float b,double c=50)
    {
       cout<<endl<<"parameter 2"<<endl;
        x=a;
        y=b;
        z=c;
    }
    void out()
    {
        cout<<"x"<<x<<endl<<"y"<<y<<endl<<"z"<<z;
    }
};
int main()
{
    Demo ob1;
    ob1.out();

    Demo ob2(11,12.12);
    ob2.out();

    Demo ob3(1,2.2);
    ob3.out();
    return 0;

}
*/
///========================================================================================================================================================
///Destructor:
/*
#include<iostream>
using namespace std;
class Demo
{
private:
    int x;
    int y;
public:
    Demo()
    {
        cout<<endl<<"object is created"<<endl;
        x=10;
        y=10;
    }
    ~Demo()
    {
        cout<<endl<<"object is deleted"<<endl;
    }
};
int main()
{
    Demo ob1;
    return 0;
}
*/
///--------------------------------------------------------------------------------------------------------------------------------------------------------
///========================================================================================================================================================
///Dynamic Constructor:
/*
#include<iostream>
using namespace std;
class Demo
{
private:
    int *p;
    int ec;
public:
    Demo()
    {
        p=new int[5];
        ec=5;
        for(int i=0;i<5;i++)
        {
            cin>>*(p+i);
        }
        cout<<"Object is created"<<endl;
    }
    void out()
    {
        cout<<endl<<"Elements are:"<<endl;
        for(int i=0;i<ec;i++)
        {
            cout<<*(p+i);
        }
    }
    ~Demo()
    {
        delete p;
    }

};
int main()
{
    Demo ob1;
    ob1.out();
    return 0;

}
*/
///------------------------------------------------------------------------------------------------------------------------------------------------------
///Another Program:
/*
#include<iostream>
using namespace std;
class Demo
{
private:
    static int cnt;
public:
    Demo()
    {
        cnt++;
        cout<<"Object"<<cnt<<"created"<<endl;
    }
    ~Demo()
    {
        cout<<"Object"<<cnt<<"is deleted"<<endl;
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
    cout<<"End of Program"<<endl;
    return 0;
}
*/
///=========================================================================================================================================================
///-----------------------------------------Initialization List--------------------------------------------------------------------------------------------
///Simple Program:
/*
#include<iostream>
using namespace std;
class Sample
{
private:
     int y;
     int x;
public:
    Sample():x(10),y(30)
    {
//        cout<<endl<<"Default Constructor"<<endl;
//        cout<<"x"<<x;
    }
//    Sample(int a):x(a)
//    {
////        cout<<endl<<"Parametrized Constructor"<<endl;
////        cout<<"x"<<x
//    }
    void out()
    {
        cout<<"x:"<<x<<"y"<<y;
    }
};
int main()
{
    Sample ob1;
    ob1.out();

//    int a=20;
//    Sample ob2(a);
//    ob2.out();

    return 0;
}
*/
///---------------------------------------------------------------------------------------------------------------------------------------------------------
///Constant Declaration:
/*
#include<iostream>
using namespace std;
class Sample
{
     const int x;
 public:
    Sample():x(10)//Initilization
    {
        cout<<"Default Constructor"<<endl;
    }
    Sample(int a):x(a)
    {
        cout<<endl<<"Parametrized Constructor"<<endl;

    }
    void out()
    {
        cout<<endl<<"x:"<<x;
    }
};
int main()
{
    Sample ob1;
    ob1.out();

    int a=20;
    Sample ob2(a);
    ob2.out();

    return 0;
}
*/
///--------------------------------------------------------------------------------------------------------------------------------------------------------
///Multiple Initialization :
/*
#include<iostream>
using namespace std;
class Sample
{
private :
    int x;
    float y;
    double z;
public:
    Sample():x(10),y(2.2),z(2.5)
    {
        cout<<"Default Constructor";
    }
    Sample(int a,float b,double c):x(a),y(b),z(c)
    {
        cout<<endl<<"Parameterized Constructor"<<endl;
    }
    Sample(Sample &a):x(a.x),y(a.y),z(a.z)
    {
        cout<<endl<<"Copy Constructor"<<endl;
    }
    void out()
    {
        cout<<"x:"<<x<<endl<<"y:"<<y<<endl<<"z:"<<z;
    }
};
int main()
{
    Sample ob1;
    ob1.out();


    Sample ob2(10,10.20,2.2);
    ob2.out();

    Sample ob3(ob2);
    ob3.out();

    return 0;
}
*/
///=========================================================================================================================================================
///Constant Object and Constant Function:
/*
#include<iostream>
using namespace std;
class Sample
{
    int x;
    int y;
public:
    Sample():x(10),y(20)
    {
        cout<<"Default Constructor";
       // cout<<"x:"<<x<<endl<<"y:"<<y;
    }
    Sample(int a,int b):x(a),y(b)
    {
        cout<<endl<<"Parametrized constructor";
        //cout<<"x:"<<x<<endl<<"y:"<<y;
    }
    void modify(int a)
    {
        cout<<"modify constructor";
        x=a;
        y=a;
    }
    void out()const
    {
       //x=11;//will generate an error coz the object is constant
        cout<<"x:"<<x<<endl<<"y:"<<y;
    }

};
int main()
{
    const Sample ob1;//constant object
    ob1.out();

    const Sample ob2(100,500);//object constant
    ob2.out();

    ob3.modify(111);//will generate an error coz the object is constant
    ob3.out();

    return 0;
}
*/
///--------------------------------------------------------------------------------------------------------------------------------------------------------
///Another Example:
/*
#include <iostream>
using namespace std;
class MyClass {
private:
    int data;
public:
    // Constructor to initialize the object
    MyClass(int value) : data(value)
    {

    }
    // Non-const member function (can modify the object)
    void setData(int value) {
        data = value;
    }

    // Const member function (cannot modify the object)
    int getData() const {
        return data;
    }

    // Non-const member function (can modify the object)
    void display() {
        cout << "Data (modifiable): " << data << endl;
    }

    // Const member function (cannot modify the object)
    void display() const {
        cout << "Data (non-modifiable): " << data << endl;
    }
};

int main() {
    // Normal object
    MyClass obj(10);

    // You can modify the normal object
    obj.setData(20);
    obj.display();  // Output: Data (modifiable): 20

    // Const object
    const MyClass constObj(30);

    // You cannot modify a const object
    //constObj.setData(40); // Error: Cannot call non-const member function on a const object

    // You can only call const member functions on a const object
    cout << "Data from const object: " << constObj.getData() << endl;  // Output: Data from const object: 30

    // Calling display() on a const object will invoke the const version
    constObj.display();  // Output: Data (non-modifiable): 30

    return 0;
}
*/
///=========================================================================================================================================================
//----------------------------------------Operator Overloading----------------------------------------------------------------------------------------------
///=========================================================================================================================================================
///Simple Example:
/*
#include<iostream>
using namespace std;
class Test
{
private:
public:
    void operator-()
    {
        cout<<"In operator<op>Function"<<endl;
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
*/
///--------------------------------------------------------------------------------------------------------------------------------------------------------
///Performing Unary Operation:
/// overloading : operator to get opposite value of an object:
/*
#include<iostream>
using namespace std;
class Number
{
private:
    int x;
    int y;
public:
    Number()
    {
        cout<<"Default Constructor"<<endl;
        x=10;//-10
        y=20;//-20
    }
    Number(int a,int b)
    {
        cout<<"Parameterized Constructor:"<<endl;
        x=a;
        y=b;
    }
//    void in()
//    {
//        cout<<"Enter the value x and y:"<<endl;
//        cin>>x>>y;
//    }
    void out()
    {
        cout<<"x:"<<x<<endl<<"y:"<<y<<endl;
    }
    void operator-()
    {
        cout<<"In Operator-()Function"<<endl;
        x=-x;
        y=-y;
    }
};
int main()
{
    Number n1;//Default Constructor
    n1.out();

    Number n2(2,2);//Parameterized Constructor
    n2.out();

    -n1;//Indirectly it called as n1.operator-()
    n1.out();
    cout<<"N1:"<<endl;
    return 0;
}
*/
///========================================================================================================================================================
/// overloading - operator to get an object multi by 10:
/*
#include<iostream>
using namespace std;
class Number
{
private:
    int x;
    int y;
public:
    Number()
    {
        cout<<"Default Constructor:"<<endl;
        x=5;
        y=-10;
    }
    Number(int a,int b)
    {
        cout<<"Parameterized Constructor"<<endl;
        x=a;
        y=b;
    }
    void out()
    {
        cout<<"x:"<<x<<endl<<"y:"<<y<<endl;
    }
    void operator-();
};
void Number::operator-()
{
    cout<<"In Operator<op>Function"<<endl;
    x=-x*10;
    y=-y*10;
}
int main()
{
    Number n1;
    n1.out();

    Number n2(1,2);
    n2.out();


    -n1;
    n1.out();
    return 0;
}
*/
///=========================================================================================================================================================
///Overloading unary operator as a friend:
/*
#include<iostream>
using namespace std;
class Number
{
private:
    int x;
    int y;
public:
    Number()
    {
        cout<<"Default Constructor:"<<endl;
        x=10;
        y=-10;
    }
    Number(int a,int b)
    {
        cout<<endl<<"Parameterized Constructor"<<endl;
        x=a;
        y=b;
    }
    void out()
    {
        cout<<"x:"<<x<<endl<<"y:"<<y<<endl;
    }
    friend void operator-(Number&);
};
void operator-(Number &t)
{
    cout<<"In Operator<op>Function"<<endl;
    t.x=-t.x;
    t.y=-t.y;
}
int main()
{
    Number n1;
    n1.out();

    Number n2(n1);
    n2.out();
    -n1;
    n1.out();
    return 0;
}
*/
///========================================================================================================================================================
///---------------------------------------Overloading Binary Operator--------------------------------------------------------------------------------------
///Overloading Binary operator to join two strings:(+)
/*
#include<iostream>
#include<string.h>
using namespace std;
class Mystring
{
private:
    char *s;
public:
    int length;
    Mystring()//default constructor
    {
        length=0;
        s=NULL;
    }
    Mystring(char *t)//Parametrized Constructor
    {
        length=strlen(t);
        s=new char[length+1];//cause null(\0) string included thats way increase+1
        strcpy(s,t);
    }
    char* getstring()
    {
        return s;
    }
    friend Mystring operator+(Mystring t1,Mystring t2);

};
Mystring operator+(Mystring t1,Mystring t2)
{
    Mystring tmp;
    tmp.length=strlen(t1.s)+ strlen(t2.s);
    tmp.s=new char[tmp.length+1];
    strcpy(tmp.s,t1.s);
    strcat(tmp.s,t2.s);
    return tmp;

}
int main()
{
    Mystring str1("good day");
    Mystring str2(" how are you");

    cout<<endl<<"String 1:"<<str1.getstring();
    cout<<endl<<"String 2:"<<str2.getstring();

    Mystring str3;
    str3=str1+str2;  //indirectly called as operator+(str1, str2)
    cout<<endl<<"String 3:"<<str3.getstring();

    cout<<endl<<"Length of str1:"<<str1.length;
    cout<<endl<<"Length of str2:"<<str2.length;
    cout<<endl<<"Length of str3:"<<str3.length;

    return 0;
}
*/
///-------------------------------------------------------------------------------------------------------------------------------------------------------
///Now lets see when Binary operator overloading using friend is preferred.
///lets add two complex numbers using overloading + operator
/*
#include<iostream>
using namespace std;
class Complex
{
private:
    int img;
    int real;
public:
    void getComplexNo()
    {
        cout<<"Enter the real part:"<<endl;
        cin>>real;
        cout<<"Enter the img part:"<<endl;
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
    c2.getcomplexNo();

    c3=c1+c2;//Indirectly call is c1.operator+(c2)

    cout<<"C1 is:"<<endl<<c1.showComplexno();
    cout<<"C2 is:"<<endl<<c2.showComplexno();
    cout<<"C3 is:"<<endl<<c3.showComplexno();

    return 0;
}
*/
///========================================================================================================================================================
///Using Another Way to solve complex number:c3=10+c2
/*
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
*/
///=========================================================================================================================================================
///---------------------------------Types Conversion---------------------------------------------------------------------------------------------------------
///=========================================================================================================================================================
/*
#include<iostream>
using namespace std;
class React;//forward declaration just know the compiler which class have you define
class Square
{
private:
    int side;
public:
    Square()//Default Constructor
    {
        side=0;
    }
    Square(int t)//collect here...Parameterized Constructor
    {
        side=t;
    }
    int area()
    {
        return(side*side);
    }
    friend class React;
};
class React
{
private:
    int l;//length
    int b;//breadth
public:
    React()//default Constructor
    {
        l=b=0;
    }
    React(Square t)//copy constrcutor
    {
        l=b=t.side;

    }
    int area()
    {
        return(l*b);
    }
};
int main()
{
    int n=5;
    Square s1(n);//base type conversion to class type
    int a=s1.area();//class type conversion to base type
    cout<<"Area of Square:"<<a<<endl;

    React r1(s1);//Class type to another class type
    int r=r1.area();
    cout<<"Area of Reactangle:"<<r<<endl;

    return 0;
}
*/
///=========================================================================================================================================================
//----------------------------------------------Inheritance-------------------------------------------------------------------------------------------------
///=========================================================================================================================================================
///Single Inheritance:Public Visitibility
/*
#include<iostream>
using namespace std;
class A
{
private:
    int x;
public:
    void in()
    {
        cout<<"Enter the value of x:"<<endl;
        cin>>x;
    }
    void out()
    {
        cout<<"x:"<<x;
    }
};
class B
{
private:
    int y;
public:
    void set()
    {
        cout<<endl<<"Enter the value of y:"<<endl;
        cin>>y;
    }
    void show()
    {
        cout<<"y:"<<y<<endl;
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
*/
///=========================================================================================================================================================
///Single Inheritance:  public Visibility - calling inherited functions in a nested manner
/*
#include<iostream>
using namespace std;
class A
{
private:
    int x;
public:
    void in()
    {
        cout<<"Enter the value of x:"<<endl;
        cin>>x;
    }
    void out()
    {
        cout<<"x:"<<x;
    }
};
class B:public A
{
private:
    int y;
public:
    void set()
    {
        in();
        cout<<endl<<"Enter the value of y:"<<endl;
        cin>>y;
    }
    void show()
    {
        out();
        cout<<"y:"<<y;
    }
};
int main()
{
    B ob1;
    ob1.set();
    ob1.show();
    return 0;
}
*/
///=========================================================================================================================================================
///Single Inheritance:public Visibility-calling inherited functions directly using child class object
/*
#include<iostream>
using namespace std;
class A
{
private:
    int x;
public:
    void in()
    {
        cout<<"Enter the value of x:"<<endl;
        cin>>x;
    }
    void out()
    {
        cout<<"x:"<<x;
    }
};
class B:public A
{
private:
    int y;
public:
    void set()
    {
        cout<<endl<<"Enter the value of y:"<<endl;
        cin>>y;
    }
    void show()
    {
        cout<<"y:"<<y;
    }
};
int main()
{
    B ob1;
    ob1.in();
    ob1.out();

    ob1.set();
    ob1.show();
    return 0;
}
*/
///========================================================================================================================================================
/// Single Inheritance: Private
/*
#include<iostream>
using namespace std;
class A
{
private:
    int x;
public:
    void in()
    {
        cout<<"Enter the value of x:"<<endl;
        cin>>x;
    }
    void out()
    {
        cout<<"x:"<<x;
    }
};
class B:private A
{
private:
    int y;
public:
    void set()
    {
        in();
        cout<<"Enter the value of y:"<<endl;
        cin>>y;
    }
    void show()
    {
        out();
        cout<<endl<<"y:"<<y;
    }
};
int main()
{
    B ob1;
    //ob1.in();//will generate an error message coz inhertency in private
    //ob1.out();//will generate an error message coz inhertency in private

    ob1.set();
    ob1.show();

    return 0;

}
*/
///========================================================================================================================================================
///Another Example:
/*
#include<iostream>
using namespace std;
class Person
{
private:
    char nm[50];
    int age;
public:
    void indata()
    {

        cout<<"Enter the name:"<<endl;
        cin.getline(nm,50);
        cout<<"Enter the age:"<<endl;
        cin>>age;
    }
    void outdata()
    {

        cout<<"name:"<<nm<<"age:"<<age<<endl;
    }
};
class Student:private Person
{
private:
    float sper;
    float hper;
public:
    void input()
    {
        indata();
        cout<<"Enter the ssc and hsc percentage:"<<endl;
        cin>>sper>>hper;
    }
    void output()
    {
        outdata();
        cout<<"ssc per:"<<sper<<"hsc per:"<<hper<<endl;
    }
};
int main()
{
    Student ob1;
    ob1.input();
    ob1.output();

    return 0;

}
*/
///========================================================================================================================================================
///---------------Using function(method) overloading in inheritance----------------------------------------------------------------------------------------
/*
#include<iostream>
#include<string.h>
using namespace std;
class Person
{
private:
    char nm[50];
    int age;
public:
    void indata()
    {
        cout<<"Enter the name:"<<endl;
        cin.getline(nm,50);
        cout<<"Enter the age:"<<endl;
        cin>>age;
    }
    void indata(char a1[],int a2)
    {
        strcpy(nm,a1);
        age=a2;

    }
    void outdata()
    {
        cout<<"name:"<<nm<<endl<<"age:"<<age<<endl;
    }
};
class Student:private Person
{
private:
    float sper;
    float hper;
public:
    void input()
    {
        indata();
        cout<<"Enter the ssc and hsc percentage:"<<endl;
        cin>>sper>>hper;
    }
    void input(char s[],int a,float sp,float hp)
    {
        indata(s,a);
        sper=sp;
        hper=hp;
    }
    void output()
    {
        outdata();
        cout<<"ssc per:"<<endl<<"hsc per:"<<hper<<endl;
    }
};
int main()
{
    Student ob1,ob2;
    ob1.input();
    ob1.output();

    ob2.input("sayu",25,91.20,80.00);
    ob2.output();
}
*/
///=======================================================================================================================================================
///-----------------------------Using constructors in inheritance-----------------------------------------------------------------------------------------
///Default Constructor:
/*
#include<iostream>
using namespace std;
class A
{
private:
    int x;
    int y;
public:
    A()
    {
        cout<<"Default Constructors A:"<<endl;
        x=10;
        y=20;
        cout<<"x:"<<x<<endl<<"y:"<<y<<endl;
    }
};
class B:public A
{
private :
    float x;
    float y;
public:
    B()
    {
        cout<<"Default Constructor B:"<<endl;
        x=30.00;
        y=40.00;
        cout<<"x:"<<x<<endl<<"y:"<<y<<endl;
    }
};
int main()
{
    B ob1;
    return 0;
}
*/
///=========================================================================================================================================================
///Parameterized Constructor:
/*
#include<iostream>
using namespace std;
class A
{
private:
    int x;
public:
    A()
    {
        cout<<"Default Constructor:"<<endl;
        x=10;
        cout<<"x:"<<x<<endl;
    }
    A(int a1)
    {
        cout<<"para constructor A"<<endl;
        x=a1;
        cout<<"x:"<<x<<endl;
    }
};
class B:public A
{
private:
    int y;
public:
    B()
    {
        cout<<"Default Constructor:"<<endl;
        y=20;
        cout<<"y:"<<y<<endl;
    }
    B(int a1,int a2):A(a2)//always right to left
    {
        cout<<"Para constructor:"<<endl;
        y=a1;
        cout<<"y:"<<y<<endl;
    }
};
int main()
{
    B ob1;//Default constructor...Depends on which way you have to call
    B ob2(100,500);//Para constructor

    //B ob1;
    return 0;
}
*/
///=========================================================================================================================================================
///Another Example:
/*
#include<iostream>
#include<string.h>
using namespace std;
class Person
{
private:
    char nm[50];
    int age;
public:
    Person()
    {
        cout<<"Default Constructor:"<<endl;
        strcpy(nm,"NA");
        age=0;
        cout<<"name:"<<nm<<endl<<"age:"<<age<<endl;
    }
    Person(char a[],int b)
    {
        cout<<"Para constructor"<<endl;
        strcpy(nm,a);
        age=b;
        cout<<"name:"<<nm<<"age"<<age<<endl;
    }
    void indata()
    {
        cout<<"Enter the name:"<<endl;
        cin.getline(nm,50);
        cout<<"Enter the age:"<<endl;
        cin>>age;
    }
    void indata(char s[],int a)
    {
        strcpy(nm,s);
        age=a;
    }
    void outdata()
    {
        cout<<"name:"<<nm<<endl<<"age:"<<age<<endl;
    }
};
class Student:private Person
{
private:
    int sper;
    int hper;
public:
    Student()
    {
        cout<<"Default Constructor"<<endl;
        sper=0;
        hper=0;
        cout<<"ssc per:"<<sper<<endl<<"hsc per:"<<hper<<endl;
    }
    Student(char s[],int a,int sp,int hp):Person(s,a)
    {
        sper=sp;
        hper=hp;
        cout<<"ssc:"<<sper<<endl<<"hsc:"<<hper<<endl;
    }
    void input()
    {
        indata();
        cout<<"Enter the ssc and hsc percentage:"<<endl;
        cin>>sper>>hper;
    }
    void input(char s1[],int a1,int sp1,int hp1)
    {
        indata(s1,a1);
        sper=sp1;
        hper=hp1;
    }
    void output()
    {
        cout<<"ssc per:"<<sper<<"hsc per:"<<hper<<endl;
    }
};
int main()
{
    Student ob1;//default constructor
    ob1.input();
    ob1.output();

    Student ob2;
    ob2.input("sayu",20,81,91);
    ob2.output();

    Student ob3("sayali",30,90,50);
    ob3.output();

    return 0;

}
*/
///=======================================================================================================================================================
///---------------------------Method(Function) Overriding:-----------------------------------------------------------------------------------------------
/*
#include<iostream>
using namespace std;
class A
{
private:
    int x;
public:
    A()
    {
        x=10;
    }
    void display()
    {
        cout<<"x:"<<x<<endl;
    }
};
class B:private A
{
private:
    int y;
public:
    B()
    {
        y=20;
    }
    void display()
    {
    //display();//will attend the recursion(function call in function in nested from)so not useful
        A::display();
        cout<<"y:"<<y<<endl;
    }
};
int main()
{
    B ob1;
    ob1.display();

//   A ob2;//only two display you call through create the object of child class only not a base class
//   ob2.display();

   //  ob1.A::display();//option 2  also call like this
    return 0;
}
*/
///=========================================================================================================================================================
///-----------------------------Data Member Overridden------------------------------------------------------------------------------------------------------
/*
#include<iostream>
using namespace std;
class Demo
{
//private://not change the visibility of data member only change the visibility of function
        //so we take the data member as a public so you can access from outside
//    int x;
public:
    int x;
    void out()
    {
        cout<<"x is:"<<x<<endl;
    }

};
class Test:public Demo
{
private:
    int x;
public:
    Test()
    {
        x=10;
        Demo::x=100;//overridden data member access
    }
    void out()
    {
        Demo::out();//overridden member function access
        cout<<"x is:"<<x<<endl;
    }
};
int main()
{
    Test ob;
    ob.output();
    return 0;
}
*/
///=======================================================================================================================================================
///Check Visibility:
/*
#include<iostream>
using namespace std;
class A
{
private:
    int x;
protected:
    void input()
    {
        cout<<"Enter the value of x:"<<endl;
        cin>>x;
    }
public:
    void output()
    {
        cout<<"x:"<<x<<endl;
    }
};
class B:public A
{
private:
    int y;
public:
    void in()
    {
        input();//its access in child class cause not loose the security so its access in child as if
        //if we write in proteced
        cout<<"value of y is:"<<endl;
        cin>>y;
    }
    void out()
    {
        output();
        cout<<"y:"<<y<<endl;
    }
};
int main()
{
    B ob;
    ob.in();
    ob.out();
//    A ob1;//No access coz it is protected in base so it remain protected in public inheritance also
//    ob1.input();
//    ob1.output();
    return 0;
}*/
///=========================================================================================================================================================
///----------------------------------Multilevel Inheritance-------------------------------------------------------------------------------------------------
/*
#include<iostream>
using namespace std;
class Person
{
private:
    char nm[50];
    int id;
    int age;
public:
    void input()
    {
        cout<<"Enter the name:"<<endl;
        cin.getline(nm,50);
        cout<<"Enter the person id and age:"<<endl;
        cin>>id>>age;
    }
    void output()
    {
        cout<<"Name:"<<nm<<endl<<"id:"<<id<<endl<<"age:"<<age;
    }
};
class Student:public Person
{
private:
    int phy;
    int chem;
    int maths;
protected:
//    void set()
//    {
//        cout<<"hi sayali"<<endl;
//    }
    int getphy()
    {
        return phy;
    }
    int getchem()
    {
        return chem;
    }
    int getmaths()
    {
        return maths;
    }
public:
    void in()
    {
        //set();
        input();
        cout<<"Enter the subject mark of physics:"<<endl;
        cin>>phy;
        cout<<"subject mark of chemistry:"<<endl;
        cin>>chem;
        cout<<"subject mark of maths:"<<endl;
        cin>>maths;
    }
    void out()
    {
        output();
        cout<<"Phy:"<<phy<<endl<<"chem:"<<chem<<endl<<"maths:"<<endl;
    }
};
class Result:public Student
{
private:
    char passflag;
public:
    void setdata()
    {
        in();
        if(getphy()>=40 && getchem()>=40 && getmaths()>=40)
        {
            passflag ='y';
        }
        else
        {
            passflag='n';
        }
    }
    void showdata()
    {
        out();
        if(passflag=='y')
        {
            cout<<"Student result is :Pass"<<endl;
        }
        else
        {
            cout<<"Student result is :Fail"<<endl;
        }
    }

};
int main()
{
    Result ob;
    ob.setdata();
    ob.showdata();

//    Student ob1;
//    ob1.set();

   // ob.getphy();

//    ob.in();
//    ob.out();
    return 0;
}
*/
///========================================================================================================================================================
///--------------------------------Multiple Inheritance----------------------------------------------------------------------------------------------------
/*
#include<iostream>
using namespace std;
class Exam //Parent class
{
private:
    int phy;
    int chem;
    int maths;
public:
    void input()
    {
        cout<<"Enter the marks of phy:"<<endl;
        cin>>phy;
        cout<<"Enter the marks of chem:"<<endl;
        cin>>chem;
        cout<<"Enter the marks of maths:"<<endl;
        cin>>maths;
    }
    void output()
    {
        cout<<"phy:"<<phy<<endl<<"chem:"<<chem<<"maths:"<<maths;
    }
protected:
    int getphy()
    {
        return phy;
    }
    int getchem()
    {
        return chem;
    }
    int getmaths()
    {
        return maths;
    }
};
class Sport //parent class
{
private:
    int point;
public:
    void input()
    {
        cout<<"Enter the point :"<<endl;
        cin>>point;
    }
    void out()
    {
        cout<<"point:"<<point;
    }
protected:
    int getpoint()
    {
        return point;
    }
};
class Result:private Exam,public Sport//child class //inherit the property to child class from both base class
{
private:
    char resultflg;
public:
    char setdata()
    {
        //in();
        Exam::input();//Avoid Ambiguous error write this way base class name :: function name cause same name function
        Sport::input();
        //getphy();
        if(getphy()>=40 && getchem()>=40 && getmaths()>=40 && getpoint()>=5)
        {
            resultflg='y';
        }
        else
        {
            resultflg='n';
        }
    }
    void showdata()
    {
        //out();
        output();
        out();
        if(resultflg=='y')
        {
            cout<<"result is :Pass"<<endl;
        }
        else
        {
            cout<<"result is :Fail"<<endl;
        }
    }
};
//class Demo:public Result
//{
//public:
//    input();
//
//};
int main()
{
    Result ob;
    ob.setdata();
    ob.showdata();

  // Demo ob1;
  // ob.input();

    //cout<<""<<ob.getphy();


//    ob.input();
//    ob.in();



    return 0;
}
*/
///========================================================================================================================================================
///--------------------------------------Hybrid Inheritance------------------------------------------------------------------------------------------------
///Two way:different name you use and scope resolution method
///Virtual Base Class
/*
#include<iostream>
using namespace std;
class A
{
private:
    int data;
public:
    getdata()
    {
        cout<<endl<<"Enter the value of data:"<<endl;
        cin>>data;
    }
    putdata()
    {
        cout<<endl<<"data:"<<data;
    }
};
class B: virtual protected A//if you inherit A as private then it not accessible in child class D
{
    int x;
public:
    void in()
    {
        //getdata();
        cout<<"Enter the value of x:"<<endl;
        cin>>x;
    }
    void out()
    {
        //putdata();
        cout<<"x:"<<x;
    }
};
class C: virtual protected A
{
private:
    int y;
public:
    void input()
    {
        //getdata();
        cout<<"Enter the value of y:"<<endl;
        cin>>y;
    }
    void output()
    {
        //putdata();
        cout<<endl<<"y:"<<y<<endl;
    }
};
class D: public B , public C
{
private:
    int z;
public:
    void setdata()
    {
        in();
        input();
        //B::getdata();
        //C::getdata();
        getdata();
        cout<<endl<<"Enter the value of z:"<<endl;
        cin>>z;
    }
    void showdata()
    {
        //B::out(); this way also call the function of same name
        //C::out();
        out();
        output();
        //B::putdata();
        //C::putdata();
        putdata();
        cout<<endl<<"z:"<<z<<endl;
    }
};
int main()
{
    D ob;
    ob.setdata();
    ob.showdata();

    //ob.B::out();
    //ob.in();//Inherit private then not outside of class as well as protected
    //ob.out();
    return 0;
}
*/
///=========================================================================================================================================================
///-----------------------------------------Pointer--------------------------------------------------------------------------------------------------------
/// pointer used to refer the variables of built in type
/*
#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int *p;
    p=&x;

    cout<<" value of x:"<<x<<endl;
    cout<<"address of x:%u"<<x<<endl;
    cout<<"using p value of x:"<<*p<<endl;

    return 0;
}
*/
///=========================================================================================================================================================
///Using pointer to refer array:
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x[5];//={11,12,13,14,15};
    int *p;
    p=x; //p=&x[0];

    cout<<"Array Elements:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>*(p+i);
    }
    cout<<" Display Array Elements are:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<setw(10)<<*(p+i);
    }
    return 0;
}
*/
///========================================================================================================================================================
///using pointer arithmetic in above program:
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x[5];
    int *p;
    p=x;

    cout<<"Array Elements:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>*p;
        p++;
    }
    p=x;

    cout<<"Display Array Elements:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<setw(10)<<*(p++);
    }
    return 0;
}
*/
///=========================================================================================================================================================
/// Dynamic memory allocation for pointer using "new":
/*
#include<iostream>
using namespace std;
int main()
{
    int cnt;
    cout<<"Enter the element count:"<<endl;
    cin>>cnt;
    int *p=new int[cnt];

    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<cnt;i++)
    {
        cin>>*(p+i);
    }

    cout<<"Display the elements:"<<endl;
    for(int i=0;i<cnt;i++)
    {
        cout<<(p+i);
    }

    delete p;
    return 0;

}
*/
///========================================================================================================================================================
///pointer to function:
/*
#include<iostream>
using namespace std;
void add(int a,int b)
{
    int c;
    c=a+b;
    cout<<" addition is :"<<c;
}
void multi(int a,int b)
{
    int c;
    c=a*b;
    cout<<endl<<"Multiplication is:"<<c;
}
int main()
{
    int a,b;
    cout<<"Enter the values of a and b:"<<endl;
    cin>>a>>b;

    add(a,b);
    multi(a,b);

    void(*fptr)(int,int);
    fptr=&add;
    fptr(a,b);

    fptr=&multi;
    fptr(a,b);
    return 0;
}
*/
///========================================================================================================================================================
///Pointer to object:
/*
#include<iostream>
using namespace std;
class Item
{
private:
    int ic;
    int ip;
public:
    void in()
    {
        cout<<"Enter the item count and prize:"<<endl;
        cin>>ic>>ip;
    }
    void out()
    {
        cout<<"Item count:"<<ic<<"Item prize:"<<ip<<endl;
    }
};
int main()
{
    Item ob;
    ob.in();
    ob.out();

    Item *p;
    p=&ob;
    p->in();
    p->out();

    return 0;
}
*/
///=========================================================================================================================================================
///Dynamic memory allocation for objects:
/*
#include<iostream>
using namespace std;
class Item
{
private:
    int ic;
    int ip;
public:
    void in()
    {
        cout<<"Enter the item count and item prize:"<<endl;
        cin>>ip>>ic;
    }
    void out()
    {
        cout<<"Item count:"<<ic<<"Item prize:"<<ip;
    }
};
int main()
{
    Item ob;
    ob.in();
    ob.out();

    int cnt;
    cout<<"Enter the elements count:"<<endl;
    cin>>cnt;

    Item *p;
    p=new Item[cnt];
//    p=&ob;
//    p->in();
//    p->out();


    cout<<"Enter the element:"<<endl;
    for(int i=0;i<cnt;i++)
    {
        (p+i)->in();
    }

    cout<<"Display the elements:"<<endl;
    for(int i=0;i<cnt;i++)
    {
        (p+i)->out();
    }
    delete p;
    return 0;
}
*/
///=========================================================================================================================================================
///this pointer: It is keyword, which by default refer to invoking object:
/*
#include<iostream>
using namespace std;
class Person
{
private:
    int id;
    int age;
public:
    void in()
    {
        cout<<"Enter the id and age:"<<endl;
        cin>>id>>age;
    }
    void out()
    {
        cout<<"id:"<<id<<"age:"<<age<<endl;
    }
    Person geteleder(Person t)
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
    Person ob1,ob2,ob3;
    ob1.in();
    ob1.out();

    ob2.in();
    ob2.out();

    ob3=ob1.geteleder(ob2);
    cout<<"Elder Person:"<<endl;
    ob3.out();
    return 0;
}
*/
///=======================================================================================================================================================
///Using the pointer in inheritance:
/// In Inheritance, base class pointer can refer object of base class or object of any its child.
///but child class pointer unable to refer object of base class.
/*
#include<iostream>
using namespace std;
class Demo
{
public:
    void show()
    {
        cout<<"In Demo Show:"<<endl;
    }
};
class Sample:public Demo
{
public:
    void display()
    {
        cout<<"In Display Show:"<<endl;
    }
};
int main()
{
    Demo dob;
    Sample sob;

    Demo *dptr;
//    dptr=&dob;
//    dptr->show();

//    dptr=&sob;
//    dptr->display();// error: ‘class Demo’ has no member named ‘display’
//  The pointer of base class Demo able to refer (Sample) object of child class but when we
// call the method from child Sample class then it will search that method in
// the Demo class(base class).
    Sample *sptr;
    //sptr=&dob;
    sptr=&sob;
    sptr->show();
    sptr->display();
    return 0;
}
*/
///=======================================================================================================================================================
///----------------------------------------Polymorphism------------------------------------------------------------------------------------------------------
///=========================================================================================================================================================
/*
#include<iostream>
using namespace std;
class Demo
{
private:
public:
    void show()
    {
        cout<<"Demo show:"<<endl;
    }
    void display()
    {
        cout<<"Demo display:"<<endl;
    }
};
class Sample:public Demo
{
public:
    void display()
    {

        cout<<"Sample display:"<<endl;
    }
};
int main()
{
    Demo dob;
    Sample sob;

    Demo *dptr;
    dptr=&dob;
    dptr->show();

    dptr=&sob;

    dptr->display();

    return 0;
}
*/
///========================================================================================================================================================
//
/*
#include<iostream>
using namespace std;
class Demo
{
public:
    void show()
    {
        cout<<"Demo show:"<<endl;
    }
    void display()
    {
        cout<<"Demo display:"<<endl;
    }
};
class Sample:public Demo
{
public:
    void display()
    {
        cout<<"Sample display:"<<endl;
    }
};
int main()
{
    Demo dob;
    Sample sob;

    Demo *dptr;
    dptr=&dob;
    dptr->show();

    dptr=&sob;
    dptr->display();

    return 0;
}
*/
///======================================================================================================================================================
///Use Virtual Keyword:
/*
#include<iostream>
using namespace std;
class Demo
{
public:
    void show()
    {
        cout<<"Demo show:"<<endl;
    }
     virtual void display()
    {
        cout<<"Demo display:"<<endl;
    }
};
class Sample:public Demo
{
public:
    void display()
    {
        cout<<"Sample display:"<<endl;
    }
};
int main()
{
    Demo dob;
    Sample sob;

    Demo *dptr;
    dptr=&dob;
    dptr->show();

    dptr=&sob;
    dptr->display();
    return 0;
}
*/
///=========================================================================================================================================================
///starting the actual polymorphism concept:
/*
#include<iostream>
using namespace std;
class Circle
{
public:
    void findarea()
    {
        cout<<"circle area:"<<endl;
    }
};
class Rect
{
public:
    void calarea()
    {
        cout<<"Rect area:"<<endl;
    }
};
class Triangle
{
public:
    void showarea()
    {
        cout<<"Triangle area:"<<endl;
    }
};
int main()
{
    Circle cob;
    cob.findarea();

    Rect rob;
    rob.calarea();

    Triangle tob;
    tob.showarea();

    return 0;
}
*/
///=========================================================================================================================================================
/*
#include<iostream>
using namespace std;
class Shape
{
//    public:
//    virtual void findarea()
//    {
//        cout<<"Circle area 1:"<<endl;
//    }
//    void calarea()
//    {
//        cout<<"Rect area 1:"<<endl;
//    }
//    void showarea()
//    {
//        cout<<"Triangle area: 1"<<endl;
//    }
};
class Circle:public Shape
{
public:
    void findarea()
    {
        cout<<"Circle area:"<<endl;
    }
};
class Rect:public Shape
{
public:
    void calarea()
    {
        cout<<"Rect area:"<<endl;
    }
};
class Triangle:public Shape
{
public:
    void showarea()
    {
        cout<<"Triangle area 28:"<<endl;
    }
};
int main()
{
    Shape *s;

    Circle cob;
    s=&cob;

    Rect rob;
    s=&rob;

    Triangle tob;
    s=&tob;

    s->.....();// which method????  - it can not be decided and that is the problem.


    return 0;
}
*/
///========================================================================================================================================================
///The solution to above problem is that, choose same method name in all classes as
/*
#include<iostream>
using namespace std;
class Shape
{
    public:
    void area()
    {
        cout<<"Shape area:"<<endl;
    }

};
class Circle:public Shape
{
public:
    void area()
    {
        cout<<"Circle area:"<<endl;
    }
};
class Rect:public Shape
{
public:
    void area()
    {
        cout<<"Rect area:"<<endl;
    }
};
class Triangle:public Shape
{
public:
    void area()
    {
        cout<<"Triangle area:"<<endl;
    }
};
int main()
{
    Shape *s;
    Circle cob;
    s=&cob;

    Rect rob;
    s=&rob;

    Triangle tob;
    s=&tob;

    s->area();
    return 0;
}
*/
///=========================================================================================================================================================
///To check , Is the base pointer correctly pointing to the child object or not?
///lets rearrange the main as shown below
/*
#include<iostream>
using namespace std;
class Shape
{
public:
    void area()
    {
        cout<<"Shape area:"<<endl;
    }
};
class Circle:public Shape
{
    void area()
    {
        cout<<"Circle area:"<<endl;
    }
};
class Rect:public Shape
{
public:
    void area()
    {
        cout<<"Rect area:"<<endl;
    }
};
class Triangle:public Shape
{
public:
    void area()
    {
        cout<<"Triangle area:"<<endl;
    }
};
int main()
{
    Shape *s;

    Circle cob;
    s=&cob;
    s->area();

    Rect rob;
    s=&rob;
    s->area();

    Triangle tob;
    s=&tob;
    s->area();

    return 0;
}
*/



