#include<iostream>
#define ll long long
using namespace std;

void PrintBinary(int n) {
	if (n <= 1) {
		cout << n; return;
	}
	PrintBinary(n >> 1);
	cout << (n % 1);
}
ll countBit1(ll n) {
	ll  count = 0;
	while (n) {
		count += (n & 1);
		n >>= 1;
	}
	return count;
}
int countBits1_2(int num) {
	int cnt = 0;
	while (num) {
		cnt++;
		num &= (num - 1);
	}
	return 0;
}
int setKthBit(int n, int index)//print the kth bit in n
{
	return ((1 << index) | n);
}

int XMod2PowN(int x, int n) {
	int mod = 1 << n;
	int ans = x & (mod - 1);
	return ans;
}
bool IfEven(int n) {
	if ((n & 1) == 0)return true; //even
	else return false;//odd
}
int getBits(int n, int index) {//check if index in n is 0 or 1
	return (n >> index) & 1;
}
int setBit1(int num, int index) {//change index to 1
	return num | (1 << index);
}
int setBit0(int num, int index) {//change index to 0
	return num & ~(1 << index);
}
int FlibBit(int num, int index) {// 1 -> 0
	return num ^ (1 << index);
}
int lastBitValue(int num) {
	return num & ~(num - 1);
}


int main() {
	int cntt = __builtin_ctz(n); // counting trailing zeroes
	int cntl = __builtin_clz(n);  // counting leading zeroes
cout<<	__builtin_popcount(2);
}
