all: compile run
compile:
	gcc -o main ./src/*.cpp `pkg-config --cflags --libs sdl2 SDL2_image`
run:
	@./src/main
configure:
	export PKG_CONFIG_PATH=/usr/local/lib/pkgconfig
install:
	@this will fuck up your system
	git clone https://github.com/libsdl-org/SDL
	cd SDL
	mkdir build
	cd build
	../configure
	make
	sudo make install
	cd ../../
	tar -xf SDL_image-release-2.6.2.tar.gz
	cd SDL_image-release-2.6.2
	./configure
	make all
	sudo make install
	cd ../
# full: install configure compile run