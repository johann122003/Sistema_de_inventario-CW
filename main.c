/*Se desea desarrollar un sistema de inventarios, el cual implemente las siguientes funcionalidades: 

  Ingresar, editar y eliminar productos. 

  Listar productos ingresados. */

//#include <stdio.h>
#include "funciones.h"
int opcion;
char productos[100][100];
float precios[100];
int cantidad [100];
int comprobantedeIngreso=0;

int main(void) {
  do{
    Continue: 
  printf("___________________________________________________\n");
  printf("|     Sistema de Inventarios *Candy World*        |\n");
  printf("---------------------------------------------------\n");
  printf("|Domenica Teran - Johann Vasquez -  Anthony Llanos|\n");
  printf("|_________________________________________________|\n");
  printf("___________________________________________________\n");
  printf("|                     Menu                        |\n");
  printf("---------------------------------------------------\n");
  printf("|1. Ingresar Productos                            |\n");
  printf("|2. Editar Productos                              |\n");
  printf("|3. Eliminar Productos                            |\n");
  printf("|4. Impresión Inventario                          |\n");
  printf("|_________________________________________________|\n");
  printf("\n");
  
  printf("Ingrese la opcion que desea realizar: ");
  scanf("%d",&opcion);
  if (opcion ==1){
    ingresarProductos(productos,precios,cantidad);
    comprobantedeIngreso ++;
  }
  if (comprobantedeIngreso>0){
    if (opcion ==2){
      editarProductos(productos,precios,cantidad);
    }
    if (opcion ==3){
      eliminarProductos(productos,precios,cantidad);
    }
    if (opcion ==4){
      imprimirInventario(productos, precios, cantidad);
    }
  }else{
    printf("No hay productos ingresados, debes Ingresar primero para usar esta opcion\n");
  }
  if (opcion>4 || opcion <1){
    printf("Opcion no valida! \n");
  }
  }while(opcion>4 || opcion <1);
  int redo; 
  printf("¿Desea Volver al menu? Si = 1 | No = 0 : ");
  scanf("%d", &redo); 
  if (redo == 1){
    goto Continue; 
  }else{
    return 0; 
  }
  return 0;
}
