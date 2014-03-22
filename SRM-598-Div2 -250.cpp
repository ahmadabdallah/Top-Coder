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

//SRM 598 Div 2 
class ErasingCharacters
{
public:
	string simulate(string s)
	{

		while (true)
		{
			bool found=false;
			for (int i = 0; i +1 < s.length(); i++)
			{
				if(s[i]==s[i+1])
				{
					s.erase(i,2);
					found=true;
				}
			}

			if(s==""||!found)
				break;

			found=false;

		}
		return s;
	}
};