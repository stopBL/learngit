
//print hello world with name.
#include<iostream>
#include<string>

using namespace std;

int main()
{
    while(1){
        cout << "Please input your name:" << endl;    
        string name;
        cin >> name;
        cout << name << " Hello,world" << endl;
        cout << "Continue?(Y or N)" << endl;
        char c;
        cin >> c;
        if(c == 'N' || c == 'n')
            break;
    }
    return 0;
}
