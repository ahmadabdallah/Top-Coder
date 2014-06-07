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

class TwoWaysSorting
{

public:
	
	string sortingMethod(vector <string> stringList)
	{
		bool lex = true, len = true;

		for (int i = 0; i < stringList.size() - 1; i++)
		{

			len = len && (stringList[i].length() < stringList[i + 1].length());
			lex = lex && (stringList[i] < stringList[i + 1]);

		}
		if (lex && len)
			return "both";
		else  if (len && !lex)
			return "lengths";
		else if (lex && !len)
			return "lexicographically";
		else
			return "none";
	}
};