#include <iostream>
using namespace std;

class Box
{
private:
	int c;
	int k;
	int g;

public:
	Box(int a, int b, int d) : c(a), k(b), g(d) {}
	void V()
	{
		cout << c * k * g << endl;
	}
};

int main()
{
	int c, k, g;
	cin >> c >> k >> g;
	Box box(c, k, g);
	box.V();
	return 0;
}