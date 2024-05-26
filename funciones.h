#include <stdio.h>
#include <string.h>
int j=0;
void imprimirInventario(char productos[][100],float precios[], int cantidad[]);

void ingresarProductos(char productos[][100],float precios[], int cantidad[]){
for(int i =j; i<100; i++){
  int opcion;
  printf("Ingrese el producto %d: ", i+1);
  scanf("%s", productos[i]);
  printf("Ingrese precio del producto %d: ", i+1);
  scanf("%f", &precios[i]);
  printf("Ingrese la cantidad del producto %d: ", i+1);
  scanf("%d", &cantidad[i]);
  j ++;
  printf("Desea Ingresar mas productos? Si = 1 | No = 0 ");
   scanf("%d", &opcion);
  if(opcion != 1){
    break;
  }
}
}
//Funcion para editar productos
void editarProductos(char productos[][100],float precios[],int cantidad[]){
  imprimirInventario(productos,precios, cantidad);
  continue1:
  printf("Escriba el numero de producto que quiere editar: "); 
  int opcion;
  scanf("%d", &opcion);
  if (opcion>j||opcion<1){
    printf("El producto seleccionado no existe\n");
    goto continue1;
  }else{
  printf("Has elegido '%s'\n ", productos[opcion-1]);
  printf("Ingrese nuevo nombre del producto %d: ", opcion);
  scanf("%s", productos[opcion-1]);
  printf("Ingrese nuevo precio del producto %d: ", opcion);
  scanf("%f", &precios[opcion-1]);
  printf("Ingrese nueva cantidad del producto %d: ", opcion);
  scanf("%d", &cantidad[opcion-1]);
  printf("El producto se ha editado con exito!\n");
 }
}

//Funcion para eliminar productos

void eliminarProductos(char productos[][100],float precios[],int cantidad[]){
  imprimirInventario(productos,precios, cantidad);
  continue2:
  printf("Escriba el numero de producto que quiere eliminar: ");
  int opcion;
  scanf("%d", &opcion);
  if (opcion>j||opcion<1){
    printf("El producto seleccionado no existe\n");
    goto continue2;
  }else{
   printf("Se ha eliminado '%s' !\n ", productos[opcion-1]);
  for (int i=opcion-1; i<j-1; i++){
    strcpy(productos[opcion-1], productos[opcion]);
    precios[opcion-1]=precios[opcion];
    cantidad[opcion-1]=cantidad[opcion];
  }  
j--;
  }
}
// Funcion para imprimir inventario
void imprimirInventario(char productos[][100],float precios[], int cantidad[]){
    printf("| Numero | Producto | Precio  | Cantidad | \n");
  for (int i=0; i<j; i++){
    printf("|   %d:  |    %s    |  %.2f$  |    %d    |\n", i+1, productos[i],precios[i],cantidad[i]); 
    
  }
}

