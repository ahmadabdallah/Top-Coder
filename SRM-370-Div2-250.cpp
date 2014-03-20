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

//SRM 370 div 2

class Containers
{
public :
	int wastedSpace(vector <int> containers, vector <int> packages)
	{
		int sum1,sum2=0;
		for(int cont : containers)
			sum1+=cont;
		for(int pack : packages)
			sum2+=pack;
		return sum2-sum1;
	}
};