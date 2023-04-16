#pragma once
#include "Caluclater.h"
#include "ControllOperators.h"
static double result = 0;
static stack<double> temp;
static string currentNumber;
static stack<char> operStack;
static string output;

inline string CalcValuer::CalculateValue(string value)
{
	while (!temp.empty()) {
		temp.pop();
	}
	while (!operStack.empty()) {
		operStack.pop();
	}
	return Counting(GetExpression(value));
}
inline string CalcValuer::GetExpression(string input)
{
	output = "";
	MakeExpression(input);
	while (temp.size() > 0)
	{
		output += to_string(temp.top()) + " ";
		temp.pop();
	}
	return output;
}
inline int CalcValuer::DistributeNumbers(string input, int i)
{
	if (isdigit(input[i]) || input[i] == '-')
	{
		while (!IsDelimeter(input[i]) && !ControllOperators::IsChar(input[i]))
		{
			output += input[i];
			i++;
			if (i == input.length()) break;
		}
		i--;
	}
	return i;
}
inline void CalcValuer::CountingTwoNumbers(char c)
{
	double a = temp.top();
	temp.pop();
	double b = temp.top();
	temp.pop();

	switch (c)
	{
		case '+': result = b + a; break;
		case '*': result = b * a; break;
		case '/': result = b / a; break;
		case '%': result = b * (a / 100); break;
		case '^': result = pow(b, a); break;
	}

	temp.push(result);
}
inline int CalcValuer::AllDistribute(string input, int i)
{
	int y = i;
	y = DistributeNumbers(input, y);
	DistributeOperators(input[i]);
	return y;
}
inline void CalcValuer::MakeExpression(string input)
{
	for (int i = 0; i < input.length(); i++)
	{
		if (IsDelimeter(input[i])) continue;
		i = AllDistribute(input, i);
	}
	while (!operStack.empty())
	{
		output += operStack.top();
		operStack.pop();
	}
}
inline void CalcValuer::DistributeOperators(char c)
{
	if (ControllOperators::IsChar(c))
	{
		if (c == '(')
			operStack.push(c);
		else if (c == ')')
		{
			char s = operStack.top();
			operStack.pop();
			while (s != '(')
			{
				output += string(1, s) + ' ';
				s = operStack.top();
				operStack.pop();
			}
		}
		else
		{
			if (!operStack.empty())
				if (GetPriority(c) <= GetPriority(operStack.top()))
				{
					output += string(1, operStack.top()) + ' ';
					operStack.pop();
				}
			operStack.push(c);
		}
		output += " ";
	}
}
inline int CalcValuer::GetPriority(char c) {
	switch (c)
	{
		case '(':
		case ')':
			return 1;
		case '+':
			return 2;
		case '*':
		case '/':
			return 3;
		case '%':
		case '^':
			return 4;
	default: return 0;
	}
}
inline bool CalcValuer::IsDelimeter(char c)
{
	if (c == ' ')
		return true;
	return false;
}
inline int CalcValuer::WriteNumbers(string input, int i)
{
	try
	{
		currentNumber = "";
		while (!IsDelimeter(input[i]) && !ControllOperators::IsChar(input[i]))
		{
			currentNumber += input[i];
			i++;
			if (i == input.length()) break;
		}
		temp.push(std::stod(currentNumber));
		i--;
		return i;
	}
	catch (const std::exception&)
	{

	}
}
inline string CalcValuer::Counting(string input)
{
	try
	{
		result = 0;
		for (int i = 0; i < input.length(); i++)
		{
			if (isdigit(input[i]) || input[i] == '-')
				i = WriteNumbers(input, i);
			else if (ControllOperators::IsChar(input[i]))
				CountingTwoNumbers(input[i]);
		}
		return to_string(temp.top());
	}
	catch (const std::exception&)
	{

	}
}