//----------------------------------------------------------------------------//
//                       *** ЛАБОРАТОРНАЯ РАБОТА № 1 ***                      //
//                                                                            //
// Файл Palindrom.cpp                                                         //
//                                                                            //
// Автор ГЛУЩЕНКО Сергей Юрьевич                                              //
//                                                                            //
//                                                   Москва, НИИ ТП, 2023 год //
//----------------------------------------------------------------------------//


#include "Palindrom.h"


//Возвращает true, если поданная на вход строка является палиндромом
bool IsPalindrom(QString str)
{
  bool res=true;
  QString str2;

  //Учитываются только буквы и цифры !!!
  for(int i=0; i<str.size(); i++)
  if (((str[i].isDigit()==true) || (str[i].isLetter()==true)) && (str[i] != ' '))
    str2 = str2 + str[i];

  if (str2.size() == 0)
    return false;

  if (str2.size() == 1)
    return true;

  for(int i=0; i<str2.size()/2; i++)
  if (str2[i] != str2[str2.size()-i-1])
  {
    res = false;
    break;
  }

  return res;
}


QStringList Palindrom(QStringList Value)
{
  QStringList res;

  for(int i=0; i<Value.size(); i++)
  if (IsPalindrom(Value[i]) == true)
    res.push_back(Value[i]);

  return res;
}
