/*the purpose of this program is to compare between the units of production
  among 3 factories.
At first we took the production data.Then calculated it in 1000 then
round up the value.Then we print starts according to the units produced.
Anannya Saha is the author*/
#include <iostream>
#include <cmath>

using namespace std;
const int kConst = 3; //global variable and its unchangeable

//puts the sum of the units produce in plant in the array
void prod_data(int prod[], int size);

//calculates the units in thousand and puts it back in the array
void in_thousand(int prod[], int size);

//it prints the unit after rounding
void print_unit(const int prod[], int size);

//call by reference function that calculated sum of the units produce
void calc_sum(int& sum);

 //it rounds the unit
int rounding(double number);

//it is printing the stars equal to the number of unit produced in each factory.
void print_star(int unit);

int main( )
{
    int production[kConst];
    cout << "This program displays a graph showing" <<endl;
    cout<< "production for each factory in the company."<<endl;
    prod_data(production, kConst);
    in_thousand(production, kConst);
    print_unit(production, kConst);
    return 0;
}

//puts the sum of the units produce in plant in the array
void prod_data(int prod[], int size)
{
    for (int position = 1;position <= size; position++)
    {
        cout <<endl<<"Enter production data for plant number "<<position<< endl;
        calc_sum(prod[position - 1]); //storing the sum of units produced in the production array

      }
    }

//call by reference function that calculated sum of the units produce
void  calc_sum(int& sum)
{
    cout << "Enter number of units produced by each department." <<endl;
    cout<< "Append a negative number to the end of the list."<<endl;
    sum = 0;
    int next;
    cin >> next; //Taking the datas to find the sum

    while (next >= 0) { //to terminate the loop a negetive number is needed
    sum = sum + next;
    cin >> next;
    }
    cout << "Total = " << sum << endl;
}

//calculates the units in thousand and puts it back in the array
void in_thousand(int prod[], int size)
{
    for (int index = 0; index < size; index++)
        prod[index] = rounding(prod[index]/1000.0);
}
 /*  it rounds the unit
 when the decimals after the integer is equal or greater than 5 then it roundsup
 When the decimals after integer is less than 5 then it rounds down*/
int rounding(double number)
{
   return static_cast<int>(floor(number + 0.5));

}
//it prints the unit after rounding
void print_unit(const int prod[], int size)
{
    cout << "\nUnits produced in thousands of units:\n";
    for (int factorynum = 1; factorynum <= size; factorynum++)
    {
        cout << "Factory #" << factorynum << " ";
        //printing the factory number and their produced units

        print_star(prod[factorynum - 1]);
        cout << endl;
    }
}
//it is printing the stars equal to the number of unit produced in each factory
void print_star(int unit)
 {
    for (int count = 1; count <= unit; count++)
        cout << "*";
}
