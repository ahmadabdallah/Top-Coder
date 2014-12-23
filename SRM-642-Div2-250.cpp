#include <string>
#include <bitset>
#include <limits>
#include<math.h>
#include<cmath>
#include<fstream>
#include<bitset>
#include<vector>
#include <sstream>
#include<algorithm>
#include<time.h>
#include<set>
#include<map>
#include<iostream>
#include <numeric>

using namespace std;

//SRM 642 Div 2 

class ForgetfulAddition
{
public:
	int convert(string s)
	{
		istringstream is(s);
		int value;
		is >> value;
		return value;
	}

	int minNumber(string expression)
	{
		int min_result = 99999999;
		for (int i = 0; i < expression.length() - 1; i++)
		{
			int left = convert(expression.substr(0, i + 1));
			int right = convert(expression.substr(i + 1, expression.length()));
			min_result = std::min(min_result, left + right);

		}
		return min_result;
	}

};