#include <stdint.h>

uint32_t BIC(uint32_t Rm,uint32_t Rn,uint32_t Rd)
{
	Rd &= ~Rm;
	return Rd;
}
uint32_t MVN(uint32_t Rm,uint32_t Rn,uint32_t Rd)
{
	Rd=~Rm;
	return Rd;
}uint32_t RSBS(uint32_t Rm,uint32_t Rn,uint32_t Rd)
{
	Rd=0-Rn;
	return Rd;
}
void NOP()
{

void LSLS(uint32_t *Rm,uint32_t *Rn){
  *Rm=*Rm<<*Rn;
}
void LSRS(uint32_t *Rm,uint32_t *Rn){
  *Rm=*Rm>>*Rn;
}
void ROR(uint32_t *Rm,uint32_t *Rn){
   *Rm=*Rm>>32;
   *Rn=*Rn<<32;
   *Rm=*Rm||*Rn;
}
void ASRS(uint32_t *Rm,uint32_t *Rn){
   *Rn=~0<<(32-*Rn);
   *Rm=(*Rm>>1)|*Rn;
}
void REV(uint32_t *Rm,uint32_t *Rn){
     *Rn=*Rm<<24;
     *Rn=*Rn|*Rm>>24;
     *Rm=*Rn|((((*Rm<<8)>>24)<<8)|(((*Rm<<16)>>24)<<16));
}
void REV16(uint32_t *Rm,uint32_t *Rn){
     *Rn=((*Rm<<24)>>16)|((*Rm<<16)>>24);
     *Rm=*Rn|(((Rm>>24)<<16)|((Rm>>16)<<24));
}

