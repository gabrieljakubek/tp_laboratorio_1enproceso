#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

 float funIngreso ();

/** \brief Funcion suma
 *
 * \param primernum Es el primer numero que ingresa el usuario
 * \param segundonum Es el segundo numero ingresado por el usuario
 * \return resultado Devuelve el resultado de la suma
 *
 */

float funSumar(float primernum,float segundonum);

/** \brief Funcion resta
 *
 * \param primernum Es el primer numero que ingresa el usuario
 * \param segundonum Es el segundo numero ingresado por el usuario
 * \return resultado Devuelve el resultado de la resta
 *
 */

float funResta(float primernum,float segundonum);

/** \brief Funcion division
 *
 * \param primernum Es el primer numero que ingresa el usuario
 * \param segundonum Es el segundo numero ingresado por el usuario
 * \return resultado Devuelve el resultado de la division
 *
 */

float funDividir (float primernum,float segundonum);

/** \brief Funcion Multiplicacion
 *
 * \param primernum Es el primer numero que ingresa el usuario
 * \param segundonum Es el segundo numero ingresado por el usuario
 * \return resultado Devuelve el resultado de la multiplicacion
 *
 */

float funMultiplicaion (float primernum,float segundonum);

/** \brief Funcion validar cero
 *
 * \param primernum Es el primer numero que ingresa el usuario
 * \param segundonum Es el segundo numero ingresado por el usuario
 * \return respuesta Entrega si alguno de los numeros es 0 [0]
 *
 */
float funValidar (float primernum,float segundonum);

/** \brief Funcion factorial
 *
 * \param primernum Es el primer numero que ingresa el usuario
 * \return respuesta Entrega el factorial del primer numero que ingreso el usuario
 *
 */
int funFactorial (int primernum);

#endif // FUNCIONES_H_INCLUDED
