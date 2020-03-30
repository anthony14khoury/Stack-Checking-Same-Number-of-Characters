#include <iostream>
#include <stack>
using namespace std;

bool inLanguage(string theString)
{
    stack<char> theStack;
    int i = 0;

    while (theString[i] != NULL)
    {
        if ((theString[i] != 'A') && (theString[i] != 'B'))
        {
            return false;
        }

        if (theStack.empty())
        {
            theStack.push(theString[i]);
        }
        else
        {
            if (theStack.top() == theString[i])
            {
                theStack.push(theString[i]);
            }
            else
            {
                theStack.pop();
            }
        }

        i++;
    }

    if (theStack.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    string temp = "";
    cin >> temp;
    if (inLanguage(temp) == false)
    {
        cout << "False" << endl;
        return false;
    }
    else
    {
        cout << "True" << endl;
        return true;
    }
}