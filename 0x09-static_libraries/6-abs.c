#include "main.h"
/**
* _abs - program of absolute value
* @z: parameter
* Return: it returns -z or z
*/
int _abs(int z)
{
	if (z < 0)
		return (-z);
	else if (z >= 0)
		return (z);
	return (0);
}
