#include <iostream>
#include<memory>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Constructor invoked" << endl;
    }
    ~MyClass() {
        cout << "Destructor invoked" << endl;
    }
};

int main()
{
    weak_ptr<int> wp;
    {
        shared_ptr<int> sp = make_shared<int>(10);
        wp = sp;
        cout << "Shared count: " << sp.use_count() << endl;
        {
            shared_ptr<int> sp2 = sp;
            cout << "Shared count: " << sp.use_count() << endl;
        }
        cout << "Shared count: " << sp.use_count() << endl;
    }
    /**
     * 
     * Cuadno se hace weak_ptr, queda la referencia de la memoria pero el objeto se pierde
     * igual no lo entendi
     */
    return 0;
}