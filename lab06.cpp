#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    
    cout << "Enter word: ";
    cin >> word;
    
    string rev = string(word.rbegin(), word.rend());
    
    if (word == rev) cout << "Palindrome";
    else cout << "Not Palindrome";
    
    return 0;
}



//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    string str;
//    
//    cout << "Enter string: ";
//    cin >> str;
//
//    int vowels = 0, consonants = 0;
//
//    for (int i = 0; i < str.length(); i++) {
//        char ch = tolower(str[i]);
//        if (isalpha(ch)) {
//            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//                vowels++;
//            else
//                consonants++;
//        }
//    }
//
//    cout << "Vowels: " << vowels << endl;
//    cout << "Consonants: " << consonants << endl;
//
//    return 0;
//}
