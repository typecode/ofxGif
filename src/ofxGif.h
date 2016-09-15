#pragma once

#include "ofMain.h"

namespace ofxGIF
{
	class fiGifSaver
	{
	public:
		fiGifSaver(){}
		~fiGifSaver(){}

		void create(string filename);
		void save();

		void append(string filename);		// not alpha channel
		void append(ofPixels& pixels);
		void append(ofPixels& pixels, int duration);
	};

	class fiGifLoader
	{
	public:

		fiGifLoader(){}
		~fiGifLoader(){}

		void load(string filename);

		vector<ofImage> pages;

	};

};



