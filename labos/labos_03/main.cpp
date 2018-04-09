#include <chrono>
#include <cstdlib>
#include <iostream>

using namespaces std::chrono;

int main(){

    high_resolution_clock::time_point t1 = high_resolution_clock::now();

    // execution dont le temps est a calculer est a mettre ici

    high_resolution_clock::time_point t2 = high_resolution_clock::now();

    double temps = duration_cast<nanoseconds>(t2 - t1).count();

    return EXIT_SUCCESS;
}
