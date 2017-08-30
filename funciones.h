#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


/** \brief Funcion suma
 *
 * \param primernum Es el primer numero que ingresa el usuario
 * \param segundonum Es el segundo numero ingresado por el usuario
 * \return resultado Devuelve el resultado de la suma
 *
 */

int funsumar(int primernum,int segundonum);

/** \brief Funcion resta
 *
 * \param primernum Es el primer numero que ingresa el usuario
 * \param segundonum Es el segundo numero ingresado por el usuario
 * \return resultado Devuelve el resultado de la resta
 *
 */

int funresta(int primernum,int segundonum);

/** \brief Funcion division
 *
 * \param primernum Es el primer numero que ingresa el usuario
 * \param segundonum Es el segundo numero ingresado por el usuario
 * \return resultado Devuelve el resultado de la division
 *
 */

int fundividir (int primernum,int segundonum);

/** \brief Funcion Multiplicacion
 *
 * \param primernum Es el primer numero que ingresa el usuario
 * \param segundonum Es el segundo numero ingresado por el usuario
 * \return resultado Devuelve el resultado de la multiplicacion
 *
 */

int funmultiplicaion (int primernum,int segundonum);

/** \brief Funcion validar cero
 *
 * \param primernum Es el primer numero que ingresa el usuario
 * \param segundonum Es el segundo numero ingresado por el usuario
 * \return respuesta Entrega si alguno de los numeros es 0 [0]
 *
 */
int funvalidar (int primernum,int segundonum);

/** \brief Funcion factorial
 *
 * \param primernum Es el primer numero que ingresa el usuario
 * \return respuesta Entrega el factorial del primer numero que ingreso el usuario
 *
 */
int funfactorial (int primernum);

/** \brief Todas las funciones
 *
 * \param primernum Es el primer numero que ingresa el usuario
 * \param segundonum Es el segundo numero ingresado por el usuario
 * \return Entrega todas las funciones
 *
 */

void funtodas (int primernum,int segundonum);
#endif // FUNCIONES_H_INCLUDED
