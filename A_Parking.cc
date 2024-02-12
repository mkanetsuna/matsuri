#include <bits/stdc++.h>

using namespace std;

int	main(){
	unsigned int	N, A, B, plan1Amount, plan2Amount;
	cin >> N >> A >> B;
	plan1Amount = A * N;
	plan2Amount = B;
	if (plan1Amount < plan2Amount)
		cout << plan1Amount << endl;
	else
		cout << plan2Amount << endl;

}
