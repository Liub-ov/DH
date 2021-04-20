#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

class User
{
public:
	unsigned long long p = 7;
	unsigned long long g = 3;
	unsigned long long U = (unsigned long long)pow(g, u) % p;
	void getN(unsigned long long const& N)
	{
		setKey(N);
	}

	friend const bool operator==(const User& user1, const User& user2) { return user1.Key == user2.Key; }
protected:
	unsigned long long Key;
	unsigned long long u = rand() % 10;
	void setKey(unsigned long long const& N)
	{
		Key = (unsigned long long)pow(U, u) % p;
	}
};

class alice :public User
{
	unsigned long long a = u;
public:
	unsigned long long A = U;
};

class bob :public User
{
	unsigned long long b = u;
public:
	unsigned long long B = U;
};