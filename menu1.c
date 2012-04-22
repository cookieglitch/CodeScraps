/**
 * menu1.c
 * Code to handle a menu using a keypad. Assumes driver scans keypad pins for input rather than using interrupt
 * 
 * @version 1.0 (Give or take 100.0)
 * @author John Tiernan
 */

void menu1()
{
	incrementTime = 1;
	//Update display


	/* Change alarm */
	while(changeAlarmState == 1)
	{
	   int tempKeyPress = 0;

	   delay(100);
	   /* Update display to reflect chanegs made by user */

	   /* Debouce keypress and get keypress value */
	   
	   while ( (tempKeyPress = keypadScan()) == 0 )
	   {
                delay(10);
           }
	   keyPressValue = keypadScan();
	   while((tempKeyPress = keypadScan()) != 0)
	   {
		delay(10);
	   }


	   /* Logic... */
	   if(keyPressValue == 1)
	   {
		//Process option
		//Update display
	   }else if(keyPressValue == 2)
	   {
		//Process option
		//Update display
	   }else if(keyPressValue == 5)
	   {
		//Process option
		//Update display
	   }else if(keyPressValue == 6)
	   {
		//Process option
		//Update display
	   }else if(keyPressValue == 9)
	   {
		//Process option
		//Update display
	   }else if(keyPressValue == 10)
	   {
		//Process option
		//Update display
	   }else if(keyPressValue == 16)
	   {
		changeAlarmState = -1;
	   }else
	   {
		//Update display
	   }
	}
	//Update display
}

