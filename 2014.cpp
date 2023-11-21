// Use a structure array to write a program that can input and store the math, English, 
// and computer scores of classmates (maximum number of 5 people), and provide the following functions:

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

// user input choice
int choice;

// Record count of input
int count = 0;


while(true) {
    
    cin >> choice;

    // choice = 1, Insert scores
    if (choice == 1) {

        cin >> s[count].math;
        cin >> s[count].english;
        cin >> s[count].computer;
        count++;   
    }
    // choice = 2, Look up specific 
    else if (choice == 2){
        int num;
        cin >> num;
        cout << s[num - 1].math << endl << s[num - 1].english << endl << s[num - 1].computer << endl;
    }
    // choice = 3, Modify individual  
    else if (choice == 3){
        int num;
        cin >> num;
        cout << s[num - 1].math << endl << s[num - 1].english << endl << s[num - 1].computer << endl;
    }
    // choice = 4, List all students 
    else if (choice == 4){
        for(int i = 0; i < count; i++){
        cout << s[i].math << endl << s[i].english << endl << s[i].computer << endl;
        }
    }
    // choice = 5, Caluate global mean 
    else if (choice == 5) {
        for (int i = 0; i < count; i++)
        {
            sum.math += s[i].math;
            sum.english += s[i].english;
            sum.computer += s[i].computer;
        }
        cout << setprecision(2) << fixed;
        cout << (double)sum.math/count << endl  << (double)sum.english/count << endl << (double)sum.computer/count << endl;
    }
    // choice = 6, Caluate local mean 
    else if (choice == 6) {
        int num;
        cin >> num;
        cout << setprecision(2) << fixed;
        cout << ((double)s[num-1].math + s[num-1].english + s[num-1].computer)/3 << endl;
    }
    else if (choice == 0){
        return 0;
    }
        // system("pause");
        // system("cls");
}

return 0;
}