/*
 * funciones.h
 *
 *  Created on: 14 abr. 2022
 *      Author: usuario
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/// @brief Funcion del menu al main
///
void menu ();
/// @brief Funcion de pedir numero
///
/// @param se escribe el mensaje
/// @return el numero
float pedirNumero(char mensaje[]);

/// @brief Funcion para calcular costo de tarjeta de debito de aerolineas
///
/// @param y es el precio del pasaje
/// @return El precio del pasaje con descuento
float CalcularPrecioTarjetaDebitoAerolineas(float y);

/// @brief  Funcion para calcular costo de tarjeta de credito de aerolineas
///
/// @param y es el costo del pasaje
/// @return El precio del pasaje con aumento
float CalcularPrecioTarjetaCreditoAerolineas(float y);

/// @brief Funcion para calcular el costo en bitcoin de aerolineas
///
/// @param y es el costo del pasaje
/// @return El precio del pasaje a valor bitcoin
float CalcularPrecioBitcoinAerolineas(float y);

/// @brief Funcion para calcular el precio por km de aerolineas
///
/// @param km son los kilometros
/// @param y es el costo del pasaje
/// @return el precio por pasaje por kilometro
float CalcularPrecioPorUnidadAerolineas(float km,float y);

/// @brief Funcion para calcular costo de tarjeta de debito de latam
///
/// @param y es el precio del pasaje
/// @return El precio del pasaje con descuento
float CalcularPrecioTarjetaDebitoLatam(float z);

/// @brief  Funcion para calcular costo de tarjeta de credito de latam
///
/// @param y es el costo del pasaje
/// @return El precio del pasaje con aumento
float CalcularPrecioTarjetaCreditoLatam(float z);

/// @brief Funcion para calcular el costo en bitcoin de latam
///
/// @param y es el costo del pasaje
/// @return El precio del pasaje a valor bitcoin
float CalcularPrecioBitcoinLatam(float z);

/// @brief Funcion para calcular el precio por km de latam
///
/// @param km son los kilometros
/// @param y es el costo del pasaje
/// @return el precio por pasaje por kilometro
float CalcularPrecioPorUnidadLatam(float km,float z);

/// @brief Funcion para calcular la diferencia de precio con tarjeta de debito
///
/// @param precioDeDebitoAerolineas es el precio del pasaje con tarjeta de debito de aerolineas
/// @param precioDeDebitoLatam es el precio del pasaje con tarjeta de debito de latam
/// @return la diferencia de precio
float CalcularDiferenciaPrecioConDebito(float precioDeDebitoAerolineas,float precioDeDebitoLatam);

/// @brief Funcion para calcular la diferencia de precio con tarjeta de credito
///
/// @param precioDeDebitoAerolineas es el precio del pasaje con tarjeta de credito de aerolineas
/// @param precioDeDebitoLatam es el precio del pasaje con tarjeta de credito de latam
/// @return la diferencia de precio
float CalcularDiferenciaPrecioConCredito(float precioDeTarjetaDeCretidoAerolineas,float precioDetarjetaDeCretidoLatam);

/// @brief Funcion para calcular la diferencia de precio de valores en bitcoin
///
/// @param precioDeDebitoAerolineas es el precio del pasaje con bitcoin de aerolineas
/// @param precioDeDebitoLatam es el precio del pasaje con bitcoin de latam
/// @return la diferencia de precio
float CalcularDiferenciaPrecioConBitcoin(float precioConBitcoinAerolineas,float precioConBitcoinLatama);

/// @brief Funcion para calcular la diferencia de precio de valores por unidad
///
/// @param precioDeDebitoAerolineas es el precio del pasaje por unidad de aerolineas
/// @param precioDeDebitoLatam es el precio del pasaje por unidad de latam
/// @return la diferencia de precio
float CalcularDiferenciaPrecioPorUnidad(float precioPorUnidadAerolineas,float precioPorUnidadLatam);

#endif /* FUNCIONES_H_ */
