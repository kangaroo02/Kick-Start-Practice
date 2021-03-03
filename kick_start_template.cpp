/*
 * kick_start_template.cpp
 *
 *  Created on: 2021/02/19
 *		Author: kangaroo02
 *      Prototype Reference: tmwilliamlin168
 */

#include <bits/stdc++.h>
#include <iostream>
#include <algorithm> // sort
#include <vector>
#include <stdio.h>
#include <climits>	// INT_MAX
#include <utility>  // std::pair, std::make_pair
#include <iomanip>	// setw
#include <math.h>	// log
#include <iomanip>  // std::setprecision

using namespace std;

typedef long long ll;
typedef long double ld;

void solve(int round) {
	ll ans = 0;
	/* USER INPUT CODE BEGIN */



	/* USER INPUT CODE END */
	cout << "Case #" << round << ": " << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	/* change the path to your own input file */
	freopen("C:\\Sublime_text\\Kick_Start_Practice\\in", "r", stdin); // delete this line when you upload the file

	int T;
	cin >> T;
	for (int round = 1; round <= T; round++) {
		solve(round);
    }
	cout << flush;

    return 0;
}
