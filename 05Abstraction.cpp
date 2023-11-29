#include <iostream>
using namespace std;

class Smartphone{
    public:
    virtual void TakeSelfie()=0;
};

class Android:public Smartphone{
    public:
    void TakeSelfie(){
        cout << "android took a selfie" << endl;
    
    }
};

class iPhone:public Smartphone{
    public:
    void TakeSelfie(){
        cout << "iPhone took a selfie" << endl;
    }
};

int main(){
    Smartphone* s1 = new Android();
    s1->TakeSelfie();

    Smartphone* s2 = new iPhone();
    s2->TakeSelfie();
}