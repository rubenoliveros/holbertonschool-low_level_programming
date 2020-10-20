#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - information about dogs
 *
 * @name: 1st variable
 * @age: 2nd variable
 * @owner: 3rd variable
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* _DOG_H_ */
