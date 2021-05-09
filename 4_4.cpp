#include <iostream>
#include <string>
#include <cstring>
#include <locale>
#include <cctype>
#include <codecvt>
#include <regex>
using namespace std;
string decrypt(string text, const int key)
{
    int n_key = key%32;
    locale loc("ru_RU.UTF-8");
    wstring_convert<codecvt_utf8<wchar_t>, wchar_t> codec;
    wstring ws = codec.from_bytes(text);
    string o = "ОШИБКА";
    for (int i=0; i < ws.size(); i++) {
        if (ws[i] > 1039 and ws[i] < 1104) {
            continue;
        } else {
            return o;
        }
    }
    for (int i=0; i < ws.size(); i++) {
        if (ws[i] > 1039 and ws[i] < 1072) {
            ws[i] = ws[i] - n_key;
            if (ws[i] > 1071) {
                ws[i] = ws[i] - 32;
            }
        } else if (ws[i] > 1071 and ws[i] < 1104) {
            ws[i] = ws[i] - n_key;
            if (ws[i] < 1071){
                ws[i] = ws[i] + 32;
                }
        }

}
text = codec.to_bytes(ws);
return text;
}
int main(int argc, char **argv)
{
    string s;
    cout << "Введите строку для расшифровки: ";
    getline(cin, s);
    int c;
    cout << "Введите велечину сдвига: ";
    cin >> c;
    string s2;
    s2 = decrypt(s, c);
    cout << s2 << endl;
    return 0;
}
