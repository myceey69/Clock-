#include <iostream> 
#include <windows.h>

using namespace std;

int main() {

    int hrs, mins, sec, a, err;              //initialize variables
    err = a = 0;
    while (err == 0)
    {
        cout << "enter hour: " << endl;          //input hours
        cin >> hrs;
        cout << "enter minutes: " << endl;      //input minutes
        cin >> mins;
        cout << "enter seconds: " << endl;      //input seconds
        cin >> sec;
        if (hrs < 23 && mins < 60 && sec < 60) {
            err++;
        }
        else {
            system("cls");
        }
        while (a == 0) {
            system("cls");     // clears the screen everytime it loops. 
           
            cout << "<==========>" << endl;
            cout << "  " << hrs << ":" << mins << ":" << sec << endl;             //display and runs the clock with the numbers you inputted. 
            cout << "<==========>" << endl; 
           
            Sleep(1000);            //changes the time by 1000 milliseconds which is 1 second. 
            sec++;
            if (sec > 59) {
                sec = 0;
                mins++;
            }
            if (mins > 59) {
                mins = 0;
                hrs++;
            }
            if (hrs > 23) {
                hrs = 0;

            }
        }

    }
    return 0;

}
