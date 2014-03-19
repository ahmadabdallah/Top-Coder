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

//SRM 609 Div 2
class MagicalStringDiv2
{

public:
	int minimalMoves(string S)
	{
		int result=0;
		string::iterator it;
		int index = 0;
		for (it = S.begin() ; it < S.end(); ++it, ++index)
		{
			if(*it=='<' &&index<S.length()/2)
				++result;
			else if(*it=='>' && index>=S.length()/2)
				++result;
		}

		return result;
	}
};