
void setBit(unsigned char *reg,unsigned char bit_num)
{
	 *reg|=(1<<bit_num);
}
void clearBit(unsigned char *reg,unsigned char bit_num)
{
	 *reg&=~(1<<bit_num);
}
void toggleBit(unsigned char *reg,unsigned char bit_num)
{
	 *reg^=(1<<bit_num);
}
