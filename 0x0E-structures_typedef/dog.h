#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Struct
 * @name: member
 * @age: member
 * @owner: member
 * Description: Define a new type
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * typedef struct dog_t dog - Struct
 * Description: Define a new type dog_t as a new name for the type struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
#endif
