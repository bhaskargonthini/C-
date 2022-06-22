#include<iostream>

using namespace std;

int main(){
    char c;
    cout<<"Program to check whether a letter is vowel or consonant"<<endl;
    cout<<"Enter the letter: ";
    cin>>c;
    if(c == 'A'|| c == 'a' || c == 'E'|| c == 'e' || c == 'I'|| c == 'i' || c == 'O'|| c == 'o' || c == 'U'|| c == 'u'){
        cout<<c<<" is a vowel"<<endl;
    }
    else{
        cout<<c<<" is a consonant";
    }
return 0;
}
// #include <iostream>
// using namespace std;

// int main() {
//     char c;
//     bool isLowercaseVowel, isUppercaseVowel;

//     cout << "Enter an alphabet: ";
//     cin >> c;

    // evaluates to 1 (true) if c is a lowercase vowel
    // isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 (true) if c is an uppercase vowel
    // isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // show error message if c is not an alphabet
//     if (!isalpha(c))
//       printf("Error! Non-alphabetic character.");
//     else if (isLowercaseVowel || isUppercaseVowel)
//         cout << c << " is a vowel.";
//     else
//         cout << c << " is a consonant.";

//     return 0;
// }