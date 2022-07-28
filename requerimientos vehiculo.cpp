/*Arbol binario tomando como referente la placa del vehiculo pla ca como serial unico
	-Usar Inorden
	-consultar por placa y mostrar la info del vehiculo
	-Mostrar informacion que contiene el arbol
	-Mostrar solo los vehiculos de pasageros o los de carga
	-Cuantos vehiculos son de determinado color
	-Los vehiculos que tiene igualo superior potencia a una potencia dada 
	-Consultar marcas de los vehiculos dados en el arbol
	-Eliminar del arbol un vehiculo dado por la placa
*/
class vehiculo
{
	private:
		char *placa,*marca,*color;
		int potencia; //caballos 
		bool tipo;// si es de pasageros o es de carga
		vehiculo *izq;
		vehiculo *der;
	public:
}
