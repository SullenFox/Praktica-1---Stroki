#include <iostream>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
    int pos;
    string s = "deb http://mirror.mephi.ru/debian/ stretch main contrib non-free\
            \ndeb-src http://mirror.mephi.ru/debian/ stretch main contrib non-free\
           \ndeb http://security.debian.org/ stretch/updates main contrib non-free\
           \ndeb-src http://security.debian.org/ stretch/updates main contrib non-free\
           \ndeb http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\
           \ndeb-src http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\
           \ndeb http://mirror.mephi.ru/debian stretch-backports main contrib non-free\
           \ndeb-src http://mirror.mephi.ru/debian stretch-backports main contrib non-free";
    pos = s.find("mephi");
    while (pos != -1) {
        s.replace(pos, 5, "yandex");
        pos = s.find("mephi");
        }
    cout << s;
    return 0;
}
