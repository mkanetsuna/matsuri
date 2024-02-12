#include <bits/stdc++.h>

using namespace std;

int	main(){
	unsigned int	N, thP, huP, teP, onP;
	cin >> N;
	thP = N / 1000;
	huP = (N % 1000) / 100;
	teP = (N % 100) / 10;
	onP = (N % 10);
	if (huP == teP && (thP == huP || teP == onP))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
