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

//SRM 610 div 2 
class  DivideByZero
{
public:


	int CountNumbers(vector <int> numbers)
	{

		int result=0;
		set<int> addedNumbers(numbers.begin(),numbers.end());
		int size=0;
		while (addedNumbers.size()>size)
		{
			size=addedNumbers.size();

			for (int a : addedNumbers)
			{
				for (int b : addedNumbers)
				{
					if(a>b && addedNumbers.count(a/b))
					{
						addedNumbers.insert(a/b);
					}
				}
			}

		}

		return addedNumbers.size();

	}
};