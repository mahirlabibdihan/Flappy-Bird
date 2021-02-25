#include "score_font.h"
#define FontTriangle_Height 1
#define FontWidth 1
#define FontHeight 5
void VerticalSegment(int X, int Y, int dx, int dy, int size)
{
	int triangleHeight = FontTriangle_Height * size;
	double  x[6] = { X , X - dx / 2 , X - dx / 2 , X , X + dx / 2 , X + dx / 2 },
	               y[6] = { Y , Y + triangleHeight , Y + dy + triangleHeight , Y + dy + 2 * triangleHeight , Y + dy + triangleHeight , Y + triangleHeight };

	iG::IDraw::IFilled::iPolygon(x, y, 6);
}
void HorizontalSegment(int X, int Y, int dx, int dy, int size)
{
	int triangleHeight = FontTriangle_Height * size;
	double  x[6] = { X , X + triangleHeight , X + dx + triangleHeight , X + dx + 2 * triangleHeight , X + dx + triangleHeight , X + triangleHeight },
	               y[6] = { Y , Y + dy / 2 , Y + dy / 2 , Y , Y - dy / 2 , Y - dy / 2 };

	iG::IDraw::IFilled::iPolygon(x, y, 6);
}
void iDrawDigit(int x, int y, int digit, int size)
{
	if (digit == 0 || digit == 2 || digit == 6 || digit == 8)
		VerticalSegment(x, y, FontWidth * size, FontHeight * size, size);
	if (digit == 0 || digit == 4 || digit == 5 || digit == 6 || digit == 8 || digit == 9)
		VerticalSegment(x, y + FontHeight * size + 2 * FontTriangle_Height * size, FontWidth * size, FontHeight * size, size);
	if (digit == 0 || digit == 2 || digit == 3 || digit == 5 || digit == 6 || digit == 7 || digit == 8 || digit == 9)
		HorizontalSegment(x, y + 2 * FontHeight * size + 4 * FontTriangle_Height * size, FontHeight * size, FontWidth * size, size);
	if (digit == 2 || digit == 3 || digit == 4 || digit == 5 || digit == 6 || digit == 8 || digit == 9)
		HorizontalSegment(x, y + FontHeight * size + 2 * FontTriangle_Height * size, FontHeight * size, FontWidth * size, size);
	if (digit == 0 || digit == 2 || digit == 3 || digit == 5 || digit == 6 || digit == 8 || digit == 9)
		HorizontalSegment(x, y, FontHeight * size, FontWidth * size, size);
	if (digit == 0 || digit == 1 || digit == 3 || digit == 4 || digit == 5 || digit == 6 || digit == 7 || digit == 8 || digit == 9)
		VerticalSegment(x + FontHeight * size + 2 * FontTriangle_Height * size, y, FontWidth * size, FontHeight * size, size);
	if (digit == 0 || digit == 1 || digit == 2 || digit == 3 || digit == 4 || digit == 7 || digit == 8 || digit == 9)
		VerticalSegment(x + FontHeight * size + 2 * FontTriangle_Height * size, y + FontHeight * size + 2 * FontTriangle_Height * size, FontWidth * size, FontHeight * size, size);
}
void iDrawScore(int S, int size, int x, int y)
{
	int i;

	int n = floor(log10(S)) + 1;
	if (!S) iDrawDigit(x, y, S, 10);
	for (i = 0; S; i++)
	{
		iDrawDigit(x - ceil(n / 2.0) * 100 + n * 100 - i * 100, y, S % 10, size);
		S /= 10;
	}
}
void iDrawSmallScore(int S, int size,int x,int y)
{
	if (!S) iDrawDigit(x, y, S, size);
	for (int i = 0; S; i++)
	{
		iDrawDigit(x - i * 100, y, S % 10, size);
		S /= 10;
	}
}