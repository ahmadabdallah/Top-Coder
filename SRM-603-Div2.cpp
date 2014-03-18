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


//SRM 603 Div 2 
class MiddleCode
{
public:
	string encode(string s)
	{
		string t="";
		do
		{
			if(s.length()%2!=0)
			{
				char tmp=s[s.length()/2];
				t+=tmp;
				s.erase(s.length()/2,1);

			}
			else
			{
				int prev=s.length()/2;
				int next=s.length()/2-1;
				if(int(s[prev])>int(s[next]))
				{
					char tmp=s[next];
					t+=tmp;
					s.erase(next,1);
				}
				else
				{
					char tmp=s[s.length()/2];
					t+=tmp;
					s.erase(s.length()/2,1);
				}
			}
		}while(s.length()>0);
		return t;
	}
};
