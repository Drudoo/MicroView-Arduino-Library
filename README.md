# MicroView Arduino Library

Developed by [Geek Ammo Pty Ltd](http://www.geekammo.com) based on Arduino and other Open Source libraries.  

## Description

Arduino library for MicroView.  

## Required Libraries

1. SPI.h
2. [Time.h](http://www.pjrc.com/teensy/td_libs_Time.html) NOTE: Only required when using clock/time functions.

## Installation Instructions

1. Extract / Check out to Arduino's libraries folder.
2. Start Arduino IDE.
3. MicroView example is located at, File--->Example--->MicroView--->MicroViewDemo

### Example

<pre><code>
#include &lt;MicroView.h&gt;
#include &lt;SPI.h&gt;

void setup() {
	uView.begin();
	uView.clear(PAGE);  // clear the page buffer
}

void loop() {
	uView.line(0,0,64,48);
	uView.circle(32,24,10);
	uView.rect(10,10,20,20);
	uView.pixel(50,5);
	uView.setCursor(0,40);
	uView.print(" MicroView");
	uView.display();    // display current page buffer
}
</code></pre>

## History

**v1.04b: 3rd February 2014 by JP Liew**
* declared permanent uView variable.
* cleaned code and added some remarks.
* added drawing functions that make use of default color and draw mode.
* added example in README.md

**v1.03b: 1st February 2014 by JP Liew**  
* added 7 segment number only font.

**v1.02b: 31th January 2014 by JP Liew**  
* added sprite animation demo.  

**v1.01b:	30th January 2014 by JP Liew**  
* fixed font draw XOR mode bug.  
* added analog clock demo.

**v1.00b:	30th January 2014 by JP Liew**  
* Initial commit.  Beta with minor bugs.

