#include <appdef.hpp>
#include <sdk/calc/calc.hpp>
#include <sdk/os/lcd.hpp>
#include <sdk/os/debug.hpp>

/*
 * Fill this section in with some information about your app.
 * All fields are optional - so if you don't need one, take it out.
 */
APP_NAME("My app name")
APP_DESCRIPTION("A short description of my app")
APP_AUTHOR("My name")
APP_VERSION("1.0.2")

extern "C"
void main() {
	calcInit(); //backup screen and init some variables

	// Put your app's code here!
	Debug_PrintString("HelloWorld",0);

	//use this command to actually update the screen 
	LCD_Refresh();
	
	calcEnd(); //restore screen and do stuff
}