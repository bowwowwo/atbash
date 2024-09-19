#include<iostream>

int minusModulo(const int& a, const int& b)
{
    return (a % b + b) % b;
}

std::string atbash(std::string x){
    std::string s;

    for(char&c : x){
        //c = tolower(c);
        int y = (c - 'a') % 26; // get 0 - 26
        c = 25 - y; // remove it from the alphabet to get the inverse number
        c += 'a'; // add 'a' to get correct ascii num
        s += c; // put it in the string
    }
    return s;
}

std::string decode(std::string y){

    std::string s;

    for(char&c : y){
        //c = tolower(c);
        c -= 'a'; // get 0 - 26
        c -= 25; // minus the alphabet char count to get the correct alphabet values
        c = abs(c) + 'a'; // abs() to get characters without the minus
        s += c;
    }
    return s;
}


int main(){
    std::cout << atbash("hello") << std::endl;
    std::cout << decode("svool") << std::endl;
}