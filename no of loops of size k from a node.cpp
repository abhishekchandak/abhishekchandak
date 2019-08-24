// C++ Program to find number of cycles of length
// k in a graph with n nodes.
#include <bits/stdc++.h>
using namespace std;

// Return the Number of ways from a
// node to make a loop of size K in undirected
// complete connected graph of N nodes
int numOfways(int n, int k)
{
	int p = 1;

	if (k % 2)
		p = -1;

	return (pow(n - 1, k) + p * (n - 1)) / n;
}

// Driven Program
int main()
{
	int n = 4, k = 2;
	cout << numOfways(n, k) << endl;
	return 0;
}
