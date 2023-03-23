#include <iostream>
#include <upcxx/upcxx.hpp>

using namespace std;

int main() {

    upcxx::init();
    for(int i = 0; i<upcxx::rank_n(); i++) {
        upcxx::barrier();
        if(i == upcxx::rank_me()) {
            cout<<"Hello world from "<<i<<" out of "<<upcxx::rank_n()<<endl;
        }
    }
    upcxx::finalize();
    return 0;
}
