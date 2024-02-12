#include <bits/stdc++.h>
#include <string>

using namespace std;

bool	is_palindrome(int n){
	string	s = to_string(n);
	int	i = 0, j = s.length() - 1;

	while (i < j) {
		if (s[i] != s[j])
			return (false);
		i++;
		j--;
	}
	return (true);
}

int	main() {
	int	A, B;
	int	count = 0;

	cin >> A >> B;
	for (int i=A; i<=B; i++)
		if (is_palindrome(i))
			count++;
	cout << count << endl;
}
