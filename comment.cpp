#include<iostream>
using namespace std;
int main()
{
    string input;
    cin>>input;



        if(input[0]=='/'&& input[1]=='/')
        {
            cout<<"single line comment"<<endl;

        }

        else if(input[0]=='/'&& input[1]=='*'&& input[input.length()-2]=='*'&& input[input.length()-1]=='/')
        {
            cout<<"multiple line comment"<<endl;
        }


    return 0;
}
