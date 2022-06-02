#include <bits/stdc++.h>

using namespace std;

int reverseNum(int num)
{
    // 12==> 421 => 400+ 20 + 1
    //step=>1
    //rev_num=4
    //num= 12

     //step=>2
    //rev_num=40 +2
    //num= 1

    //step=>3
    //rev_num=420 + 1 => 421
    //num= 0


	int rev_num = 0;
	while (num > 0) {
		rev_num = rev_num * 10 + num % 10;
		num = num / 10;
	}
	return rev_num;
}


int main()
{
	int num;
	cin>>num;
	cout << "Reverse of no. is " << reverseNum(num);

	return 0;
}
