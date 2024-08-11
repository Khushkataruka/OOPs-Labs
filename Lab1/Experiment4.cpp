#include <iostream>
#include <string>
using namespace std;
// structure of a telephone bill
struct telephonebill
{
    string name;
    int calls;
    // function to calculate telephone bill based on no of calls
    float calculatebill(int no_of_calls)
    {
        float bill;
        if (no_of_calls > 0 && <= 100)
        {
            bill = 200;
        }
        else if (no_of_calls > 100 && no_of_calls <= 150)
        {
            bill = 200 + 0.6 * (no_of_calls - 100);
        }
        else if (no_of_calls > 150 && no_of_calls <= 200)
        {
            bill = 200 + 0.6 * (50) + 0.5 * (no_of_calls - 150);
        }
        else
        {
            bill = 200 + 0.6 * (50) + 0.5 * (50) + 0.4 * (no_of_calls - 200);
        }
        return bill;
    }
};

int main()
{
    struct telephonebill user;
    cout << "Enter Your name: " << endl;
    cin >> user.name;
    cout << "Enter Number of calls: " << endl;
    cin >> user.calls;
    cout << "Name : " << user.name << endl
         << "bill : " << user.calculatebill(user.calls) << "rs" << endl;
    return 0;
}