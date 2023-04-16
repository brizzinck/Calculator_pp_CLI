#include "ControllOperators.h"
string ControllOperators::EditingOperators(string input)
{
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '-')
        {
            input = MinusOperator(input, i);
            i++;
        }
        else if (input[i] == '(' || input[i] == ')')
        {
            input = ArcOperator(input, i);
            input = ChangingCharactersArc(input, i);
        }
        else if (input[i] == ',')
        {
            input[i] = '.';
        }
    }
    return input;
}
bool ControllOperators::IsChar(char ñ)
{
    string chars = "+/*^()%";
    if (chars.find(ñ) != -1)
        return true;
    return false;
}
inline string ControllOperators::AddChar(string strCLI, char c)
{
    strCLI += c;
    return strCLI;
}
bool ControllOperators::IsChar(char ñ, string chars)
{
    if (chars.find(ñ) != -1)
        return true;
    return false;
}
string ControllOperators::MinusOperator(string input, int i)
{
    int y = i--;
    if (y <= 0) return input;
    if (!IsChar(input[i], "(+/*^%"))
    {
        input[y] = '+';
    }
    return input;
}
string ControllOperators::ArcOperator(string input, int i)
{
    int y = i;
    if (input[i] == '(') y = i - 1;
    if (input[i] == ')') y = i + 1;
    if (y >= input.length()) return input;
    else if (y < 0 || IsChar(input[y++], "-+/*^%")) return input;
    else input[y] = '*';
    return input;
}
string ControllOperators::ChangingCharactersArc(string input, int i)
{
    if (i - 1 <= 0) return input;
    else if (input[i] == '(' && input[i - 1] == '-')
    {
        input = input.erase(i - 1, 1);
        for (int y = i - 1; y < input.length(); y++)
        {
            if (IsChar(input[y], "(+/*^%"))
            {
                input[y + 1] = '-';
                y++;
            }
            else if (input[y] == '-')
            {
                input = input.erase(y, 1);
                input[y] = '+';
            }
            else if (input[y] == ')') break;
        }
    }
    return input;
}
