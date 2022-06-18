#include <iostream>
#include <thread>
using namespace std;



void odd() {
    for (int a = 0; a < 20; a++) {
        //mencetak bil ganjil dan delay 1 detik
        if (a % 2 != 0) {
            
            cout << a << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
        }
    }
    cout << "Angka Ganjil Selesai" << std::endl;
}

void even() {
    for (int a = 0; a < 20; a++) {
        //mencetak bilangan genap dan delay 2,5 detik
        if (a % 2 == 0) {

            cout << a << endl;
            this_thread::sleep_for(chrono::milliseconds(2500));

        }
    }
    cout << "Angka genap Selesai";
}


int main()
{
    //memulai thread ta
    thread ta(odd);     
    //memulai thread tb
    thread tb(even);        

    //menunggu ta selesai
    ta.join();           
    //menunggu tb selesai
    tb.join();              
}