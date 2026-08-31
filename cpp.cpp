// //wap to create class book to using get_value() calculate() display()
// #include <iostream>
// #include <string>

// using namespace std;
// class book
// {
//   private:

//   string title;
//   int price_page;
//   int no_of_page;
//   int final_price;

//   public:
//   void get_value()
//   {
//     cin>>title>>price_page>>no_of_page;

//   }
//   void calculate()
//   {
//     final_price = price_page*no_of_page;

//   }
//   void display()
//   {
//     cout <<title <<" " <<final_price <<" " <<no_of_page;

//   }

// };
//   int main()
//     {
//     book a1;
//     a1.get_value();
//     a1.display();
//     a1.calculate();
//     }

// #include <iostream>
// #include <string>

// using namespace std;

// struct book
// {
// private:
//     string title;
//     int price_page;
//     int no_of_page;
//     int final_price;

// public:

//     void get_value()
//     {
//         cin >> title >> price_page >> no_of_page;
//     }

//     void calculate()
//     {
//         final_price = price_page * no_of_page;
//     }

//     void display()
//     {
//         cout << title << " " << final_price << " " << no_of_page;
//     }
// };

// int main()
// {
//     book a1;

//     a1.get_value();
//     a1.calculate();
//     a1.display();

//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// class employee
// {
// private:
//     string emp_name;
//     int salary;
//     int id;
//     int bp = 10;

// public:
//     void get_value()
//     {
//         cin >> id >> emp_name >> salary;
//     }

//     void calculate()
//     {
//         if (id > 10)
//         {
//             salary = bp * 6000;
//         }
//         else if (id > 5)
//         {
//             salary = bp * 5000;
//         }
//         else if (id < 5)
//         {
//             salary = 4000;
//         }
//         else
//         {
//             cout << "Invalid id";
//         }
//     }
//     void display()
//     {
//         cout << id << " " << emp_name << " " << salary;
//     }
// };

// int main()
// {
//     employee e;

//     e.get_value();
//     e.calculate();
//     e.display();

//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// class employee
// {
// private:
//     string emp_name;
//     int salary;
//     int id;
//     int bp = 10;

// public:
//     void get_value()
//     {
//         cin >> id >> emp_name >> salary;
//     }

//     void calculate()
//     {
//         if (id > 10)
//         {
//             salary = bp * 6000;
//         }
//         else if (id > 5)
//         {
//             salary = bp * 5000;
//         }
//         else if (id < 5)
//         {
//             salary = 4000;
//         }
//         else
//         {
//             cout << "Invalid id";
//         }
//     }

//     void display()
//     {
//         cout << id << " " << emp_name << " " << salary;
//     }
// };

// int main()
// {
//     employee e;

//     e.get_value();
//     e.calculate();
//     e.display();

//     return 0;
// }

// #include <iostream>

// using namespace std;

// union box
// {

//     int length , breadth;
//     int area;
//     void get_data()
//     {
//         cin >> length ;
//         cin >> breadth;
//         area = length * breadth;

//     }

//     void display()
//     {
//         cout << area << endl;

//     }
// };

// int main()
// {

// box b;
// b.get_data();
// b.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class student
// {
//     int rollno;
//     static int counter;

// public:
//     student()
//     {

//         rollno = 0;
//         rollno++;
//         counter++;
//     }
//     student()
//     {
//         counter--;
//     }
//     void add()
//     {
//         static int getcount();
//     };
//     int student::counter = 0;
//     void student::add()
//     {
//         cout << rollno;
//     }

// }
// call by reference

// #include <iostream>
// using namespace std;
// void swap(int &a, int &b)
// {
//   int temp = a;
//   a = b;
//   b = temp;
// }
// int main()
// {
//     int x = 10, y = 20;
//     cout << "Before swapping: x = " << x << ", y = " << y << endl;
//     swap(x, y);
//     cout << "After swapping: x = " << x << ", y = " << y << endl;
//     return 0;
// }

// //call by value

// #include <iostream>
// using namespace std;
// void swap(int a, int b)
// {
//   int temp = a;
//   a = b;
//   b = temp;
// }

// int main()
// {

// }

// //call by reference
// #include <iostream>
// using namespace std;
//  int main()
//  {
//   int temp=*a;
//   *a=*b;
//   *b=temp;
//   cout<<"After swapping: x = " << *a << ", y = " << *b << endl;
//  }

//  int main()
//  {
// int x=20,y=30;
// cout<<"the value of x and y " << x << " " << y << endl
//  }

// ask the number to enter the number and write a program for factorial of that number using recursion
//  #include <iostream>
//  using namespace std;
//  int factorial(int n)
//  {
//    if (n == 0 || n == 1)
//    {
//      return 1;

//   }
//   else
//   {
//     return n * factorial(n - 1);
//   }

// }
// int main()
// {
//   int n;
//   cin >> n;
//   int result = factorial(n);
//   cout << "Factorial of " << n << " is: " << result << endl;

//   return 0;
// }

// create a class box ,(height,width,depth)private variables ,no value from user
// volume=width*height*depth, use a friend function to calculate the volume of the box and display it

// #include <iostream>
// using namespace std;
// class box
// {
// private:

//     int height;
//     int width;
//     int depth;
//     int volume;

// {
//   public:

#include <iostream>
using namespace std;

class xyz
{
  int a;
  void set_data(int x)
  {
    a = x;
  }
  friend void max(xyz, abc);
}

class abc
{
  int a;
  void set_data(int y)
  {
    a = y;
  }
  friend void max(xyz,abc);
};
void max(abc t1, xyz t2)
{
  if (t1.y > t2.x)
  {
    cout << t1.y << endl;
  }
  else
  {
    cout << t2.x << endl;
  }
}

int main()
{
  abc t1;
  xyz t2;
  t1.set_data(10);
  t2.set_data(20);
  max(t1, t2);
  return 0;
}
