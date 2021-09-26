//Fernández Girado Patricia
//Rodriguez Molina Emilia
//Frías Hernández Joshua

#include <ncurses.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

//Constantes
const int ancho = 120;
const int alto = 40;

//Variables

//Funciones
void setup();
void menuInicio();
void select();

int main()
{

	initscr();
	noecho();
	curs_set(0);
	keypad(stdscr, true);
	nodelay(stdscr, true);
	start_color();

	setup();
	menuInicio();
	endwin();
	return 0;
}

void setup()
{

	init_pair(1, COLOR_WHITE, COLOR_GREEN);
	init_pair(2, COLOR_MAGENTA, COLOR_BLACK);
}

void menuInicio()
{
	WINDOW *wmenu = newwin(alto / 2, ancho / 2, alto / 4, ancho / 4);

	box(wmenu, 0, 0);

	attron(COLOR_PAIR(2));
	wattron(wmenu, A_DIM);
	mvwprintw(wmenu, 19, 45, " IG II ");
	wattroff(wmenu, A_DIM);
	wattron(wmenu, A_BLINK);
	wattron(wmenu, A_BOLD);
	mvwprintw(wmenu, 6, 26, "[J] Jugar");
	mvwprintw(wmenu, 9, 22, "[I] Instrucciones");
	mvwprintw(wmenu, 12, 26, "[S] Salir");
	wattroff(wmenu, A_BOLD);
	wattroff(wmenu, A_BLINK);
	attroff(COLOR_PAIR(2));

	char opcion;
	refresh();

	while (opcion = wgetch(wmenu))
	{
		switch (opcion)
		{
		case 'j':
			werase(wmenu);
			select();
			break;

		case 'J':
			werase(wmenu);
			select();
			break;

		case 'i':
			wclear(wmenu);
			box(wmenu, 0, 0);
			wattron(wmenu, A_BLINK);
			mvwprintw(wmenu, 0, 4, " [J] JUGAR ");
			mvwprintw(wmenu, 0, 46, " [S] SALIR ");
			wattroff(wmenu, A_BLINK);
			wattron(wmenu, A_STANDOUT);
			mvwprintw(wmenu, 0, 24, " INSTRUCCIONES ");
			wattroff(wmenu, A_STANDOUT);

			mvwprintw(wmenu, 3, 3, "Bienvenido, Contendiente: ");
			mvwprintw(wmenu, 5, 3, "Tu voluntad ha traído grandes recompensas pues");
			mvwprintw(wmenu, 6, 3, "has sido seleccionado para representar al");
			mvwprintw(wmenu, 7, 3, "Kandorak 378-BWZ en el próximo encuentro de");
			mvwprintw(wmenu, 8, 3, "la Fedreación Instrumentalista y sus derivados.");
			mvwprintw(wmenu, 10, 3, "Tal honor es otorgado solo a aquellos que sean capaces");
			mvwprintw(wmenu, 11, 3, "de enferntar sus más grandes miedos en el crisol");
			mvwprintw(wmenu, 12, 3, "de la batalla pues, de perder, tu Kandorak será ");
			mvwprintw(wmenu, 13, 3, "borrado del algorítmo de La Gran Semilla.");

			mvwprintw(wmenu, 19, 41, " [C] CONTINUAR ");

			char opcion2;
			refresh();

			while (opcion2 = wgetch(wmenu))
			{
				switch (opcion2)
				{
				case 'c':
					wclear(wmenu);
					box(wmenu, 0, 0);
					wattron(wmenu, A_BLINK);
					mvwprintw(wmenu, 0, 4, " [J] JUGAR ");
					mvwprintw(wmenu, 0, 46, " [S] SALIR ");
					wattroff(wmenu, A_BLINK);
					wattron(wmenu, A_STANDOUT);
					mvwprintw(wmenu, 0, 24, " INSTRUCCIONES ");
					wattroff(wmenu, A_STANDOUT);

					mvwprintw(wmenu, 3, 3, "Como La Gran Semilla decretó, tendrás la ");
					mvwprintw(wmenu, 4, 3, "de elegir tu propio Galo (Avatar) con");
					mvwprintw(wmenu, 5, 3, "características que te llevarán a la victoria... ");
					mvwprintw(wmenu, 6, 3, "o a la derrota.");
					mvwprintw(wmenu, 10, 5, "QUE NUESTRA ESENCIA ELEMENTAL PERDURE POR LA NOCHE");
					mvwprintw(wmenu, 11, 20, "LARGA VIDA AL COMBATE");
					mvwprintw(wmenu, 12, 16, "LARGA VIDA A LA GRAN SEMILLA");
					mvwprintw(wmenu, 16, 32, "Honorable Federación");
					mvwprintw(wmenu, 17, 36, "Instrumentalista");

					mvwprintw(wmenu, 19, 9, " [V] Volver ");

					char opcion3;
					refresh();

					while (opcion3 = wgetch(wmenu))
					{
						switch (opcion3)
						{
						case 'v':
							wclear(wmenu);
							box(wmenu, 0, 0);
							wattron(wmenu, A_BLINK);
							mvwprintw(wmenu, 0, 4, " [J] JUGAR ");
							mvwprintw(wmenu, 0, 46, " [S] SALIR ");
							wattroff(wmenu, A_BLINK);
							wattron(wmenu, A_STANDOUT);
							mvwprintw(wmenu, 0, 24, " INSTRUCCIONES ");
							wattroff(wmenu, A_STANDOUT);

							mvwprintw(wmenu, 3, 3, "Bienvenido, Contendiente: ");
							mvwprintw(wmenu, 5, 3, "Tu voluntad ha traído grandes recompensas pues");
							mvwprintw(wmenu, 6, 3, "has sido seleccionado para representar al");
							mvwprintw(wmenu, 7, 3, "Kandorak 378-BWZ en el próximo encuentro de");
							mvwprintw(wmenu, 8, 3, "la Fedreación Instrumentalista y sus derivados.");
							mvwprintw(wmenu, 10, 3, "Tal honor es otorgado solo a aquellos que sean capaces");
							mvwprintw(wmenu, 11, 3, "de enferntar sus más grandes miedos en el crisol");
							mvwprintw(wmenu, 12, 3, "de la batalla pues, de perder, tu Kandorak será ");
							mvwprintw(wmenu, 13, 3, "borrado del algorítmo de La Gran Semilla.");

							mvwprintw(wmenu, 19, 41, " [C] CONTINUAR ");

							char opcion4;
							refresh();

							while (opcion4 = wgetch(wmenu))
							{
								switch (opcion4)
								{
								case 'c':
									wclear(wmenu);
									box(wmenu, 0, 0);
									wattron(wmenu, A_BLINK);
									mvwprintw(wmenu, 0, 4, " [J] JUGAR ");
									mvwprintw(wmenu, 0, 46, " [S] SALIR ");
									wattroff(wmenu, A_BLINK);
									wattron(wmenu, A_STANDOUT);
									mvwprintw(wmenu, 0, 24, " INSTRUCCIONES ");
									wattroff(wmenu, A_STANDOUT);

									mvwprintw(wmenu, 3, 3, "Como La Gran Semilla decretó, tendrás la ");
									mvwprintw(wmenu, 4, 3, "de elegir tu propio Galo (Avatar) con");
									mvwprintw(wmenu, 5, 3, "características que te llevarán a la victoria... ");
									mvwprintw(wmenu, 6, 3, "o a la derrota.");
									mvwprintw(wmenu, 10, 5, "QUE NUESTRA ESENCIA ELEMENTAL PERDURE POR LA NOCHE");
									mvwprintw(wmenu, 11, 20, "LARGA VIDA AL COMBATE");
									mvwprintw(wmenu, 12, 16, "LARGA VIDA A LA GRAN SEMILLA");
									mvwprintw(wmenu, 16, 32, "Honorable Federación");
									mvwprintw(wmenu, 17, 36, "Instrumentalista");
									break;

									char opcion5;
									refresh();

									while (opcion5 = wgetch(wmenu))
									{
										switch (opcion5)
										{
										case 'j':
											werase(wmenu);
											break;

										case 'J':
											werase(wmenu);
											break;

										case 's':
											werase(wmenu);
											endwin();
											exit(EXIT_SUCCESS);
											break;

										case 'S':
											werase(wmenu);
											endwin();
											exit(EXIT_SUCCESS);
											break;

										default:
											wclear(wmenu);
											box(wmenu, 0, 0);
											wattron(wmenu, A_BLINK);
											mvwprintw(wmenu, 0, 4, " [J] JUGAR ");
											mvwprintw(wmenu, 0, 46, " [S] SALIR ");
											wattroff(wmenu, A_BLINK);
											wattron(wmenu, A_STANDOUT);
											mvwprintw(wmenu, 0, 24, " INSTRUCCIONES ");
											wattroff(wmenu, A_STANDOUT);

											mvwprintw(wmenu, 3, 3, "Como La Gran Semilla decretó, tendrás la ");
											mvwprintw(wmenu, 4, 3, "de elegir tu propio Galo (Avatar) con");
											mvwprintw(wmenu, 5, 3, "características que te llevarán a la victoria... ");
											mvwprintw(wmenu, 6, 3, "o a la derrota.");
											mvwprintw(wmenu, 10, 5, "QUE NUESTRA ESENCIA ELEMENTAL PERDURE POR LA NOCHE");
											mvwprintw(wmenu, 11, 20, "LARGA VIDA AL COMBATE");
											mvwprintw(wmenu, 12, 16, "LARGA VIDA A LA GRAN SEMILLA");
											mvwprintw(wmenu, 16, 32, "Honorable Federación");
											mvwprintw(wmenu, 17, 36, "Instrumentalista");
											break;
										}
									}

								default:
									break;
								}
							}

							break;

						default:
							break;
						}
					}

					break;

				case 'C':

					break;

				default:
					wclear(wmenu);
					box(wmenu, 0, 0);
					wattron(wmenu, A_BLINK);
					mvwprintw(wmenu, 0, 4, " [J] JUGAR ");
					mvwprintw(wmenu, 0, 46, " [S] SALIR ");
					wattroff(wmenu, A_BLINK);
					wattron(wmenu, A_STANDOUT);
					mvwprintw(wmenu, 0, 24, " INSTRUCCIONES ");
					wattroff(wmenu, A_STANDOUT);

					mvwprintw(wmenu, 3, 3, "Bienvenido, Contendiente: ");
					mvwprintw(wmenu, 5, 3, "Tu voluntad ha traído grandes recompensas pues");
					mvwprintw(wmenu, 6, 3, "has sido seleccionado para representar al");
					mvwprintw(wmenu, 7, 3, "Kandorak 378-BWZ en el próximo encuentro de");
					mvwprintw(wmenu, 8, 3, "la Fedreación Instrumentalista y sus derivados.");
					mvwprintw(wmenu, 10, 3, "Tal honor es otorgado solo a aquellos que sean capaces");
					mvwprintw(wmenu, 11, 3, "de enferntar sus más grandes miedos en el crisol");
					mvwprintw(wmenu, 12, 3, "de la batalla pues, de perder, tu Kandorak será ");
					mvwprintw(wmenu, 13, 3, "borrado del algorítmo de La Gran Semilla.");

					wattron(wmenu, A_UNDERLINE);
					mvwprintw(wmenu, 17, 43, "[C] CONTINUAR");
					wattroff(wmenu, A_UNDERLINE);

					char opcion2;
					refresh();
					break;
				}
			}

			break;

		case 'I':
			wclear(wmenu);
			box(wmenu, 0, 0);
			wattron(wmenu, A_BLINK);
			mvwprintw(wmenu, 0, 4, " [J] JUGAR ");
			mvwprintw(wmenu, 0, 46, " [S] SALIR ");
			wattroff(wmenu, A_BLINK);
			wattron(wmenu, A_STANDOUT);
			mvwprintw(wmenu, 0, 24, " INSTRUCCIONES ");
			wattroff(wmenu, A_STANDOUT);
			break;

		case 's':
			werase(wmenu);
			endwin();
			exit(EXIT_SUCCESS);
			break;

		case 'S':
			werase(wmenu);
			endwin();
			exit(EXIT_SUCCESS);
			break;
		default:
			break;
		}
	}
}

