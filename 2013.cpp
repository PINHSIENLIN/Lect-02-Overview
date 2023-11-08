// Write a program that can input and store the math, English, 
// and computer scores of five students in the class, and print out the average of each subject
// Sample Input
// 100 90 80
// 90 80 100
// 80 100 90
// 90 90 90
// 90 90 90

#include<iostream>
#include <iomanip>
using namespace std;
# define PEOPLE 5

// Declare a structure
struct student
{
    int math;
    int english;
    int computer;
};


int main(){

student s[PEOPLE], sum = {0};

//   Input scores
for (int i = 0; i < PEOPLE; i++)
{
    cin >> s[i].math;
    cin >> s[i].english;
    cin >> s[i].computer;
}

// Calculate the sum
for (int i = 0; i < PEOPLE; i++)
{
    sum.math += s[i].math;
    sum.english += s[i].english;
    sum.computer += s[i].computer;
}

// Print the mean setprecision(2)
cout << setprecision(2) << fixed;
cout << (double)sum.math/PEOPLE << endl  << (double)sum.english/PEOPLE << endl << (double)sum.computer/PEOPLE;

return 0;
}