//----------------------------------------------------------------------------//
//                       *** ЛАБОРАТОРНАЯ РАБОТА № 1 ***                      //
//                                                                            //
// Файл main.cpp                                                              //
//                                                                            //
// Автор ГЛУЩЕНКО Сергей Юрьевич                                              //
//                                                                            //
//                                                   Москва, НИИ ТП, 2023 год //
//----------------------------------------------------------------------------//


#include <QCoreApplication>
#include <QTextStream>
#include <QTextCodec>

#include "GeometricMean.h"
#include "Factorial.h"
#include "Distance.h"
#include "EvenNumber.h"
#include "Palindrom.h"
#include "FindNumber.h"
#include "OtherFunc.h"


int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  QTextStream cout(stdout);

  #ifndef __unix__
    cout.setCodec(QTextCodec::codecForName("CP866"));
  #else
    cout.setCodec(QTextCodec::codecForName("UTF8"));
  #endif

  cout << QString::fromUtf8("Лабораторная работа № 1\nГлущенко С.Ю.\n\n");

  //----- Среднее геометрическое трех чисел

  double GM, A, B, C;

  A = 12.0;
  B = 4.0;
  C = 32.0;

  cout << QString::fromUtf8("Заданы три числа A = ") << A << QString::fromUtf8(", B = ") << B << QString::fromUtf8(", C = ") << C << "\n";
  GM = GeometricMean(A, B, C);
  cout << QString::fromUtf8("Среднее геометрическое трех чисел = ") << GM << "\n\n";

  //----- Факториал заданного числа

  int N;
  double F;

  N = 10;

  cout << QString::fromUtf8("Задано число N = ") << N << "\n";
  F = Factorial(N);
  cout << QString::fromUtf8("Факториал числа = ") << F << "\n\n";

  //----- Расстояние между точками в трехмерном пространстве

  Point3D P1, P2;
  double D;

  P1.X = 3.0;
  P1.Y = 2.0;
  P1.Z = -1.0;

  P2.X = 13.0;
  P2.Y = 22.0;
  P2.Z = 45.0;

  cout << QString::fromUtf8("Задана первая точка в трехмерном пространстве P1 = ( ") << P1.X << ", " << P1.Y << ", " << P1.Z << " )\n";
  cout << QString::fromUtf8("Задана вторая точка в трехмерном пространстве P2 = ( ") << P2.X << ", " << P2.Y << ", " << P2.Z << " )\n";
  D = Distance(P1, P2);
  cout << QString::fromUtf8("Расстояние между точками = ") << D << "\n\n";

  //----- Сумма четных чисел до заданного числа

  TArrNumber Arr{1,2,3,4,5,6,7,8,9,10,11,321,123,456,44,88,12};
  int sum, Value=11;

  cout << QString::fromUtf8("Задан массив целых чисел ");
  for(unsigned int i=0; i<Arr.size(); i++)
  {
    cout << Arr[i];
    if (i<Arr.size()-1)
      cout << ", ";
  }
  cout << "\n";
  cout << QString::fromUtf8("Задано ограничивающее число = ") << Value << "\n";
  sum = EvenNumber(Arr, Value);
  cout << QString::fromUtf8("Сумма четных чисел = ") << sum << "\n\n";

  //----- Поиск строки палиндрома

  QStringList SL, SL2;

  SL.push_back("a");
  SL.push_back("ad");
  SL.push_back("ada");
  SL.push_back("add");
  SL.push_back("abda");
  SL.push_back("abba");
  SL.push_back("abcdedcba");
  SL.push_back("abc1d_d1_cba");
  SL.push_back("abcddcrba");
  SL.push_back("abrcddcrb a");

  cout << QString::fromUtf8("На вход поданы следующие строки:") << "\n";

  for(int i=0; i<SL.size(); i++)
    cout << SL[i] << "\n";

  SL2 = Palindrom(SL);

  cout << QString::fromUtf8("Следующие строки являются палиндромами:") << "\n";

  for(int i=0; i<SL2.size(); i++)
    cout << SL2[i] << "\n";

  cout << "\n";

  //----- Поиск целых чисел в строке

  QString str;
  TArrNumber res;

  str = "123asd3f45b321";
  cout << QString::fromUtf8("На вход подана следующая строка: ") << str << "\n";

  res = FindNumber(str);

  if (res.size() > 0)
  {
    cout << QString::fromUtf8("В строке найдены следующие целые числа:") << "\n";

    for(unsigned int i=0; i<res.size(); i++)
    {
      cout << res[i];
      if (i<res.size()-1)
        cout << ", ";
    }
    cout << "\n\n";
  }
  else
  {
    cout << QString::fromUtf8("В строке целые числа не найдены") << "\n\n";
  }

  //-----

  str = "123(asd)3f(45)b321";
  cout << QString::fromUtf8("На вход подана следующая строка: ") << str << "\n";

  str = xxx(str);

  cout << QString::fromUtf8("На выходе функции xxx получена следующая строка: ") << str << "\n\n";

  //-----

  str = "thisisTESTString";
  cout << QString::fromUtf8("На вход подана следующая строка: ") << str << "\n";

  str = yyy(str);

  cout << QString::fromUtf8("На выходе функции yyy получена следующая строка: ") << str << "\n";

  return 0;
}
