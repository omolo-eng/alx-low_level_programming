#include "holberton.h"
/**
 *  string_toupper - change lowercase letters to uppercase.
 *  @s: analized string.
 *  
 *  Return: String with all letters Uppercased.
 */
char *string_toupper(char *str)                                                                                                      
{                                                                                                                                    
	   int index = 0;                                                                                                               
		                                                                                                                                     
	while (str[index])                                                                                                           
	{                                                                                                                            
		if (str[index] >= 'a' && str[index] <= 'z')                                                                          
			str[index] -= 32;                                                                                            
								                                                                                                                                     
			index++;                                                                                             
	}                                                                                                                            
			                                                                                                                                   return (str);                                                                                                                
}

