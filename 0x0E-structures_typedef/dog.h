#ifndef DOG_H
#define DOG_H
/**
 * struct dog - this is the struct to define thepropreties of a dog
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
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
 * dog_t - new name for the type struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *str1, char *str2);
int _len(char *str);
void free_dog(dog_t *dog);
#endif
