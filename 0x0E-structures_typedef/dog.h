#ifndef _DOG_
#define _DOG_
/**
 * struct dog -my stru name dog
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
