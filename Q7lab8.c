#include<stdio.h>


int main(){
    int section=2,shelf=3,item=4;
    int section_total[2] = {0}; 
    int max_shelf_total = -1, max_section_index = -1, max_shelf_index = -1;

    int inventory[section][shelf][item];

    printf("Enter the quantities of items (2 sections, 3 shelves, 4 items each):\n");
    for (int s = 0; s < 2; s++) 
    {
        for (int sh = 0; sh < 3; sh++) 
        {
            for (int it = 0; it < 4; it++) 
            {
                printf("Section %d, Shelf %d, Item %d: ", s + 1, sh + 1, it + 1);
                scanf("%d", &inventory[s][sh][it]);
            }
        }
    }

    for (int s = 0; s < 2; s++) 
    {
        for (int sh = 0; sh < 3; sh++) 
        {
            int shelf_total = 0; 
            for (int it = 0; it < 4; it++) 
            {
                section_total[s] += inventory[s][sh][it];
                shelf_total += inventory[s][sh][it];
            }
            if (shelf_total > max_shelf_total) 
            {
                max_shelf_total = shelf_total;
                max_section_index = s;
                max_shelf_index = sh;
            }
        }
    }

    for (int s = 0; s < 2; s++) 
    {
        printf("\nTotal items in Section %d: %d", s + 1, section_total[s]);
    }

    printf("\n\nShelf with highest quantity: Section %d, Shelf %d (%d items)\n",max_section_index + 1, max_shelf_index + 1, max_shelf_total);

    return 0;
}