void select()
{
	bool char1, char2, char3;
	bool selper = false;
	bool kah;
	do
	{
		WINDOW *wselect = newwin(0, 0, 0, 0);
		box(wselect, 0, 0);
		wattron(wselect, A_BLINK);
		mvwprintw(wselect, 4, 4, "Elige tu contendiente:");
		wattroff(wselect, A_BLINK);
		wattron(wselect, A_BOLD);
		mvwprintw(wselect, 27, 17, " [1] Kah'Randa");
		mvwprintw(wselect, 27, 52, "[2] Pipper Godhunt");
		mvwprintw(wselect, 27, 87, "[3] Solomon");
		wattroff(wselect, A_BOLD);
		mvwprintw(wselect, 28, 14, " Asesina de gigantes");
		mvwprintw(wselect, 28, 48, " Maestre de artes ocutlas");
		mvwprintw(wselect, 28, 79, " Canción de Fuego y sangre");
		wattron(wselect, A_DIM);
		mvwprintw(wselect, 29, 20, " Cazadora");
		mvwprintw(wselect, 29, 50, " Tulpa de la voluntad");
		mvwprintw(wselect, 29, 83, " Guerrero de Asedio");
		mvwprintw(wselect, 37, 58, "Los Galos restantes serán utilizados por tus oponentes");
		wattroff(wselect, A_DIM);

		int sel;
		refresh();
		while (sel = wgetch(wselect))
		{
			switch (sel)
			{
			case 1:
				wclear(wselect);
				char1 = true;
				kah = char1;
				break;

			default:
				break;
			}
		}

	} while (!selper);
}