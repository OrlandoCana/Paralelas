#include <stdio.h>
//--# omp.h es el encabezado que nos ayuda a ejecutar codigo paralelo
#include <omp.h>

int main(){
    int thread, threads;
    #pragma omp parallel
    {
        //--# Obtenemos el hilo actual
        thread = omp_get_thread_num();
        //--# Obtenemos el total de hilos
        threads = omp_get_num_threads();
        printf("Hello world. Soy el hilo %d de %d hilos\n", thread, threads);
    }
    return 0;
}
