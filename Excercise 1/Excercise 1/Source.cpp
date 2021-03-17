#include <iostream>
using namespace std;

int distance(int x, int y, int x1, int y1)
{
	int xx1 = x - x1;
	int yy1 = y - y1;
	int dis = abs(xx1) + abs(yy1);
	return dis;
}

int main()
{
	cout << "This program will return the Manhattan Distance of two points" << endl;
	cout << "Begin by entering the x and y coordinates of the first point, point A" << endl;
	int x, y;
	cin >> x;
	cin >> y;
	cout << "Point A is equal to (" << x << "," << y << ")" << endl;
	cout << "Enter the x and y coordinates of the second point, point B" << endl;
	int x1, y1;
	cin >> x1;
	cin >> y1;
	cout << "Point B is equal to (" << x1 << "," << y1 << ")" << endl;

	cout << "The Manhattan Distance between the two points is " << distance(x, y, x1, y1) << endl;
	
	return 0;
}