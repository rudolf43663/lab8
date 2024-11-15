#include <iostream>

using namespace std;

int main() {
  int god;
  cout << " Введите год: ";
  cin >> god;

  for (int mesyac = 1; mesyac <= 12; mesyac++) {
    cout << "\n--------------- " << mesyac << " ----------------" << endl;

    cout << "Пн Вт Ср Чт Пт Сб Вс\n";

    int denNedeli = (god + (mesyac - 1) / 12 + (god + (mesyac - 1) / 12) / 4 - (god + (mesyac - 1) / 12) / 100 + (god + (mesyac - 1) / 12) / 400) % 7;

    for (int i = 0; i < denNedeli; i++) {
      cout << "   ";
    }

    int dniVMesyats;
    switch (mesyac) {
      case 2:
        dniVMesyats = (god % 4 == 0 && (god % 100 != 0 || god % 400 == 0)) ? 29 : 28;
        break;
      case 4:
      case 6:
      case 9:
      case 11:
        dniVMesyats = 30;
        break;
      default:
        dniVMesyats = 31;
    }

    for (int den = 1; den <= dniVMesyats; den++) {
      cout << den;
      if (den < 10) {
        cout << "  ";
      } else {
        cout << " ";
      }

      denNedeli = (denNedeli + 1) % 7;
      if (denNedeli == 0) {
        cout << endl;
      }
    }
  }

  return 0;
}