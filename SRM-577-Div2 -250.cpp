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


//SRM 577 Div2  accepted
class EllysNewNickname
{
public:

	int getLength(string nickname)
	{
		string vows="aeiouy";
		int Result=0;
		for (int i = 0; i < nickname.length(); i++)
		{
			int pos;
			pos=vows.find(nickname[i]);
			if(pos>=0)
			{
				Result++;
				i++;
				while (true)
				{
					if(i>nickname.length()-1)
						break;

					pos=vows.find(nickname[i]);
					if(pos>=0)
						i++;
					else
					{
						Result++;
						break;
					}
				}
			}
			else
				Result++;

		}
		return Result;
	}
};

