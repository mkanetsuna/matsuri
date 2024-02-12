/*
問題文
E869120は
1円硬貨をA 枚と 
500円硬貨を無限枚持っています.
これらの硬貨だけを使うことによって, 
ちょうどN円を支払うことができるかを判定しなさい.

制約
Nは1以上10000以下の整数
Aは0以上1000以下の整数

入力
以下の形式で標準入力から与えられる.
N
A

出力
E869120の持っている1円硬貨と500円硬貨だけで,ちょうど 
N円を支払うことができるならばYes,そうでないならばNoを出力しなさい.
*/

#include <bits/stdc++.h>

using namespace std;

int     main() {
	int	A, N, i = 0, temp = 0;
	bool	flag = false;
	cin >> N >> A;
	do {
		temp = 500 * i++;
		if (N >= temp && N <= temp + A) {
			cout << "Yes" << endl;
			flag = true;
			break;
		}
	} while(temp + A <= N);
	if (!flag)
		cout << "No" << endl;
}
