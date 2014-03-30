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

class MicroStrings
{
public:

	string convert(int n)
	{
		ostringstream conv;
		conv << n;
		return conv.str();
	}
	string makeMicroString(int A, int D)
	{
		string result=convert(A);
		int sum=0;
		int factor=1;
		int progression=0;
		while (progression>=0)
		{
			progression=A-factor*D;
			if(progression>=0)
			{
				result+=convert(progression);
			}
			++factor;
		}
		
		return result;

	}

};