#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    //First task:
//         cout << "Hello World!" << endl;
//         string name;
//         cout << "Enter your name: " << endl;
//         cin >> name;
//         int age;
//         cout << "Please enter your age: ";
//         cin >> age;
//         cout <<"According to my information, you are "<< age << ", " << name << "!" <<endl;
//         return 0;
    //Second task:
        // for (int i = 1; i <= 5; ++i) {
        //     cout << setw(6) << i << setw(6);
        // }
        // return 0;
//    Third task:
//         int n;
//         int m;
//         cout << "Enter first number: ";
//         cin >> n;
//         cout << "Enter second number: ";
//         cin >> m;
//         cout << "Your numbers swapped: " << m << " " << n << endl;
    //Fourth task:
        // int n;
        // cout << "Enter a number: " << endl;
        // cin >> n;
        // for (int i = 1; i <= n; ++i) {
        //          cout << setw(2) << i << setw(6) << i*i << endl;
        // }
    //Fifth task:
//         string input;
//         cout << "Enter a string: ";
//         getline(cin, input);
//
//         int m = 50;
//         int stringLength = input.length();
//         int margin = (m - stringLength)/2;
//
//         cout << setw(margin) << input << setw(margin) << endl;
//
//         return 0;

//Next lesson:
    //Task one:
        // int a,b,c,d,e;
        // cout << "Enter five numbers: ";
        // cin >> a >> b >> c >> d >> e;
        // cout << "Sum of your five numbers is: " << a+b+c+d+e<<endl;
    //Task two:
        // int id,year,fee;
        // float gpa;
        // cout << "Enter your id: ";
        // cin >> id;
        // cout << "Enter your year: ";
        // cin >> year;
        // cout << "Enter your fee: ";
        // cin >> fee;
        // cout << "Enter your gpa: ";
        // cin >> gpa;
        // if(id==240505)
        //     cout << "You're a cool guy, here's your informations: " << endl;
        // if(id==240200)
        //     cout << "This is a little easter egg, glad you found it. Anyways, here's you're informations:"<< endl;
        // cout << "Student ID: " << id << endl;
        // cout << "Student Year: " << year << endl;
        // cout << "Student GPA: " << gpa << endl;
        // cout << "Student Fee : " << fee << endl;
    //Task three:
//         float temperature;
//         cout << "Enter temperature in Celcius: " << endl;
//         cin >> temperature;
//         cout << "Here's the same thing in Farenheit: " << (temperature*9/5)+32 << endl;
    //Task four:
        // float price;
        // int quantity;
        // cout << "Enter price: ";
        // cin >> price;
        // cout << "Enter quantity: ";
        // cin >> quantity;
        // cout << "Total price is $" << price*quantity << endl;
    //Task five:
        // int dad,mom,sibling,me;
        // cout<<"Enter the age of your dad: ";
        // cin>>dad;
        // cout<<"Enter the age of your mom: ";
        // cin>>mom;
        // cout<<"Enter the age of your sibling: ";
        // cin>>sibling;
        // cout<<"Enter your age: ";
        // cin>>me;
        // if((mom-sibling)<=18) {
        //     cout << "Your family is screwed up a lot."<<endl;
        // }
        // if((mom-me)<18) {
        //     cout << "Your family is screwed up a lot."<<endl;
        // }
        // else {
        //     cout << "Avarage age of your family of four is " << (dad+mom+sibling+me)/4 <<endl;
        // }
    //Task six:
        // float width, height;
        // float squarea;
        // cout << "Enter the width and height of the rectangle: ";
        // cin >> width >> height;
        // if (width == height) {
        //     cout << "Looks like it's a square, but anyways here's the perimeter and area:" << endl;
        //     cout << "Perimeter: " << 4 * width << endl;
        //     squarea = pow(height, 2);
        //     cout << "Area: " << squarea << endl;
        // }
        // else {
        //     cout << "Perimeter of the rectangle: " << 2*(width+height) << endl;
        //     cout << "Area of the rectangle: " << (width*height) << endl;
        // }
    //Task seven:
        // int dividend, divisor;
        // cout << "Enter a dividend: ";
        // cin >> dividend;
        // cout << "Enter a divisor: ";
        // cin >> divisor;
        // cout << "Quotient: " << int (dividend/divisor) << endl;
        // cout << "Remainder: " << int (dividend- divisor*(int (dividend/divisor))) << endl;
    //Task eight:
        // int USD,exrate;
        // cout<<"Enter amount in USD: ";
        // cin>>USD;
        // cout<<"Enter amount in exchange rate: ";
        // cin>>exrate;
        // cout << "Same money in UZS: " << USD*exrate << endl;
    //Task nine:
        int radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        double area = 3.14159265 * radius * radius;
        cout << "The area of the circle is: " << area << endl;
    //Task ten:
}