#include <iostream>
#include <iomanip>
 
using namespace std;
 
class Time
{
    private:
        int sec;
        int hh,mm,ss;
    public:
      
void getTime(void)
{
    cout << "Enter time:" << endl;
    cout << "Hours?   ";          cin >> hh;
    cout << "Minutes? ";          cin >> mm;
    cout << "Seconds? ";          cin >> ss;
}
 
void Seconds()
{
    sec= hh*3600 + mm*60 + ss;
}
 
void displayTime()
{
    cout << "The time is =  " << setw(2) << setfill('0') << hh << ":"
                             << setw(2) << setfill('0') << mm << ":"
                             << setw(2) << setfill('0') << ss << endl;
    cout << "Time in total seconds: " << sec;
}
 };
 
int main()
{
    Time T; //creating objects
     
    T.getTime();
    T.Seconds();
    T.displayTime();
     
    return 0;
}
