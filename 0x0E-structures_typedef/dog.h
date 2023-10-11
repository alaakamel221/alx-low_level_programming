#ifndef DOG_H
#define DOG_H
/**
* struct dog - woof
* @name: char
* @age: float
* @owner: charr
*
* Description: long d
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;


} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
