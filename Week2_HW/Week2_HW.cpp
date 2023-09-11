#include <iostream>
#include <string>
#include <cctype>

using namespace std;

static void divisibleBy(int div1, int div2)
{
    cout << "Divisible by " << div1 << " and " << div2 << ":\n";
    for (int i = 0; i <= 1000; i++)
    {
        if (i != 0 && i % div1 == 0 && i % div2 == 0)
            cout << i << "\n";
    }
}

static string reverseString(string const& initialString)
{
    string newString = "";
    for (char c : initialString)
        newString = c + newString;
    return newString;
}

static string removeVowels(string const& initialString)
{
    char vowels[5] = { 'a', 'e', 'i', 'o', 'u' };
    string newString = "";
    for (char c : initialString)
    {
        bool isVowel = false;
        for (char vowel : vowels)
        {
            if (c == vowel || c == toupper(vowel))
                isVowel = true;
        }
        if (!isVowel)
            newString += c;
    }
    return newString;
}

int main()
{
    divisibleBy(2, 5);
    cout << "Reverse: " << "Paper Mario -> " << reverseString("Paper Mario") << "\n";
    cout << "Remove Vowels: " << "Pokemon, Pikmin -> " << removeVowels("Pokemon, Pikmin") << "\n";
}