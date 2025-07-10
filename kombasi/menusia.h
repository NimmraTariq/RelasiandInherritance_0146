#ifndef MANUSIA_H
#define MANUSIA_H
using namespace std;

class manusia {
public:
    string name;
    jantung varJantung; // Include a jantung object as a member of manusia (composition)

    manusia(string pName)
        : name(pName) {
        cout << name << " hidup\n";
    }
    ~manusia() {
        cout << name << " mati\n";
    }
};
#endif
