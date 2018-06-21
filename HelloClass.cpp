#include <iostream>
#include "HelloClass.h"

using namespace std;

HelloClass::HelloClass()
{
	cout << "I have been created! " << endl;
}
void HelloClass::SayHello()
{
	cout << "Hello Class! " << endl;
}
HelloClass::~HelloClass()
{
	cout << "I have been destroyed! " << endl;
}
