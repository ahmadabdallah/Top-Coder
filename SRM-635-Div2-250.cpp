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

//SRM 635 Div 2 
class IdentifyingWood
{
public:
	string check(string s, string t)
	{
		if (t.length() > s.length())
		{
			return "Nope.";
		}

		int t_count = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (t[t_count] == s[i])
			{
				t_count++;
			}

		}
		if (t_count != sz(t)))
		{
			return "Nope.";
		}
		else
		{
			return "Yep, it's wood.";
		}
	}
};