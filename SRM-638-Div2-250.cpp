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

//SRM 638 Div 2 
class NamingConvention
{
public:
	string  toCamelCase(string variableName)
	{

		for (int i = 0; i < variableName.length(); i++)
		{
			if (i == variableName.length() - 1)
				break;
			if (variableName[i] == '_')
			{
				variableName[i + 1] = toupper(variableName[i + 1]);
				for (int j = i + 1; j < variableName.length(); j++)
				{
					variableName[j - 1] = variableName[j];
				}
				variableName = variableName.substr(0, variableName.length() - 1);
			}
		}
		return variableName;
	}
};