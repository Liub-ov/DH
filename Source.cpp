#include "DH.h"

int main()
{
	alice Alice;
	bob Bob;
	Alice.getN(Bob.B);
	Bob.getN(Alice.A);
	cout << (Bob == Alice);
	return 0;
}
