#include <iostream>
#include <time.h>
#include<stdlib.h>
#include <windows.h>
#include <string>
using namespace std;
//vectores y funciones
//lectura del vector
void leer_vector(int num[], int tamanio)
{
    for(int i=0; i<tamanio; i++)
    {
        cout<<"Ingrese el elemnto #" <<(i+1)<<" : ";
        cin>>num[i];
    }
}
void imprime_vectore(int vector[], int tamanio)
{
    cout<<endl<<endl<<"ELEMENTOS DEL VECTOR";
    for(int i=0; i<tamanio; i++)
    {
        cout<<endl<<"Elemento # " << (i+1) <<" : " <<vector[i];
    }
}
//Realizar la sumatoria del elemento del vector
double sumatoria_vector(int vector[], int tamanio)
{
    double suma=0;
    for(int i=0; i<tamanio; i++)
        suma+=vector[i];

    return suma;
}
//Realizar el promedio de los elemtos del vector
int promedio_vector (int vector[], int tamanio)
{
    double promedio=0;
    promedio = sumatoria_vector(vector, tamanio)/tamanio;
    return promedio;
}

//1) Funcion que devuelve el elemento minimo del vector
int minimo (int vector[], int tamanio)
{
    int min=vector[0];
    for(int i=0; i<tamanio; i++)
    {
        if(vector[i]<min)
            min=vector[i];
    }
    return min;
}
//2)Función que devuelve el elemento maximo del vector
int maximo (int vector[], int tamanio)
{
    int max=vector[0];
    for(int i=0; i<tamanio; i++)
    {
        if(vector[i]>max)
            max=vector[i];
    }
    return max;
}
//3)Función que devuelve por referencia el elemento mínimo y máximo del vector
void mayor_menor (int vector[], int tamanio, int &mayor, int &menor)
{
    mayor = maximo(vector, tamanio);
    menor = minimo(vector, tamanio);
}
//4)Función que llene el vector con valores aleatorios
void vector_aleatorio(int num[], int tamanio) {
    //Los vectores siempre pasan por referencia
    srand(time(NULL));
    for (int i = 0; i < tamanio; i++) {
        num[i] = 1 + rand() % 1000;
    }
}
//diseñe la funcion que realice el intercambio
void intercambio (int &num1, int &num2)
{
    int aux;
aux=num1;
num1=num2;
num2=aux;
}
//ordenar el vector de menor a mayor (ascendete)
void ordenacion_secuencia(int vector[],int tamanio) {
    for (int i = 0; i < tamanio; i++) {
        for (int j = i + 1; j < tamanio; j++) {
            if (vector[i] > vector[j]) {//intercambio los elementos
intercambio(vector[i], vector[j]);
               // int aux;
               // aux = vector[j];
               // vector[i] = vector[j];
                //vector[j] = aux;
            }
        }
    }
}
//1) Diseñe la funcion que busque un numero entero en el vector.
// la funcion debe volverse verdadero si el elemento existe en el vector,
//o falso en caso contrario
//Busqueda secuencial
bool buscar(int array [], int tamanio, int elemento)
{
    for(int i=0;i<tamanio;i++)
    {
        if(array[i]==elemento)
            return true;
    }
    return false;
}

//2) Diseñe la funcion que busque un numero entero en el vector.
//la funcion debe devolver la posicion donde el elemento fue encontrado.
//Devuelve -1 si no existe.
//Busqueda secuencial
int buscar_pos(int array [], int tamanio, int elemento)
{
    for(int i=0;i<tamanio;i++)
    {
        if(array[i]==elemento)
            return i;
    }
    return -1;
}
//3) Diseñe la funcion que devuelva la cantidad de veces que existe un entero
//en el vector
//vector[10,45,6,10,8,10]. El elemento 10 existe 3 veces
//El elemento 1 existe 0 veces
int contar_elemento(int array[], int tamanio, int elemento)
{
    int cont=0;
    for(int i=0;i<tamanio;i++)
    {
        if(array[i]==elemento)
            cont++;
    }
    return cont;
}
//4)Diseñe la funcion que ordene el vector de manera descendete

