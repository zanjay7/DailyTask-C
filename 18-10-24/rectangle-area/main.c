
#include <stdio.h>
struct rectangle {
	int length;
	int width;
};

float rectangleArea(struct rectangle rect) {
	return rect.length * rect.width;
}

int main()
{
	int area;
	struct rectangle rect;
	printf("Enter the Length of the Rectangle: ");
	scanf("%d",&rect.length);

	printf("Enter the Width of the Rectangle: ");
	scanf("%d",&rect.width);
	area =rectangleArea(rect);
	printf("The Area of The rectangle is: %d",area);


	return 0;
}