#include <iostream>
#include <raylib.h>

int main()
{
	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(800, 450, "Temp Name");

	while (!WindowShouldClose()) {
		BeginDrawing();

		ClearBackground(BLACK);
		DrawRectangle(150, 25, 500, 400, { 255, 255, 255, 127 });
		DrawRectangle(175, 50, 450, 350, { 255, 255, 255, 127 });
		DrawText("Temp Name", 200, 75, 20, RED);

		EndDrawing();
	}

	CloseWindow();

	return 0;
}