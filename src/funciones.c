/*
 * operaciones.c
 *
 *  Created on: 14 abr. 2022
 *      Author: usuario
 */
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define BITCOIN 4606954.55


float pedirNumero(char mensaje[])
{
    float numero;
    printf("%s", mensaje);
    scanf("%f", &numero);

    return numero;
}

float CalcularPrecioTarjetaDebitoAerolineas(float y)
{
	float precioDeDebitoAerolineas;

	precioDeDebitoAerolineas = y *.90;

	return precioDeDebitoAerolineas;
}

float CalcularPrecioTarjetaDebitoLatam(float z)
{
	float precioDeDebitoLatam;
	precioDeDebitoLatam = z *.90;

	return precioDeDebitoLatam;
}

float CalcularPrecioTarjetaCreditoAerolineas(float y)
{
	float precioDeTarjetaDeCretidoAerolineas;

	precioDeTarjetaDeCretidoAerolineas = y *1.25;

	return precioDeTarjetaDeCretidoAerolineas;
}

float CalcularPrecioTarjetaCreditoLatam(float z)
{
	float precioDetarjetaDeCretidoLatam;

	precioDetarjetaDeCretidoLatam = z *1.25;

	return precioDetarjetaDeCretidoLatam;
}

float CalcularPrecioBitcoinAerolineas(float y)
{
	float precioConBitcoinAerolineas;

	precioConBitcoinAerolineas = y / BITCOIN;

	return precioConBitcoinAerolineas;
}

float CalcularPrecioBitcoinLatam(float z)
{
	float precioConBitcoinLatama;

	precioConBitcoinLatama = z / BITCOIN;

	return precioConBitcoinLatama;
}

float CalcularPrecioPorUnidadAerolineas(float km,float y)
{
	float precioPorUnidadAerolineas;

	precioPorUnidadAerolineas = y / km;

	return precioPorUnidadAerolineas;
}

float CalcularPrecioPorUnidadLatam(float km,float z)
{
	float precioPorUnidadLatam;

	precioPorUnidadLatam = z / km;

	return precioPorUnidadLatam;
}

float CalcularDiferenciaPrecioConDebito(float precioDeDebitoAerolineas,float precioDeDebitoLatam)
{
	float diferenciaDebito;
	if(precioDeDebitoAerolineas > precioDeDebitoLatam)
	{
		diferenciaDebito = precioDeDebitoAerolineas - precioDeDebitoLatam;
	}else if (precioDeDebitoAerolineas < precioDeDebitoLatam)
	{
		diferenciaDebito= precioDeDebitoLatam - precioDeDebitoAerolineas;
	}
	return diferenciaDebito;
}

float CalcularDiferenciaPrecioConCredito(float precioDeTarjetaDeCretidoAerolineas,float precioDetarjetaDeCretidoLatam)
{
	float diferenciaCredito;
	if(precioDeTarjetaDeCretidoAerolineas > precioDetarjetaDeCretidoLatam)
	{
		diferenciaCredito = precioDeTarjetaDeCretidoAerolineas - precioDetarjetaDeCretidoLatam;
	}else if (precioDeTarjetaDeCretidoAerolineas < precioDetarjetaDeCretidoLatam)
	{
		diferenciaCredito= precioDetarjetaDeCretidoLatam - precioDeTarjetaDeCretidoAerolineas;
	}
	return diferenciaCredito;
}

float CalcularDiferenciaPrecioConBitcoin(float precioConBitcoinAerolineas,float precioConBitcoinLatama)
{
	float diferenciaBitcoin;
	if(precioConBitcoinAerolineas > precioConBitcoinLatama)
	{
		diferenciaBitcoin = precioConBitcoinAerolineas - precioConBitcoinLatama;
	}else if (precioConBitcoinAerolineas < precioConBitcoinLatama)
	{
		diferenciaBitcoin= precioConBitcoinLatama - precioConBitcoinAerolineas;
	}
	return diferenciaBitcoin;
}

float CalcularDiferenciaPrecioPorUnidad(float precioPorUnidadAerolineas,float precioPorUnidadLatam)
{
	float diferenciaPorUnidad;
	if(precioPorUnidadAerolineas > precioPorUnidadLatam)
	{
		diferenciaPorUnidad = precioPorUnidadAerolineas - precioPorUnidadLatam;
	}else if (precioPorUnidadAerolineas < precioPorUnidadLatam)
	{
		diferenciaPorUnidad= precioPorUnidadLatam - precioPorUnidadAerolineas;
	}
	return diferenciaPorUnidad;
}
