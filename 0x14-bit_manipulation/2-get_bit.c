/**
 * get_bit - function that returns the value of a bit at
 * a given index
 * @n: pointer to the number
 * @index: index of the bit to set to
 * Return: vzlue of the bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return  (-1);
	bit_val = (n  >> index) & 1;
	return (bit_val);
}
