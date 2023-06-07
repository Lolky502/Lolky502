const byte led=12, tlacitko = 11;
int cteni, cteniOld=0, casrozdil, pocetslozek;
unsigned long casMic, casMicOld;

// Změny v souboru nejsou commitnuty!! Příště po skončení práce prove%dte commit


void setup() 
{
  pinMode(led, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
  
  // put your setup code here, to run once:

}

void loop() 
{
  cteniOld= cteni;					//Přidejte sledování času mezi stisky tlačítka - jak to uděláte??   --To jste neudělal!!!!!!!!!!!!!
  cteni = digitalRead(tlacitko);
if(cteni != cteniOld)
{ 
						// zavolejte metodu na svicení led 
TiskMonitor( cteni);

  }
 
  // Vytvořte metodu pro rozsvícení a zhasnutí Led			--To jste neudělal!!!!!!!!!!!!!
  // LedSvitiAnoNe(int led, int stav) 

  if (cteni == HIGH) 
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
  // put your main code here, to run repeatedly:

}

void TiskMonitor(int  cteni)		//název proměnné neodpovídá obsahu
{
  Serial.print(cteni);Serial.print(" , ");
}
