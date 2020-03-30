#include <iostream>
#include <stack>
using namespace std;

bool inLanguage(char* theString)
{
     stack<char> theStack;
     int i = 0;

     while(theString[i] != NULL)
     {
          if ((theString[i] != 'A') && (theString[i] != 'B'))
          {
               return false;
          }

          if(theStack.empty())
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

     if(theStack.empty())
     {
          return true;
     }
     else
     {
          return false;
     }
}