//----------------------------------------------------------------------------//
//                       *** ЛАБОРАТОРНАЯ РАБОТА № 1 ***                      //
//                                                                            //
// Файл OtherFunc.cpp                                                         //
//                                                                            //
// Автор ГЛУЩЕНКО Сергей Юрьевич                                              //
//                                                                            //
//                                                   Москва, НИИ ТП, 2023 год //
//----------------------------------------------------------------------------//


#include "OtherFunc.h"


QString xxx(QString s)
{
  int p, p1, p2;
  p = p1 = -2;
  p2 = 0;
  while ((p!=-1) && (p1!=-1) && (p2>=0))
  {
    s = s.remove(p,p2);
    p = s.indexOf('(');
    p1 = s.indexOf(')');
    p2 = p1-p+1;
  }
  return s;
}


QString yyy(QString s)
{
  QString s1, s2="";
  for (int i = 0; i <= s.size()-1; i++)
  {
    if (i % 2 == 0)
      s2 = s[i].toUpper();
    else
      s2 = s[i].toLower();
    s1.append(s2);
  }
  return(s1);
}
