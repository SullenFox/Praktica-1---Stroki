#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    int c;
    cout << "Введите число от 1 до 100: ";
    cin >> c;
    string s1 = "В караване был";
    string s2 = " верблюд";
    if (c >= 1 and c<=100) {
        if (c % 10 == 1) {
            s1.append(" ");
            s1.append(to_string(c));
            cout << s1 + s2 << endl;
        }
        else if (c % 10 >= 2 and c % 10 <= 4) {
            s1.append("о ");
            s1.append(to_string(c));
            s2.append("a");
            cout << s1 + s2 << endl;
        } 
        else {
            s1.append("о ");
            s1.append(to_string(c));
            s2.append("ов");
            cout << s1 + s2 << endl;
        }
    }
    else {
        cout << "Вы ввели число вне диапазона" << endl;;
        }
    return 0;
}
