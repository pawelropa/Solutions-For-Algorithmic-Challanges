//
//  main.cpp
//  4799-Zastępowanie trójznaków
//
//  Created by arafaux on 11-06-20.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void replace_all(std::string& str, const std::string& oldStr, const std::string& newStr)
{
    size_t pos = 0;
    while((pos = str.find(oldStr, pos)) != std::string::npos)
    {
        str.replace(pos, oldStr.length(), newStr);
        pos += newStr.length();
    }
}

int main (int argc, const char * argv[])
{

    // insert code here...
    string line;
    while (getline(cin,line)) {
        
        
        replace_all(line, "??=", "#");
        replace_all(line, "??/", "\\");
        replace_all(line, "??\'", "^");
        replace_all(line, "??(", "[");
        replace_all(line, "??)", "]");
        replace_all(line, "??!", "|");
        replace_all(line, "??<", "{");
        replace_all(line, "??>", "}");
        replace_all(line, "??-", "~");
        cout << line << "\n";
        line.clear();
    }

    return 0;
}
/*
if (line[i] == '?' && line.at(i+1) == '?' && line.at(i+2) == '=') {
    printf("#");
    i += 2;
}
else if (line[i] == '?' && line.at(i+1) == '?' && line.at(i+2) == '\\') {
    printf("\\");
    i += 2;
}
else if (line[i] == '?' && line.at(i+1) == '?' && line.at(i+2) == '\'') {
    printf("^");
    i += 2;
}
else if (line[i] == '?' && line.at(i+1) == '?' && line.at(i+2) == '(') {
    printf("[");
    i += 2;
}
else if (line[i] == '?' && line.at(i+1) == '?' && line.at(i+2) == ')') {
    printf("]");
    i += 2;
}
else if (line[i] == '?' && line.at(i+1) == '?' && line.at(i+2) == '!') {
    printf("|");
    i += 2;
}
else if (line[i] == '?' && line.at(i+1) == '?' && line.at(i+2) == '<') {
    printf("{");
    i += 2;
}
else if (line[i] == '?' && line.at(i+1) == '?' && line.at(i+2) == '>') {
    printf("}");
    i += 2;
}
else if (line[i] == '?' && line.at(i+1) == '?' && line.at(i+2) == '-') {
    printf("~");
    i += 2;
}
*/

