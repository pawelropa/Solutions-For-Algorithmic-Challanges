#define ANSI

#include <iostream>
#include <cstring>
#include <bitset>
#include <cstring>
#include <cstdio>

using namespace std;

void printfloat(float);

union
{
    float input;   // assumes sizeof(float) == sizeof(int)
    int   output;
}data;

const char lookuparrbin2hex[] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};

char convert_bin2hex(string bits)
{
    unsigned int result = 0;
    unsigned int shifter0 = 0;
    unsigned int shifter1 = 1;
    
    for(int n=0; n < bits.length(); n++)
    {
        result <<= 1; //shift result to the left by 1
        if(bits[n] == '1') result = (result | shifter1);
        else result = (result | shifter0);
    }
    return lookuparrbin2hex[result];
}

std::string getHexRowFails(string rowresult)
{
    std::string endresult = "";
    for(int i = 0; i < rowresult.length(); i = i+4)
    {
        endresult += convert_bin2hex(rowresult.substr(i,4));
    }
    string sR = "";
    for (int i = 0; i < endresult.length(); i = i+2) {
        bool zero = false;
        if (endresult[i] == '0' && endresult[i + 1] == '0') {
            zero = true;    
        }
        if (zero) {
            sR += "0 ";
        } else {
            if (endresult[i] == '0' && endresult[i + 1] != '0') {
                sR += endresult[i+1];
                sR += " ";
            } else {
                sR += endresult[i];
                sR += endresult[i+1];
            }
        }
    }
    
    
    string s = "";
    for (int i = 0; i < sR.length(); i++) {
        if (i % 2 == 0 && i > 0) {
            s += " ";
        }
        s += sR[i];

    }
    for(int j=0; j<s.length(); j++)
    {
        if(s[j]==' ' && s[j+1]==' ')
            s.erase(j,1);	
    }
    if (s[s.length() - 1] == ' ') {
        s.erase(s.length() - 1, 1);
    }
    return s;
}



int main() {
    int t;
    float x;
    
    cin >> t; /* wczytaj liczbę testów */
    while(t){ 
        cin >> x;
        printfloat(x);
        t--; 
    } 
    return 0;
}

void printfloat(float x) 
{
    data.input = x;
    
    bitset<sizeof(float) * CHAR_BIT> bits(data.output);
    
    string s = bits.to_string();
    cout << getHexRowFails(s) << endl;
}
