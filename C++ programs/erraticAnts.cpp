/*
Erratic Ants(ICPC Qualifier 2013)
Problem ID: erraticants

The ants of a particular colony are in search of food. Unfortunately hidden dangers are all around the colony
which makes foraging difficult. There are traps, obstacles, and predators lurking about. Fortunately, the colony has
the perfect ant for the job. Max is neither a smart ant nor an efficient ant but he has got blind luck on his side. In all
of his wanderings, he has always managed to stay on safe ground and he (eventually) always finds a source of food to
report back to the colony.
The problem is that Max rarely takes anything resembling an optimal (shortest) route to find a food source. However,
Max can reliably bring back the exact details of the (often winding and convoluted) path that he took to get to the
food source. Your job is to help the colony by finding the optimal route located within Max’s convoluted directions to
allow the colony to forage more efficiently.
Input
The first integer in the input, 1<=n<=100, denotes the number of paths to food that Max has reported back. This is
followed by a blank line and then descriptions of each of the n paths. Each path description begins with an integer,
s (0<=s<=60), which denotes the number of steps taken in the path. The next s lines contain directional steps
expressed as upper-case characters N, E, S, and W corresponding to steps taken in the directions north, east, south,
and west respectively. Each step moves Max one unit of distance. Max’s paths always start at the colony and end at a
food source. Between each pair of path descriptions is a blank line.
When searching for an optimal path, the only directional steps that may be taken are ones that have previously
been taken by Max, or the same steps in reverse.
Output
For each given path, give the number of steps found to be in an optimal (shortest) path.

*/

/*
INPUT:
1st line: Number of steps ant takes
All other lines: the direction that the ant walks ("N", "E", "S", or "W")

OUTPUT:
The shortest amount of steps it takes for the ant colony to get to the food source.
*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
int moves=0;
cin>>moves;
cin.ignore(10000, '\n');
string * arr=new string[moves];
int * xPos=new int[moves+1];
int * yPos=new int[moves+1];
int * skip=new int[60];
int skipCounter=0;
	for(int x=0; x<moves; x++)
	{
	xPos[x]=0;
	yPos[x]=0;
	}

	for(int x=0; x<60; x++)
	{
		skip[x]=0;
	}

	for(int x=1; x<=moves; x++)
	{
	getline(cin, arr[x]);
		if(x==0)
		{
			if(arr[x]=="N")
				yPos[x]++;
			if(arr[x]=="E")
				xPos[x]++;
			if(arr[x]=="S")
				yPos[x]--;
			if(arr[x]=="W")
				xPos[x]--;
		}
		else
		{
		if(arr[x]=="N")
		{
			yPos[x]=yPos[x-1]+1;
			xPos[x]=xPos[x-1];
		}
		if(arr[x]=="E")
		{
			xPos[x]=xPos[x-1]+1;
			yPos[x]=yPos[x-1];
		}
		if(arr[x]=="S")
		{
			yPos[x]=yPos[x-1]-1;
			xPos[x]=xPos[x-1];
		}
		if(arr[x]=="W")
		{
			yPos[x]=yPos[x-1];
			xPos[x]=xPos[x-1]-1;
		}
		}
	}
	
	for(int a=0; a<moves; a++)
	{
		for(int b=a+1; b<=moves; b++)
		{
			if(xPos[a]==xPos[b] && yPos[a]==yPos[b])
			{
			skip[skipCounter]=a;
			skip[skipCounter+1]=b;
			skipCounter=skipCounter+2;
			}
		}
	}

	int answer=moves;
	for(int x=0; x<60; x+=2)
	{
		answer=answer-abs(skip[x]-skip[x+1]);
	}
	cout << answer;
}

