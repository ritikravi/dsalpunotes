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

#include <iostream>
#include <string>

using namespace std;

class employee
{
private:
    string emp_name;
    int salary;
    int id;
    int bp = 10;

public:
    void get_value()
    {
        cin >> id >> emp_name >> salary;
    }

    void calculate()
    {
        if (id > 10)
        {
            salary = bp * 6000;
        }
        else if (id > 5)
        {
            salary = bp * 5000;
        }
        else if (id < 5)
        {
            salary = 4000;
        }
        else
        {
            cout << "Invalid id";
        }
    }
    void display()
    {
        cout << id << " " << emp_name << " " << salary;
    }
};

int main()
{
    employee e;

    e.get_value();
    e.calculate();
    e.display();

    return 0;
}

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