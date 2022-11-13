#include <omp.h>
#include <stdio.h>

#define Nmax 10
#define nthreads 3

int main(){
    int thread;
    omp_set_num_threads(nthreads);
    # pragma omp parallel private(thread)
    {
        thread = omp_get_thread_num();
        
        #pragma omp for
        for (int i = 0; i < Nmax; i++){
            printf("Soy el proceso %d ejecuto la iteración %d\n", thread, i);
        }
    }
    return 0;
}
