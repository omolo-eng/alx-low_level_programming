#include "holberton.h"
/**
 * _strcat - concatenates two strings
 *  
 *  @dest: the string @src is added to
 *  @src: the string to be appended
 *  
 *  Return: pointer to the resulting string @dest
 */


char *_strcat(char *dest, const char *src)                                                                                            
{                                                                                                                                    
        int index = 0, dest_len = 0;                                                                                                 
                                                                                                                                     
        while (dest[index++])                                                                                                        
	                dest_len++;                                                                                                          
                                                                                                                                     
        for (index = 0; src[index]; index++)                                                                                         
	                dest[dest_len++] = src[index];                                                                                       
                                                                                                                                     
        return (dest);                                                                                                               
}
return (dest);
}
