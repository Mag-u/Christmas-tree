#include <iostream>

using namespace std;


int main()
{
	int sizeOfTree = 0;
	int copyOfSize = 0;
	string space = "";
	string tree = "#";
	cout << "Input a size of the Christmass Tree: ";
	cin >> sizeOfTree;
	for (int i = 0; i < sizeOfTree; i++)
	{
		copyOfSize = sizeOfTree;
		while (copyOfSize -i > 0)
		{
			space +=" ";
			copyOfSize--;
		}
		if (tree.size() > 1)
		{
			cout << space << tree << endl;
		}
		else {
			cout << space << "@" <<endl;
		}
		tree += "##";
		space = "";
	}
	while (copyOfSize +1> 0)
	{
		space += " ";
		copyOfSize--;
	}
	cout << space << "#";
}
