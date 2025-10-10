#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    float price;
    int quantity;
};

void addbook();
void displaybooks();
void updatebook();
void deletebook();

int main()
{
    int choice;

    while (1)
    {
        printf("\nBook Management System\n");
        printf("1. Add Book\n");
        printf("2. View Books\n");
        printf("3. Update Book\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addbook();
            break;
        case 2:
            displaybooks();
            break;
        case 3:
            updatebook();
            break;
        case 4:
            deletebook();
            break;
        case 5:
            printf("Exiting... Goodbye!\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}

// ---------------- Add Book ----------------
void addbook()
{
    FILE *fp = fopen("books.dat", "ab");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    struct Book b;
    printf("Enter Book ID: ");
    scanf("%d", &b.id);
    getchar(); // Clear newline

    printf("Enter Book Title: ");
    fgets(b.title, sizeof(b.title), stdin);
    b.title[strcspn(b.title, "\n")] = '\0';

    printf("Enter Book Author: ");
    fgets(b.author, sizeof(b.author), stdin);
    b.author[strcspn(b.author, "\n")] = '\0';

    printf("Enter Book Price: ");
    scanf("%f", &b.price);

    printf("Enter Book Quantity: ");
    scanf("%d", &b.quantity);

    fwrite(&b, sizeof(struct Book), 1, fp);
    fclose(fp);

    printf("Book added successfully!\n");
}

// ---------------- Display Books ----------------
void displaybooks()
{
    struct Book b;
    FILE *fp = fopen("books.dat", "rb");
    if (fp == NULL)
    {
        printf("No books found!\n");
        return;
    }

    printf("\n---- List of Books ----\n");
    while (fread(&b, sizeof(struct Book), 1, fp))
    {
        printf("ID=%d , Title=%s , Author=%s , Price=%.2f , Quantity=%d\n",
               b.id, b.title, b.author, b.price, b.quantity);
    }

    fclose(fp);
}

// ---------------- Update Book ----------------
void updatebook()
{
    int searchId, found = 0;
    struct Book b;
    FILE *fp = fopen("books.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    if (fp == NULL)
    {
        printf("No books found!\n");
        return;
    }

    printf("Enter Book ID to update: ");
    scanf("%d", &searchId);
    getchar(); // clear newline

    while (fread(&b, sizeof(struct Book), 1, fp))
    {
        if (b.id == searchId)
        {
            found = 1;
            printf("Enter new Title: ");
            fgets(b.title, sizeof(b.title), stdin);
            b.title[strcspn(b.title, "\n")] = '\0';

            printf("Enter new Author: ");
            fgets(b.author, sizeof(b.author), stdin);
            b.author[strcspn(b.author, "\n")] = '\0';

            printf("Enter new Price: ");
            scanf("%f", &b.price);

            printf("Enter new Quantity: ");
            scanf("%d", &b.quantity);
            getchar(); // clear newline
        }
        fwrite(&b, sizeof(struct Book), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("books.dat");
    rename("temp.dat", "books.dat");

    if (found)
        printf("Book updated successfully!\n");
    else
        printf("Book with ID %d not found.\n", searchId);
}

// ---------------- Delete Book ----------------
void deletebook()
{
    int deleteId, found = 0;
    struct Book b;
    FILE *fp = fopen("books.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    if (fp == NULL)
    {
        printf("No books found!\n");
        return;
    }

    printf("Enter Book ID to delete: ");
    scanf("%d", &deleteId);

    while (fread(&b, sizeof(struct Book), 1, fp))
    {
        if (b.id == deleteId)
        {
            found = 1;
            continue; // skip this book
        }
        fwrite(&b, sizeof(struct Book), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("books.dat");
    rename("temp.dat", "books.dat");

    if (found)
        printf("Book deleted successfully!\n");
    else
        printf("Book with ID %d not found.\n", deleteId);
}
