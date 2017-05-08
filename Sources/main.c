#include <hidef.h> /* for EnableInterrupts macro */
#include "derivative.h" /* include peripheral declarations */
#include "pantalla.h"
#include "mef.h"

#ifdef __cplusplus
extern "C"
#endif

void MCU_init(void); /* Device initialization function declaration */

void main(void) {
	//inicializo el puerto B para el teclado
	PTBDD = 0x0F;
	PTBPE = 0xF0;
	
	MCU_init();
	MEF_init();
	pantalla_init();
	for (;;) {
		pantalla_update();
	}
}
