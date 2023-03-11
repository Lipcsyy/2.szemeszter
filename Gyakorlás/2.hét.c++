#include <iostream>
using std::endl;
using std::cout;

namespace ember {


    int életkor;

    void kiirat ( int x ) {
        cout << "Életkor " << x << endl;
    }

}

template<typename T> void kiirat( T bemenet) {
    cout << bemenet << endl;
}

int main () {

    int a = 5, b = 10, c = 15;

    const int* panda = &a; // a pointer nem konstans de a benne lévő érték igen
  
    int *const foo = &a; //constans pointer 

    cout << foo << endl;

}