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

//srm 331 div 2 
int giftCount[50]={0};

class SantaGifts
{
public :
	vector <string> distribute(vector <string> gifts, int N)
	{
		vector<string> result(N);
		int count=0;

		while (gifts.size()>0)
		{
			count=count%N;

			if(giftCount[count]<4)
			{
				if(result[count]!="")
					result[count]+=" ";

				result[count]+=gifts[0];

				giftCount[count]++;
			}
			gifts.erase(gifts.begin(),gifts.begin()+1);
			++count;
		}
		return result;
	}
};
