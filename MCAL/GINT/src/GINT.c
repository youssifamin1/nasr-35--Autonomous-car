
#include "GINT.h"

void Enable_GINT_AllInterrupts(void){
	SetBit(SREG_Reg,GINT_I_Bit);
}
void Disable_GINT_AllInterrupts(void){
	ClearBit(SREG_Reg,GINT_I_Bit);
}