//----------------------------------------------------------------------------//
//                       *** ЛАБОРАТОРНАЯ РАБОТА № 1 ***                      //
//                                                                            //
// Файл FindNumber.cpp                                                        //
//                                                                            //
// Автор ГЛУЩЕНКО Сергей Юрьевич                                              //
//                                                                            //
//                                                   Москва, НИИ ТП, 2023 год //
//----------------------------------------------------------------------------//


#include "FindNumber.h"


TArrNumber FindNumber(QString str)
{
  TArrNumber res;
  QString temp;

  for(int i=0; i<str.size(); i++)
  {
    if (str[i].isDigit() == true)
    {
      temp = temp + str[i];
    }
    else
    {
      if (temp != "")
      {
        res.push_back(temp.toInt());
        temp = "";
      }
    }
  }

  if (temp != "")
    res.push_back(temp.toInt());

  return res;
}
