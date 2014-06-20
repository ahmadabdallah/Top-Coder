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

//SRM 480 Div 2 
class Cryptography
{
public:

	long long encrypt(vector <int> numbers)
	{
		std::sort(numbers.begin(), numbers.end());
		numbers[0]++;

		long long result = 1;

		for (int i = 0; i < numbers.size(); i++)
		{
			result *= numbers[i];
		}

		return result;
	}
};
