#include<bits/stdc++.h>
using namespace std;

int main(){
// q1 - Write a program to check whether a given number is even or odd using only if without else

    // int a;
    // cout<<"enter a integer number"<<endl;
    // cin>>a;

    // if(a%2==0){
    //     cout<<"the number "<<a<<" is even"<<endl;
    // }
    // if(a%2==1){
    //     cout<<"the number "<<a<<" is odd "<<endl;
    // }

// q2 - Write  a  program  to  find  the  maximum  of  2  numbers  using  only  if  without else

    // int a,b;
    // cout<<"enter 2 number to be compared"<<endl;
    // cin>>a>>b;

    // if(a>b){
    //     cout<<a<<" is greater";
    // }
    // if(a<b){
    //     cout<<b<<" is greater";
    // }

// q3 - Write  a  program  to  check  whether  a  given  number  is  even  or  odd  using  if else
    
    // int a;
    // cout<<"Enter a number : "<<endl;
    // cin>>a;

    // if(2%a==0){
    //     cout<<"this number is even";
    // }else {
    //     cout<<"this number is odd";
    // }


// q4 - Write a program to find the maximum of 2 numbers using only if else

    // int a,b;

    // cout<<"enter 2 numbers to be compared "<<endl;
    // cin>>a>>b;
    // if(a>b){
    //     cout<<a<<" is greater";
    // }else {
    //     cout<<b<<" is greater";
    // }

// q5 - Write a program to find the maximum of 3 numbers using nested if else

    // int a,b,c;
    // cout<<"Enter 3 integers to be compared : "<<endl;
    // cin>>a>>b>>c;

    // if(a>b){
    //     if(a>c){
    //         cout<<a<<" is greatest.";
    //     }else {
    //         cout<<c<<" is greatest.";
    //     }
    // }else {
    //     cout<<b<<" is greatest";
    // }

// q6 - Write a program to find the maximum of 4 numbers using nested if else

    // int a,b,c,d;
    // cout<<"Enter 4 integer numbers: "<<endl;
    // cin>>a>>b>>c>>d;

    // if(a>b){
    //     if(a>c){
    //         if(a>d){
    //             cout<<"A is greater";
    //         }else {
    //             cout<<"D is greater";
    //         }
    //     }else if(c>d){
    //         cout<<"C is greater";
    //     }else{
    //         cout<<"D is greater";
    //     }
    // }else if(b>c){
    //     if(b>d){
    //         cout<<"B is greater";
    //     }else {
    //         cout<<"D is greatest";
    //     }
    // }else if(c>d){
    //         cout<<"C is greater";
    //     }else{
    //         cout<<"D is greater";
    //     }

// q7 - Write a program to find the maximum of 4 numbers using only if.

    //  int a,b,c,d;
    // cout<<"Enter 4 integer numbers: "<<endl;
    // cin>>a>>b>>c>>d;
    // int max = a;

    // if(b>max){
    //     max = b;
    // }

    // if(c>max){
    //     max = c;
    // }

    // if(d>max){
    //     max = d;
    // }

    // cout<<"The Maximum number is : "<<max<<endl;

// q8 - Write a program  to find the second maximum of 3 numbers using nested if else

    // int num1,num2,num3;

    // cout<<"Enter 3 numbers : ";
    // cin>>num1>>num2>>num3;
    
    // if (num1 >= num2) {
    //     if (num1 >= num3) {
    //         if (num2 >= num3) {
    //             cout << "Second maximum is: " << num2 << endl;
    //         } else {
    //             cout << "Second maximum is: " << num3 << endl;
    //         }
    //     } else {
    //         cout << "Second maximum is: " << num1 << endl;
    //     }
    // } else {
    //     if (num2 >= num3) {
    //         if (num1 >= num3) {
    //             cout << "Second maximum is: " << num1 << endl;
    //         } else {
    //             cout << "Second maximum is: " << num3 << endl;
    //         }
    //     } else {
    //         cout << "Second maximum is: " << num2 << endl;
    //     }
    // }

// q9 - Write  a  program  to  check  whether  a  given  number  is  leap  or  not

    // int yr;
    // cout<<"Enter Year : ";
    // cin>>yr;

    // if(yr % 4 == 0){
    //     cout<<yr<<" is a leap year.";
    // }else{
    //     cout<<yr<<" is not leap year";
    // }

// q10 - Write  a  program  to  find  the  grade  of  a  student  if  percent  is  given  using  
//          Percent   Grade 
//          >=90   ‘A’ 
//          >=70 and <90  ‘B’ 
//          >=50 and <70  ‘C’ 
//          <50   ‘F’

    // int  percent;
    // cout<<"Enter percentage : ";
    // cin>>percent;

    // if (percent >= 90) {
    //     cout << "Grade: A" << endl;
    // } else if (percent >= 70 && percent < 90) {
    //     cout << "Grade: B" << endl;
    // } else if (percent >= 50 && percent < 70) {
    //     cout << "Grade: C" << endl;
    // } else {
    //     cout << "Grade: F" << endl;
    // }

// q11 - Write  a  program  to  input  cost  price  and  selling  price  and  display  profit  in amount or loss in amount or no profit and no loss.

    // int cp , sp ;
    // cout<<"Enter the cost price : "<<endl;
    // cin>>cp;
    // cout<<"Enter the selling price : "<<endl;
    // cin>>sp;

    // if(cp > sp){
    //     cout<<"loss made on this product's Amount : Rs"<<cp-sp<<endl;
    // }else if (cp == sp){
    //     cout<<"The prices are equal."<<endl;
    // }else if(cp < sp){
    //     cout<<"Profit made on this product's Amount : Rs"<<sp-cp<<endl;
    // }else {
    //     cout<<"input is Invalid";
    // }

// q12 - Write a program to check whether a given character is a lowercase alphabet or uppercase alphabet or a digit or a symbol.

    // int ch;
    // cout<<"Enter a character : ";
    // cin>>ch;

    // if ((ch >= 97 && ch <= 122)) {
    //     cout << ch << " is a lowercase alphabet." << endl;
    // } else if (ch >= 65 && ch <= 90) {
    //     cout << ch << " is an uppercase alphabet." << endl;
    // } else if (ch >= 48 && ch <= 57) {
    //     cout << ch << " is a digit." << endl;
    // } else {
    //     cout << ch << " is a symbol." << endl;
    // }

    // without using ascii code 

    // int ch;
    // cout<<"Enter a character : ";
    // cin>>ch;

    // if ((ch >= 'a' && ch <= 'z')) {
    //     cout << ch << " is a lowercase alphabet." << endl;
    // } else if (ch >= 'A' && ch <= 'z') {
    //     cout << ch << " is an uppercase alphabet." << endl;
    // } else if (ch >= 0 && ch <= 9) {
    //     cout << ch << " is a digit." << endl;
    // } else {
    //     cout << ch << " is a symbol." << endl;
    // }

// q13 - using pre defined function 
 
    // char ch;
    // cout << " a character: ";    
    // cin>>ch;

    // if (islower(ch)) {
    //     cout << "You entered a lowercase alphabet." <<endl;
    // } else if (isupper(ch)) {
    //     cout << "You entered an uppercase alphabet." <<endl;
    // } else if (isdigit(ch)) {
    //     cout << "You entered a digit." << endl;
    // } else {
    //     cout << "You entered a symbol." << endl;
    // }

// q14 - lowercase to upper case and its vica versa

    //  char ch;
    // cout << " a lowercase character: ";
    // cin >> ch;
    // ch = toupper(ch); 
    // cout << "The uppercase character is: " << ch << endl;

    //  convert the uppercase letter back to lowercase.

    // char chr;
    // cout << " an uppercase character: ";
    // cin >> chr;
    // ch = tolower(chr);
    // cout << "The lowercase character is: " << chr << endl;

// q15 - Write a program to calculate bill from number of telephone calls: 
            // No. of calls  Rate 
            // 0 to 100  0/- 
            // 101  200  .80/- 
            // 201  500  1/- 
            // 501   --  1.20/- 
            // Monthly Rental is Rs 100/- 

    //  int calls;
    // float bill;

    // cout << "Enter number of minutes during call : ";
    // cin >> calls;

    // if (calls <= 100)
    //     bill = 0 ;
    // else if (calls > 100 && calls <= 200)
    //     bill = 200 * 0.8;
    // else if (calls > 200 && calls <= 500)
    //     bill = 100 * 0.8 + (calls - 200) * 1;
    // else
    //     bill = 100 * 0.8 + 300 * 1 + (calls - 500) * 1.2;

    // bill += 100;

    // cout << " Your bill is Rs." << bill;

// q16 - Write a program to input gender and age of an employee and compute the pension. Input age first then gender. 
                            // 'M'  'F' 
            // Age  
            // >=90           40000  35000 
            // >=60 and <90   60000  65000 
            // <60            0  0

        // int age ;
        // char gender;

        // cout<<"Enter age and gender : ";
        // cin>>age>>gender;


        // if(age >= 90){
        //     if(gender == 'm'){
        //         cout<<"Pension  : Rs.40000";
        //     }else if(gender == 'f'){
        //         cout<<"Pension  : Rs.35000";
        //     }else {
        //         cout<<"pension : Rs.00";
        //     }
        // }else if(age >= 60 && age < 90){
        //     if(gender == 'm'){
        //         cout<<"Pension  : Rs.60000";
        //     }else if(gender == 'f'){
        //         cout<<"Pension  : Rs.55000";
        //     }else {
        //         cout<<"pension : Rs.00";
        //     }
        // }else{
        //         cout<<"pension : Rs.00";
        // }
        
// q17 - Write a program to input month number and print the number of days in that month using else if. 
//           Month Number        Month days 
//           1,3,5,7,8,10,12    “31 days” 
//           2                  “28 days” 
//           4,6,9,11           “30 days” 
//           13,14,....         “Invalid Input”

    // int month;

    // cout<<"Enter Number of month : ";
    // cin >> month;
    // if(month ==1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
    //     cout<<"This month is of 31 days.";
    // }else if(month==2) {
    //     cout<<"This month is of 28 days.";
    // }else if(month == 4 || month == 6 || month == 9 || month == 11){
    //     cout<<"This month is of 30days.";
    // }else {
    //     cout<<"Enter valid month number";
    // }

// q18 - Write a program to round off a number to an integer using “round” function of “math.h.

    // float num;
    // int result = 0;
    // cout<<"Enter a decimal number: ";
    // cin>>num;

    // result = round(num);
    // cout<<"Round off number is : "<<result;
    
// q19 - Write a program to round off a number to an integer using “floor” function of “math.h”

    // float num;
    // int result = 0;
    // cout<<"Enter a decimal number: ";
    // cin>>num;

    // result = floor(num);
    // cout<<"Round off number is : "<<result;

// q20 - Write a program to sort 3 numbers in ascending order

    // int a,b,c;

    // cout<<"Enter 3 integers numbers : ";
    // cin>>a>>b>>c;

    //     if (a > b) swap(a, b);
    //     if (a > c) swap(a, c);
    //     if (b > c) swap(b, c);

    //     cout << "Sorted numbers: " << a << " " << b << " " << c << endl;



// q21 - Write a program to sort 3 numbers in decending order

    // int a,b,c;

    // cout<<"Enter 3 integers numbers : ";
    // cin>>a>>b>>c;

    //     if (a < b) swap(a, b);
    //     if (a < c) swap(a, c);
    //     if (b < c) swap(b, c);

    //     cout << "Sorted numbers: " << a << " " << b << " " << c << endl;


// q22 - Write  a  program  to  check  whether  a  given  number  is  in  the  range  of  50  to 100 or is divisible by 7

    // int num ;
    // cout<<"Enter a number : ";
    // cin>>num;

    // if(num>=50 && num<=100){
    //     if(num%7 == 0){
    //         cout<<"This is Desired result";
    //     }else {
    //         cout<<"this not the desired result";
    //     }
    // }
    

// q23 - Write  a  program  to  check  whether  a  given  three-digit  number  is  palindrome or not

     int n,r,sum=0,temp;    
    cout<<"Enter the Number=";    
    cin>>n;    
    temp=n;    
     while(n>0)    
    {    
     r=n%10;    
     sum=(sum*10)+r;    
     n=n/10;    
    }    
    if(temp==sum)    
    cout<<"Number is Palindrome.";    
    else    
    cout<<"Number is not Palindrome.";  

    return 0;
}