// people is an array of struct Person, allowing you to store and manage information for multiple people.
#include <stdio.h>

// Define the structure
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Create an array of structures to hold multiple people
    struct Person people[3];

    // Assign values to each person
    snprintf(people[0].name, sizeof(people[0].name), "Alice");
    people[0].age = 30;
    people[0].height = 5.6;

    snprintf(people[1].name, sizeof(people[1].name), "Bob");
    people[1].age = 25;
    people[1].height = 5.9;

    snprintf(people[2].name, sizeof(people[2].name), "Charlie");
    people[2].age = 22;
    people[2].height = 6.0;

    // Print the values
    for (int i = 0; i < 3; i++) {
        printf("Person %d:\n", i + 1);
        printf("Name: %s\n", people[i].name);
        printf("Age: %d\n", people[i].age);
        printf("Height: %.2f\n", people[i].height);
    }

    return 0;
}
