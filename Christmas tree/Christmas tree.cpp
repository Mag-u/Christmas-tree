#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
using namespace std;

bool even(int number)
{
	if (number % 2 == 0)
		return true;
	return false;

}

string christamsBalls(string balls)
{
	vector <int> locationOfBalls;
	string treeWithBalls = "*";
	int amountOfBalls = 0;
	amountOfBalls = (rand() % balls.length());

	for (int i = 0; i < amountOfBalls; i++)
	{
		int key = 0;
		key = (rand() % balls.length());

		if (count(locationOfBalls.begin(), locationOfBalls.end(), key))
		{
			amountOfBalls++;
		}
		else {
			locationOfBalls.push_back(key);
		}
	}

	for (int i = 1; i < balls.size(); i++)
	{
		if (count(locationOfBalls.begin(), locationOfBalls.end(), i))
		{
			treeWithBalls+="o";
		}
		else {
			treeWithBalls += "*";
		}
	}
	return treeWithBalls;
}
int main()
{
	int sizeOfTree = 4;
	int copyOfSize = 0;
	int row = 0;
	int number = 0;
	string space = "";
	string tree = "*";
	string copyForTree = "";

	cout << "Input the size of the Christmass Tree: ";
	cin >> sizeOfTree;

	srand(time(NULL));
	row = (rand() % sizeOfTree);

	for (int i = 0; i < sizeOfTree; i++)
	{
		number = rand() % 100;

		copyOfSize = sizeOfTree;
		while (copyOfSize - i > 0)
		{
			space += " ";
			copyOfSize--;
		}

		if (i == row)
		{
			copyForTree = tree;
			cout << space <<christamsBalls(copyForTree) <<endl;
		}


		else if (tree.size() > 1)
		{
			cout << space << tree << endl;
		}
		else {
			cout << space << "@" << endl;
		}
		tree += "**";
		space = "";
	}
	while (copyOfSize + 1 > 0)
	{
		space += " ";
		copyOfSize--;
	}
	cout << space << "#";

}