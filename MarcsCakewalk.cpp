/*
Marc loves cupcakes, but he also likes to stay fit. He eats n cupcakes in one sitting, and each cupcake i  has a calorie count, ci . After eating a cupcake with  c calories, he must walk at least 2^j * c (where j is the number cupcakes he has already eaten) miles to maintain his weight.

Given the individual calorie counts for each of the n cupcakes, find and print a long integer denoting the minimum number of miles Marc must walk to maintain his weight. Note that he can eat the cupcakes in any order.

Input Format

The first line contains an integer, n, denoting the number of cupcakes. 
The second line contains n  space-separated integers describing the respective calorie counts of each cupcake, .
c0,c1...c(n-1)


Print a long integer denoting the minimum number of miles Marc must walk to maintain his weight.

Sample Input 0

3
1 3 2
Sample Output 0

11
*/
#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
#include <bits/stdc++.h>
using namespace std;
int main() {
int n; long long res = 0;
scanf("%d",&n);
int c[n];
for(auto i = 0; i < n; i++)
    scanf("%d",&c[i]);
std::vector<int> v(c, c+n);
std::sort(v.begin(), v.end(), std::greater<>());
for(auto i = 0;i < n; i++)
        res += v[i] * (1ll << i); //make 1 as long long
printf("%ld",res);
return 0;
}
