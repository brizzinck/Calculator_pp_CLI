#pragma once
#include <string>
using namespace std;
using namespace System;
ref class ControllOperators
{
public: 
	inline static string EditingOperators(string input);
	inline static bool IsChar(char �);
	inline static string AddChar(string str, char c);
	inline static bool IsChar(char �, string chars);
private:
	inline static string MinusOperator(string input, int i);
	inline static string ArcOperator(string input, int i);
	inline static string ChangingCharactersArc(string input, int i);
};

