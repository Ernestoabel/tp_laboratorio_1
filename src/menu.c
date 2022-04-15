/*
 * menu.c
 *
 *  Created on: 14 abr. 2022
 *      Author: usuario
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void limpiarConsola(void);
void mostrarSeparador(void);

void menu()
{
	setbuf(stdout, NULL);

	    int opcion;
	    float km = 0;
	    float y = 0;
	    float z = 0;
	    float precioTarjetaDebitoAerolineas;
	    float precioTarjetaCreditoAerolineas;
	    float precioBitcoinAerolineas;
	    float precioUnitarioAerolineas;
	    float precioTarjetaDebitoLatam;
		float precioTarjetaCreditoLatam;
		float precioBitcoinLatam;
		float precioUnitarioLatam;
		float diferenciaDePrecioPorDebito;
		float precioDeDebitoAerolineas;
		float precioDeDebitoLatam;
		float diferenciaDePrecioPorCredito;
		float precioDeTarjetaDeCretidoAerolineas;
		float precioDetarjetaDeCretidoLatam;
		float diferenciaDePrecioPorBitcoin;
		float precioConBitcoinAerolineas;
		float precioConBitcoinLatama;
		float diferenciaDePrecioPorUnidad;
		float precioPorUnidadAerolineas;
		float precioPorUnidadLatam;


	printf("Bienvenido!!\n");

	do
	{
		mostrarSeparador();
		printf("1)Ingresar KM: (km = %.2f)", km);
		printf("\n2)Ingresar Precio de Vuelos: (Aerolíneas = %.2f, Latam = %.2f)", y, z);
		printf("\n3)Calcular todos los costos.");
		printf("\n4)Informar Resultados.");
		printf("\n5)Carga forzada de datos.");
		printf("\n6)Salir.\n");
		mostrarSeparador();
		fflush(stdin);
		scanf("%d", &opcion);

		switch(opcion)
		{
		case 1:
			km = pedirNumero("Ingrese KM: ");
			limpiarConsola();
			break;
		case 2:
			printf("Ingresar Precio de Vuelos:\n");
			y = pedirNumero("- Precio vuelo Aerolíneas: ");
			z = pedirNumero("- Precio vuelo Latam: ");
			limpiarConsola();
			break;
		case 3:
			if (opcion == 3 && km == 0 && y == 0 && z == 0)
			{
				printf("No se ha introducido ningun valor para realizar alguna de las operaciones\n");
				system("pause");
				limpiarConsola();
			}
			else
			{
				precioTarjetaDebitoAerolineas = CalcularPrecioTarjetaDebitoAerolineas(y);
				precioTarjetaCreditoAerolineas = CalcularPrecioTarjetaCreditoAerolineas(y);
				precioBitcoinAerolineas = CalcularPrecioBitcoinAerolineas(y);
				precioUnitarioAerolineas = CalcularPrecioPorUnidadAerolineas(km, y);

				precioTarjetaDebitoLatam = CalcularPrecioTarjetaDebitoLatam(z);
				precioTarjetaCreditoLatam = CalcularPrecioTarjetaCreditoLatam(z);
				precioBitcoinLatam = CalcularPrecioBitcoinLatam(z);
				precioUnitarioLatam = CalcularPrecioPorUnidadLatam(km, z);

				diferenciaDePrecioPorDebito = CalcularDiferenciaPrecioConDebito(precioDeDebitoAerolineas,precioDeDebitoLatam);
				diferenciaDePrecioPorCredito = CalcularDiferenciaPrecioConCredito(precioDeTarjetaDeCretidoAerolineas,precioDetarjetaDeCretidoLatam);
				diferenciaDePrecioPorBitcoin = CalcularDiferenciaPrecioConBitcoin(precioConBitcoinAerolineas,precioConBitcoinLatama);
				diferenciaDePrecioPorUnidad = CalcularDiferenciaPrecioPorUnidad(precioPorUnidadAerolineas,precioPorUnidadLatam);
				printf("Se a calculado todo los costos\n");

				system("pause");
				limpiarConsola();
			}
			break;
		case 4:
			printf("\nAerolíneas: %.2f", y);
			printf("\na) Precio con tarjeta de débito: %.2f", precioTarjetaDebitoAerolineas);
			printf("\nb) Precio con tarjeta de crédito: %.2f", precioTarjetaCreditoAerolineas);
			printf("\nc) Precio pagando con bitcoin : %f", precioBitcoinAerolineas);
			printf("\nd) Precio unitario: %.2f", precioUnitarioAerolineas);

			printf("\nLatam: %.2f", z);
			printf("\na) Precio con tarjeta de débito: %.2f", precioTarjetaDebitoLatam);
			printf("\nb) Precio con tarjeta de crédito: %.2f", precioTarjetaCreditoLatam);
			printf("\nc) Precio pagando con bitcoin : %f", precioBitcoinLatam);
			printf("\nd) Precio unitario: %.2f", precioUnitarioLatam);

			printf("\ne) Diferencia de precio con tarjeta de débito: %.2f", diferenciaDePrecioPorDebito);
			printf("\ne) Diferencia de precio con tarjeta de crédito: %.2f", diferenciaDePrecioPorCredito);
			printf("\ne) Diferencia de precio con bitcoin: %f", diferenciaDePrecioPorBitcoin);
			printf("\ne) Diferencia de precio por unidad: %.2f\n", diferenciaDePrecioPorUnidad);

			system("pause");
			limpiarConsola();
			break;
		case 5:
			printf("Carga forzada...\n");

			km = 7090;
			y = 162965;
			z = 159339;

			precioTarjetaDebitoAerolineas = CalcularPrecioTarjetaDebitoAerolineas(y);
			precioTarjetaCreditoAerolineas = CalcularPrecioTarjetaCreditoAerolineas(y);
			precioBitcoinAerolineas = CalcularPrecioBitcoinAerolineas(y);
			precioUnitarioAerolineas = CalcularPrecioPorUnidadAerolineas(km, y);

			precioTarjetaDebitoLatam = CalcularPrecioTarjetaDebitoLatam(z);
			precioTarjetaCreditoLatam = CalcularPrecioTarjetaCreditoLatam(z);
			precioBitcoinLatam = CalcularPrecioBitcoinLatam(z);
			precioUnitarioLatam = CalcularPrecioPorUnidadLatam(km, z);

			diferenciaDePrecioPorDebito = CalcularDiferenciaPrecioConDebito(precioDeDebitoAerolineas,precioDeDebitoLatam);
			diferenciaDePrecioPorCredito = CalcularDiferenciaPrecioConCredito(precioDeTarjetaDeCretidoAerolineas, precioDetarjetaDeCretidoLatam);
			diferenciaDePrecioPorBitcoin = CalcularDiferenciaPrecioConBitcoin(precioConBitcoinAerolineas, precioConBitcoinLatama);
			diferenciaDePrecioPorUnidad = CalcularDiferenciaPrecioPorUnidad(precioPorUnidadAerolineas, precioPorUnidadLatam);


			printf("Aerolíneas: %.2f", y);
			printf("\na) Precio con tarjeta de débito: %.2f", precioTarjetaDebitoAerolineas);
			printf("\nb) Precio con tarjeta de crédito: %.2f", precioTarjetaCreditoAerolineas);
			printf("\nc) Precio pagando con bitcoin : %f", precioBitcoinAerolineas);
			printf("\nd) Precio unitario: %.2f", precioUnitarioAerolineas);

			printf("\nLatam: %.2f", z);
			printf("\na) Precio con tarjeta de débito: %.2f", precioTarjetaDebitoLatam);
			printf("\nb) Precio con tarjeta de crédito: %.2f", precioTarjetaCreditoLatam);
			printf("\nc) Precio pagando con bitcoin : %f", precioBitcoinLatam);
			printf("\nd) Precio unitario: %.2f", precioUnitarioLatam);

			printf("\ne) Diferencia de precio con tarjeta de débito: %.2f", diferenciaDePrecioPorDebito);
			printf("\ne) Diferencia de precio con tarjeta de crédito: %.2f", diferenciaDePrecioPorCredito);
			printf("\ne) Diferencia de precio con bitcoin: %f", diferenciaDePrecioPorBitcoin);
			printf("\ne) Diferencia de precio por unidad: %.2f\n", diferenciaDePrecioPorUnidad);

			system("pause");
			limpiarConsola();
			break;
		case 6:
			printf("Saliendo...\n");
			break;
		default:
			printf("Ingrese una opción valida.");
			system("pause");
		}

		if (opcion != 6)
		{
			system("pause");
			limpiarConsola();
		}
	}while(opcion != 6);
}

void limpiarConsola(void)
{
	printf("\n\n\n\n\n\n");
}

void mostrarSeparador(void)
{
	printf("-------------------------\n");
}

