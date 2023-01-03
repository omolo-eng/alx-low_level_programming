#include "main.h"
/*
 * _memset - function that fills memory with a constant byte
 * @s: is the direction you are going
 * @b: constant character variable
 * @n: is the limit to which you will reach
 * Return: s.
 */
void *_memset(void *s, int c, size_t n)                                                                                              
{                                                                                                                                    
	        unsigned int index;                                                                                                          
		unsigned char *memory = s, value = c;                                                                                        
			                                                                                                                                     
		for (index = 0; index < n; index++)                                                                                          
			memory[index] = value;                                                                                               
				                                                                                                                                     
		return (memory);                                                                                                             
}

