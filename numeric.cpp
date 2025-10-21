#include <iostream>
using namespace std;

int main()
{
    string input;
    cin >> input;

    bool isNumeric = true;

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] < '0' || input[i] > '9')
        {
            isNumeric = false;
            break;
        }
    }

    if (isNumeric)
        cout << "numeric constant\n";
    else
        cout << "not numeric\n";

    return 0;
}
