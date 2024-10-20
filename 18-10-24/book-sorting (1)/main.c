#include <stdio.h>
#include <string.h>

struct myBooks {
	char title[100];
	char author[50];
	float price;
};

int main()
{
	struct myBooks book1, book2, book3;
	printf("Enter the Title of Book 1: \n");
	fgets(book1.title, sizeof(book1.title), stdin);
	book1.title[strcspn(book1.title, "\n")] = 0;

	printf("Enter the Name of the Author: \n");
	fgets(book1.author, sizeof(book1.author), stdin);
	book1.author[strcspn(book1.author, "\n")] = 0;

	printf("Enter the Price of the Book: \n");
	scanf("%f", &book1.price);

	printf("\nEnter the Title of Book 2: \n");
	fgets(book2.title, sizeof(book2.title), stdin);
	book2.title[strcspn(book2.title, "\n")] = 0;

	printf("Enter the Name of the Author: \n");
	fgets(book2.author, sizeof(book2.author), stdin);
	book2.author[strcspn(book2.author, "\n")] = 0;

	printf("Enter the Price of the Book: \n");
	scanf("%f", &book2.price);

	printf("\nEnter the Title of Book 3: \n");
	fgets(book3.title, sizeof(book3.title), stdin);
	book3.title[strcspn(book3.title, "\n")] = 0;

	printf("Enter the Name of the Author: \n");
	fgets(book3.author, sizeof(book3.author), stdin);
	book3.author[strcspn(book3.author, "\n")] = 0;

	printf("Enter the Price of the Book: \n");
	scanf("%f", &book3.price);

	if(book1.price>book2.price &&  (book1.price>book3.price && book2.price>book3.price)) {

		printf("\nDetails of Book 1:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", book1.title, book1.author, book1.price);
		printf("\nDetails of Book 2:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", book2.title, book2.author, book2.price);
		printf("\nDetails of Book 3:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", book3.title, book3.author, book3.price);

	}
	if(book1.price>book2.price &&  (book1.price>book3.price && book3.price>book2.price)) {

		printf("\nDetails of Book 1:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", book1.title, book1.author, book1.price);
		printf("\nDetails of Book 3:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", book3.title, book3.author, book3.price);
		printf("\nDetails of Book 2:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", book2.title, book2.author, book2.price);

	}
	if(book2.price>book1.price && (book1.price>book3.price && book2.price>book3.price)) {

		printf("\nDetails of Book 2:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", book2.title, book2.author, book2.price);
		printf("\nDetails of Book 1:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", book1.title, book1.author, book1.price);
		printf("\nDetails of Book 3:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", book3.title, book3.author, book3.price);
		return 0;
	}
	if(book2.price>book1.price && (book3.price>book1.price && book2.price>book3.price)) {

		printf("\nDetails of Book 2:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", book2.title, book2.author, book2.price);
		printf("\nDetails of Book 3:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", book3.title, book3.author, book3.price);
		printf("\nDetails of Book 1:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", book1.title, book1.author, book1.price);
		return 0;
	}
	if(book3.price>book1.price && (book1.price>book2.price && book3.price>book2.price)) {

		printf("\nDetails of Book 3:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", book3.title, book3.author, book3.price);
		printf("\nDetails of Book 1:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", book1.title, book1.author, book1.price);
		printf("\nDetails of Book 2:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", book2.title, book2.author, book2.price);
	}
	if(book3.price>book1.price && (book2.price>book1.price && book3.price>book2.price)) {

		printf("\nDetails of Book 3:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", book3.title, book3.author, book3.price);
		printf("\nDetails of Book 2:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", book2.title, book2.author, book2.price);
		printf("\nDetails of Book 1:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", book1.title, book1.author, book1.price);
	}
	return 0;
}
