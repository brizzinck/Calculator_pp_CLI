#pragma once
#include <string>
#include <stack>

using namespace std;

class CalcValuer
{
public:
	inline static string CalculateValue(string value);
private:
	inline static string GetExpression(string input);
	inline static string Counting(string input);
	inline static int DistributeNumbers(string input, int i);
	inline static void CountingTwoNumbers(char c);
	inline static int AllDistribute(string input, int i);
	inline static void MakeExpression(string input);
	inline static void DistributeOperators(char c);
	inline static int GetPriority(char c);
	inline static bool IsDelimeter(char c);
	inline static int WriteNumbers(string input, int i);
};
