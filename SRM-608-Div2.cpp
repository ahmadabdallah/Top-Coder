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

//SRM 608 div 2
class OneDimensionalRobotEasy
{
public :
	int finalPosition(string commands, int A, int B)
	{
		int position=0;
		for (int i = 0; i < commands.length(); i++)
		{
			if(commands[i]=='R'&&position<B)
				position++;
			else if(commands[i]=='L'&& position>(-1*A))
				position--;
		}
		return position;
	}
};