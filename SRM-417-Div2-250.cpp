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



//SRM 417 div2
class ReversedSum
{
public:
	int Reverse(int x)
	{
		int result=0;
		do
		{
			result=result*10+ x%10;
			x=x/10;

		} while (x);
		return result;
	}

	int getReversedSum(int x, int y)
	{
		return Reverse(Reverse(x)+Reverse(y));
	}
};