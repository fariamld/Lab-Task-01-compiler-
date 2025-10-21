
#include<iostream>
using namespace std;

int main()
{
    char a[6] = {'+', '-', '*', '/', '%', '='};
    string input;
    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (input[i] == a[j])
            {
                cout << input[i] << endl;
            }
        }
    }

    return 0;
}
