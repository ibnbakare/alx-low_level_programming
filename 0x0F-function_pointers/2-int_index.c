/**
*int_index -> name of the funstion
*@array:params
*@size: params
*@cmp:function
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
 for (i =0; i < size; i++)
{
if(cmp(array[i]) )
return (i);

}     
return (-1);       
}