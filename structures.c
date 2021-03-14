int main(void)
{
	struct galletas
	{
		char * sabor;
		unsigned long long int cantidad;
	};

/*quiero una nueva galleta de esa estructura: */
	struct galletas coco;

/*para acceder al elemento*/
	coco.sabor = "coco"
/*a este puntero le asigno la direccion de este string */

	coco.cantidad = 3;

	struct galletas *holbie; /* a holbie le gustan las galleta de nueces,
				  * entonces pide una de*/
 (*holbie).sabor = mani;

/*pero cambio de opinion, mejor...*/

	holbie->sabor = macadamia;

/*dame tres: */
(*holbie).cantidad = 3;

/* no mejor dame 6 */

holbie->cantidad = 6; /*teniamos hambrecita pero ya no :3*/

como es mi receta favorita le voy a poner un apodo de cariño
typedef struct galletas
{
	char * sabor;
	int cantidad;
} wafer;

wafer arequipe; /* wafer arequipe == struct galletas arequipe;
		 * _____             _______________           */

arequipe.sabor = "pues arequipe";
arequipe.cantidad = 2574571; /*para holbies de todo el mundo*/

/**para que un array de galletas?
 * vamos a montar una empresa de galletas de varios sabores.
 * No pero, ya me hastie de dulce hagamos un pedido a un restaurante de comida
 * de sal.
 **/

typedef struct plato
{
	char* ingrediente1;
	char* ingrediente2;
	char* ingrediente3;
	int cantidad;
} calentao;

calentao mifavorito[] = {
	{lentejas,arroz,queso,1}, /*asi creo un calentao */
	{frijoles,arroz,huevo,2},
	{lenteja,arroz,carne,2},
	{NULL,NULL,NULL,0}  /* es un plato vacío*/
};
mifavorito[0].ingrediente1; /* esto es lentejas */

int i;
printf("Lista de compras para ir al mercado: \n");
for (i = 0; mifavorito[i].ingrediente1 != NULL ;i++)
{
	printf("- %s\n", mifavorito[i].ingrediente1);
}
/*esto me da la lista de los primeros ingredientes, o sea, solo la primera
 * columna del array */
}
