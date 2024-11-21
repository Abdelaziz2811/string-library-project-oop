//this is .cpp file where the methods of clsString class called.
#include <iostream>
#include "clsString.h"

using namespace std;

int main() {

	clsString String1;

	String1.value = "    Hello how are, I am abdelaziz bahoumi; I am learnning programming. ...";

	cout << " Text : " << String1.value << endl;

	cout << " Number of words in text : " << String1.CountWords() << endl;

	cout << " First Letter of Each word : "; String1.FirstLetterOfEachWord();

	cout << "\n Upper First Letter of each word : " << String1.UpperFirstLetterOfEachWord() << endl;

	cout << " Lower First Letter of each word : " << String1.LowerFirstLetterOfEachWord() << endl;

	cout << " Upper all Letters of Text : " << String1.UpperEachWordLetter() << endl;

	cout << " Lower all Letters of Text : " << String1.LowerEachWordLetter() << endl;

	cout << " Invert all Letters of Text : " << String1.InvertAllLetters() << endl;

	cout << " Count Capital Letters of Text : " << String1.CountCapitalLetters() << endl;

	cout << " Count Small Letters of Text : " << String1.CountSmallLetters() << endl;

	cout << " Count Punctuation of Text : " << String1.CountPunctuation() << endl;

	cout << " Count Choosed letter of Text : " << String1.CountChoosedLetter('m', false) << endl;

	cout << " Count vowels : " << String1.VowelCount() << endl;

	cout << " Print vowels : "; String1.PrintVowels();

	vector <string> vS1Data = String1.SplitString(" ");

	cout << "\n Print Words From vector with (-) seperator : "; for (string& Word : vS1Data) { cout << Word << "-"; }

	cout << "\n Trim Left the text : " << String1.TrimLeft() << endl;

	cout << " Trim Right the text : " << String1.TrimRight() << endl;

	cout << " Text bofore Trim : " << String1.value << endl;

	cout << " Text after Trim the both sides : " << String1.Trim() << endl;

	cout << " Join String : " << String1.JoinString("/-/") << endl;

	cout << " Reverse string : " << String1.ReverseString(" ") << endl;

	cout << " Replace word using built in function : " << String1.ReplaceWordBuiltInF("Hello", "Hi") << endl;

	cout << " Replace word using vector : " << String1.ReplaceWord("programming", "Desktop Dev", " ") << endl;

	cout << " Remove all Punctuations : " << String1.RemoveAllPunct() << endl;



	return 0;
}
