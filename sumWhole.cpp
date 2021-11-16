#include <iostream>
#include <string>
using namespace std;

int main()
{
    //declaring the whole numbers between 20 - 25
int number = 20;
int sum = 0;
while (number <= 25)
{

    sum += number;
    number++;
cout << "Sum is: "<<sum <<endl;
}

}