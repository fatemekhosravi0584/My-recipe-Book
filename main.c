#include <stdio.h>
#include <string.h>

#define MAX_RECIPES 50
#define NAME_LEN 50
#define INGR_NAME_LEN 50
#define UNIT_LEN 16
#define MAX_INGRS 30
#define STEP_LEN 500

typedef struct {
    char name[NAME_LEN];
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

recipe recipes[MAX_RECIPES];
int recipe_count = 0;

void inputIngredients(recipe *r) {
    r->ingr_count = 0;
    r->base_serving = 2;

    printf("\nEnter ingredients for %d people.", r->base_servings);
    printf("\n(press Enter on name to finish.)\n");

    while (r->ingr_count < MAX_INGRS) {
        int idx = r_>ingr_count;

        printf("\nIngredient %d name: ", idx + 1);
        readLine(r->ingrs[idx].name, INGR_LEN_NAME);
        if (r->ingrs[idx].name[0], == '\n') {
            break;
        }

        printf("Quantity (number): ");
        while (scanf("%lf", &r->ingrs[idx].qty) != 1) {
            printf("Invalide number, Try again: ");
            int c; while ((c = getchar()) != '\n' && c != EOF) {}
        }
        getchar();

        printf("Unit (e.g., g, ml, tbsp, pcs): ");
        readLine(r->ingrs[idx].unit, UNIT_LEN);

        r->ingr_count++;
    }
    if (r->ingr_count == 0) {
        printf("No ingredients added.\n");
    }
}
