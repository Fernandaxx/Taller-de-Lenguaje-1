#include "main.c" // Asumiendo que la estructura está en un archivo separado llamado "alumno.h"

void escribirArchivoBinario(const char *nombreArchivo, Alumno *alumnos, int cantidad) {
    FILE *archivo = fopen(nombreArchivo, "wb");
    if (archivo == NULL) {
        perror("Error al abrir el archivo");
        exit(EXIT_FAILURE);
    }

    fwrite(alumnos, sizeof(Alumno), cantidad, archivo);
    fclose(archivo);
}

int main() {
    Alumno alumnos[] = {
        {"Ingenieria", "1234578/0", "Juan Perez", 8.5},
        {"Medicina", "09875321", "Maria Gomez", 9.0},
        {"Derecho", "11223455", "Carlos Ruiz", 7.2}
    };

    int cantidadAlumnos = sizeof(alumnos) / sizeof(Alumno);
    escribirArchivoBinario("alumnos.bin", alumnos, cantidadAlumnos);

    printf("Archivo binario creado con exito.\n");
    return 0;
}







