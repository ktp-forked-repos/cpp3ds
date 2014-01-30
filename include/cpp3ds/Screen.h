#ifndef SCREEN_H
#define SCREEN_H

#include <cpp3ds/Color.h>

namespace cpp3ds {

	class Drawable; // Forward-declaration for cyclic reference

	class Screen {
	protected:
		bool buffer;
		int frame1, frame2;
		int width, height;
	public:
		Screen(int addr1, int addr2, int w, int h);
		int getWidth(){ return width; }
		int getHeight(){ return height; }
		void setPixelAddress(int addr, Color color);
		void setPixel(int x, int y, Color color);
		void clear(Color color);
		void draw(Drawable& obj, int x = 0, int y = 0);
	};
}

#endif