void ordenacion_des(int vector[],int tamanio) {
    for (int i = 0; i < tamanio; i++) {
        for (int j = i + 1; j < tamanio; j++) {
            if (vector[i] < vector[j]) {
                int aux;
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }
}
void imprimir(int num[], int tamanio){
    cout<<endl<<endl<<"ELEMENTOS DEL VECTOR";
    for (int i = 0; i < tamanio; ++i) {
        cout<<endl<<"elemento # "<<i<<" : "<<num[i];
    }
}
void leer_vector1(int num[], int tamanio){
// Los vectores siempre se pasan por referencia
    srand (time(NULL));
    for (int i = 0; i < tamanio; ++i) {
        num[i] = rand () % 25+1;

    }

}
double performancecounter_diff(LARGE_INTEGER *a, LARGE_INTEGER *b)
{
    LARGE_INTEGER freq;
    QueryPerformanceFrequency(&freq);
    return (double)(a->QuadPart - b->QuadPart) / (double)freq.QuadPart;
}
//1. diseñe la funcion que imprima el vector de nombres
void nombre (int limite){
    string nombres[limite];
    for(int i = 0; i < limite; i++)
    {
        cout << "\n Nombres " << i + 1 << " :\n";
        cin >> nombres[i];
    }

}

//2. diseñe la funcion que ordene descendientemente(z-A) el vector de nombres
void ordenar_nombre (int Max){
    int primero_A,segundo_B;
    char nombre[6][10];
    char aux[20];

    for(primero_A=0;primero_A<Max;primero_A++){
        cout<<("Digite un nombre: ");
        cin>>(nombre[primero_A]);
    }
    for(primero_A=1;primero_A<6;primero_A++)
        for(segundo_B=0;segundo_B<5-primero_A;segundo_B++)
            if(strcmp(nombre[segundo_B],nombre[segundo_B+1])<0)
            {
                strcpy(aux,nombre[segundo_B]);
                strcpy(nombre[segundo_B],nombre[segundo_B+1]);
                strcpy(nombre[segundo_B+1],aux);
            }

    cout<<endl<<(" NOMBRES DESCENDENTES ");
    //Mostramos los nombres ordenados
    for(primero_A=0;primero_A<Max;primero_A++){
        cout<<endl<<(nombre[primero_A]);
    }
}


    int main()
{
    LARGE_INTEGER t_ini, t_fin;
    double secs;
    const int MAX=20;
    int num[MAX];
    int tam=6;
    //Llamada a la funcion para leer el vector
    //leer_vector(num, MAX);
    num[11]=155;
    vector_aleatorio(num, MAX); //llenar el vector con numero aleatorios
    cout<<endl<<"Vector original ";
    imprime_vectore(num, MAX);
    cout<<endl<<endl<<"VECTOR ORDENADO";
   //captura tiempo incial del proceso
    QueryPerformanceCounter(&t_ini);
    ordenacion_secuencia(num,MAX);
    //captura el tiempo despues de concluir el proceso
    QueryPerformanceCounter(&t_fin);
    secs = performancecounter_diff(&t_fin, &t_ini);
    cout<<"\nORDENACION SECUENCIAL: Tiempo EJECUCION en ms: "<<(secs*1000.0);
    //ordenacion_des(num,MAX);
    //imprime_vectore(num, MAX);

    int suma=sumatoria_vector(num,MAX);
    cout<<endl<<"LA SUMATORIA DEL VECTOR ES: "<<suma;
    cout<<endl<<"EL PROMEDIO ES: "<<promedio_vector(num, MAX);

    cout<<endl<<"EL ELEMENTO MAYOR ES: "<<maximo(num,MAX);
    cout<<endl<<"EL ELEMENTO MINIMO ES: "<<minimo(num,MAX);

    int may, men;
    mayor_menor(num,MAX,may,men);
    cout<<endl<<endl<<"Mayor encontrado: "<<may;
    cout<<endl<<endl<<"Menor encontrado: "<<men;

    //buscar elemento en el vector
    int x=155;
    if(buscar(num,MAX,x)==true)

        cout<<endl<<"El elemento "<<x <<"Si existe..";
        else
        cout<<endl<<"El elemento "<<x <<"No existe..";

    int pos=buscar_pos(num,MAX,x);
    if(pos==-1)
        cout<<endl<<" NO EXISTE EL ELEMENTO "<<x <<"EN EL VECTOR:..";
    else
        cout<<endl<<" EL ELEMENTO "<<x <<"EXISTE EN LA POSICION: "<<endl<<pos;

    //1. diseñe la funcion que imprima el vector de nombres
    string nombres[]={"Juan","Antonio", "Carlos", "Martha", "Pedro", "Amalia"};
    cout<<endl<<endl<<"VECTOR DE NOMBRES ";
    for(int k=0; k<tam; k++)
        cout<<endl<<nombres[k];

    int limite;
    cout <<endl<< "Cuantos datos desea ingresar: ";
    cin>>limite;
    nombre(limite);

//2. diseñe la funcion que ordene descendentemente(z-A) el vector de nombres
        int Max=6;
        ordenar_nombre(Max);




    return 0;
}

