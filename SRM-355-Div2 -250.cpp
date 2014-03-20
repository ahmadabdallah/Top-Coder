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

//SRM 355 Div 2 accepted;
class ValueAddedTax
{
public:
	double calculateFinalPrice(string product, int price, vector <string> food)
	{
		double Res=price;

		if(std::find(food.begin(),food.end(),product)!=food.end())
		{
			double tax=(10.0/100.0)*price;
			Res+=tax;
		}
		else
		{
			double tax=(18.0/100.0)*price;
			Res+=tax;
		}
		return Res;
	}
};
