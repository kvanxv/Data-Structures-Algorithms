#include <iostream>
#include <cstring>
#include "Stack.h"
#include "Stack.cpp"
//==================================================================
bool isValid_parenthesis(char expression[])
{
    auto n = strlen(expression);
    Stack<char> stackString = Stack<char>();

    for (int i = 0; i < n; i++)
    {
        if(expression[i] == '{')
        {stackString.Push('{');}
        else if(expression[i] == '[')
        {stackString.Push('[');}
        else if(expression[i] == '(')
        {stackString.Push('(');}

        else if(expression[i] == '}'
                || expression[i]== ']'
                || expression[i] == ')')
        {
            if(expression[i] == '}'
               && (stackString.isEmpty() || stackString.Top() != '{'))
            {return false;}
            else if(expression[i] == ']'
                    && (stackString.isEmpty() || stackString.Top() != '['))
            {return false;}
            else if(expression[i] == ')'
                    && (stackString.isEmpty() || stackString.Top() != '('))
            {return false;}
            else
            {stackString.Pop();}
        }
    }
    if(stackString.isEmpty())
    {return true;}
    else
    {return false;}
}
//===============================================================
int main()
{
    char expr[500];
    std::cin>>expr;

    bool validity = isValid_parenthesis(expr);

    if(validity)
    {std::cout<<"VALID"<<'\n';}
    else
    {std::cout<<"INVALID"<<'\n';}
}