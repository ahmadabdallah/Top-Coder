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


//SRM 612 div 2
class LeftAndRightHandedDiv2
{
public :
	int count(string S)
	{
		int result=0;
		if(S.length()==1)
			return result;
		for (int i = 1; i < S.length(); i++)
		{
			if(S[i]=='L'&&S[i-1]!=S[i])
				result++;
		}
		return result;
	}
};