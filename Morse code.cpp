#include <iostream>
#include <string>
#include <vector>
#include <cctype>

// Function to translate a single character to its Morse code equivalent
std::string toMorse(char c) {
    switch (c) {
        case 'A': return ".--";
        case 'B': return "-...";
        case 'C': return "-.-.";
        case 'D': return "-..";
        case 'E': return ".";
        case 'F': return "..-.";
        case 'G': return "--.";
        case 'H': return "....";
        case 'I': return "..";
        case 'J': return ".---";
        case 'K': return "-.-";
        case 'L': return ".-..";
        case 'M': return "--";
        case 'N': return "-.";
        case 'O': return "---";
        case 'P': return ".--.";
        case 'Q': return "--.-";
        case 'R': return ".-.";
        case 'S': return "...";
        case 'T': return "-";
        case 'U': return "..-";
        case 'V': return "...-";
        case 'W': return ".--";
        case 'X': return "-..-";
        case 'Y': return "-.--";
        case 'Z': return "--..";
        default: return "";
    }
}

int main() {
    std::string message;
    std::cout << "Input message: ";
    std::getline(std::cin, message);

    std::cout << "Output Morse code:" << std::endl;

    std::string fullMorseCode = "";

    for (char &c : message) {
        // Convert to uppercase
        c = toupper(c);

        // Check if the character is an alphabet letter
        if (isalpha(c)) {
            std::string morse = toMorse(c);
            std::cout << c << ": " << morse << std::endl;
            fullMorseCode += morse + "   ";
        }
    }

    std::cout << "\nFull Morse code with spaces:" << std::endl;
    // Remove the trailing spaces from the full Morse code string
    if (!fullMorseCode.empty()) {
        fullMorseCode.erase(fullMorseCode.length() - 3);
    }
    std::cout << fullMorseCode << std::endl;

    return 0;

