/**
This program will take user input and return the Letter grade
**/
#include <iostream>
using namespace std;

int main() {
	int num; // stores the grade number
	cout << "Enter in the grade that you scored on your test!"<< endl; // Takes user input, user will input the grade the received
	cin >> num;

	if(num == 100){
        cout <<"You scored a perfect score"<<endl;
	} // If Statement that will return that the user made a perfect score if they enter in 100
	else if (num  <= 99 && num >= 90 ){

        cout <<" Your grade is an A!" << endl;
	}// If Statement that will return that the user made an A
    else
         if (num  <= 89 && num >= 80 ){
        cout <<" Your grade is a B!" << endl;
    } // If Statement that will return that the user made a B
    else
          if(num  <= 79 && num >= 70 ){
        cout <<" Your grade is a C!" << endl;
    } // If Statement that will return that the user made a C

    else
        if (num  <= 69 && num >= 60 ){
        cout <<" Your grade is a D!" << endl;
    } // If Statement that will return that the user made a D
    else
        if (num  <= 59 && num >= 0 ){
        cout <<" Your grade is a F! Study harder next time!" << endl;
    } // If Statement that will return that the user made a F and advises the user to study harder

    else {
        cout <<"Please enter in a valid number"<< endl;
    } // else statement if the user enters in an invalid number

return 0;

} // end of the code
