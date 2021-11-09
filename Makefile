all: game

game: main.o iGraphics.o keyboard.o mouse.o grid.o draw.o point.o color.o object.o circle.o bird.o image_render.o box.o pipe.o game_details.o score_font.o
	g++32  -LOpengl\\lib  main.o iGraphics.o grid.o keyboard.o mouse.o draw.o point.o color.o object.o circle.o bird.o  pipe.o image_render.o box.o game_details.o score_font.o -o game -lfreeglut -lGlaux -lopengl32 -lglu32 -lwinmm -lgdi32 -static-libgcc -static-libstdc++ -lirrKlang 

main.o: main.cpp
	g++32 -IOpengl\\include -w -c main.cpp

iGraphics.o: iGraphics.cpp
	g++32 -IOpengl\\include -w -c iGraphics.cpp

keyboard.o: keyboard.cpp
	g++32 -IOpengl\\include -w -c keyboard.cpp

mouse.o: mouse.cpp
	g++32 -IOpengl\\include -w -c mouse.cpp

draw.o: draw.cpp
	g++32 -IOpengl\\include -w -c draw.cpp

point.o: point.cpp
	g++32 -IOpengl\\include -w -c point.cpp

color.o: color.cpp
	g++32 -IOpengl\\include -w -c color.cpp

object.o: object.cpp
	g++32 -IOpengl\\include -w -c object.cpp

circle.o: circle.cpp
	g++32 -IOpengl\\include -w -c circle.cpp

bird.o: bird.cpp
	g++32 -IOpengl\\include -w -c bird.cpp

box.o: box.cpp
	g++32 -IOpengl\\include -w -c box.cpp

image_render.o: image_render.cpp
	g++32 -IOpengl\\include -w -c image_render.cpp


pipe.o: pipe.cpp
	g++32 -IOpengl\\include -w -c pipe.cpp

grid.o: grid.cpp
	g++32 -IOpengl\\include -w -c grid.cpp

game_details.o: game_details.cpp
	g++32 -IOpengl\\include -w -c game_details.cpp

score_font.o: score_font.cpp
	g++32 -IOpengl\\include -w -c score_font.cpp


run: game
	./game

clean:
	rm -rf *o