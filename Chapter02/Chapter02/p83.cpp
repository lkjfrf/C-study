#include <iostream>
using namespace std;

int& RefRetFunction(int &ref)
{
	ref++;
	return ref;
}

int main(void)
{
	int num1 = 10;
	int &num2 = RefRetFunction(num1);

}