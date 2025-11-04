#include <stdio.h>
#include <string.h>

#define MAX_RECIPES 50
#define NAME_LEN 50
#define INGR_NAME_LEN 50
#define UNIT_LEN 16
#define MAX_INGRS 30
#define STEP_LEN 500

typedef struct {
    char name[INGR_NAME_LEN];
    double qty;
    char unit[UNIT_LEN];
}; Ingredient;


typedef struct {
    char name[NAME_LEN];
    Ingredient ingrs[MAX_INGRS];
    int ingr_count;
    char steps[STEP_LEN];
    int time;
    int base_servings;
} recipe;

Recipe recipes[MAX_RECIPES]
int recipe_count = 0;

void addRecipes() {
    if (recipe_count >= MAX_RECIPES){
        printf("Recipe List is full!\n");
        return;
    }
    printf("\nEnter Recipe name: ")
    readLine(recipes[resipes_count].name, NAME_LEN);

}