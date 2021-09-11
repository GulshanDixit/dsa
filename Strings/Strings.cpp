// Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Palindrom.h"
#include "RestoreIpAddress.h"
#include "StrStr.h"
#include "MinCharToPalindrome.h"


int main()
{
	// palindrome
	string palindromeInput = "A man, a plan, a canal: Panama";
	string palindromeInput2 = "1a2";
	string palindromeInput3 = "a";

	cout << isPalindrome(palindromeInput3) << endl;

	// end palindrome

	// restore ip address
	string ipstring = "25525511135";
	string ipstring2 = "4444";
	string ipstring3 = "44445";
	string ipstring4 = "121212121212";
	string ipstring5 = "0100100";
	for (string str : restoreIpAddresses(ipstring5))
	{
		cout << str << " ";
	}
	cout << endl;
	// end restore ip address

    // pair with given diff
    //vector<int> A{ -533, -666, -500, 169, 724, 478, 358, -38, -536, 705, -855, 281, -173, 961, -509, -5, 942, -173, 436, -609, -396, 902, -847, -708, -618, 421, -284, 718, 895, 447, 726, -229, 538, 869, 912, 667, -701, 35, 894, -297, 811, 322 };
    //cout << pairWithGivenDiff(A, 369);
    // end pair with given diff

    // str str
    cout << strStr("b", "b") << endl;
    // end str str

	// min characters to palindrome
	//cout << minCharactersToMakePalindrome("abcda") << endl;
	//cout << minCharactersToMakePalindrome("abcdba") << endl;
	//cout << minCharactersToMakePalindrome("abcba") << endl;
	cout << minCharactersToMakePalindrome("AACECAAAA") << endl;
	cout << minCharactersToMakePalindrome("abs") << endl;
	// end min characters to palindrome
}

