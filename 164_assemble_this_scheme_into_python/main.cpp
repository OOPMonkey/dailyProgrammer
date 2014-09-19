#include <iostream>
#include <QTextStream>
#include <array>

using namespace std;

bool isAnagram(QString, QString );

int main(int argc, char *argv[])
{
    QTextStream qin(stdin);
    QTextStream qout(stdout);

    // Output 'Hello World' to the console.
    qout << "Hello World!" << endl;

    // Return an array of the first 100 numbers that are divisible by 3 and 5.
    for(int i = 0; i <= 100; ++i)
    {
        if(i % 3 == 0 && i % 5 == 0)
            qout << i << endl;
    }

    // Create a program that verifies if a word is an anagram of another word.
    isAnagram("test", "test");

    // Create a program that removes a specificed letter from a word.
    qout << "Please input a word:" << endl;
    QString targetWord;
    qin >> targetWord;

    qout << endl << "Input a letter to be removed the word you just entered: " << endl;
    QString targetLetter;
    qin >> targetLetter;
    qout << targetWord.replace(targetLetter, "") << endl;

    // Sum all the elements of an array
    array<int, 100> numbers;
    int sum = 0;
    numbers.fill(10);
    for(unsigned int i = 0; i < numbers.size(); ++i)
    {
        sum += numbers[i];
    }
    qout << "Sum of " << numbers.size() << " numbers: " << sum << endl;

    // BONUS: Implement a bubble-sort.

    return 0;
}

bool isAnagram(QString word1, QString word2) {
    QTextStream qout(stdout);

    if(word1.size() != word2.size())
        return false;

    map<QChar, int> characters;
    for(QChar c : word1)
        ++characters[c];

    for(QChar c : word2)
        --characters[c];

    map<QChar, int>::iterator p;
    for(p = characters.cbegin(); p != characters.end(); ++p) {
        p->first;
    }

    return true;
}
