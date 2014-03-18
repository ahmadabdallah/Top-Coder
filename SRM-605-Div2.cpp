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

//SRM 605 Div 2
class AlienAndPassword
{
public :
	int getNumber(string S)
	{
		char prev=S[0];
		int result=1;
		for (int i = 1; i < S.length(); i++)
		{
			if(S[i]!=prev)
			{
			++result;
			prev=S[i];
			}

		}
		return result;
	}
};
