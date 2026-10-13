#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	int choose = 0, Maxproduct = 55, quantityproduct = 0, chooproduct = 0, totalCost = 0, totalQuantity = 0;

	std::string ArrayFru[4]{ "яблочный","апельсиновый","абрикосовый","грушевый" };
	std::string ArrayVeg[3]{ "томатный","луковый","огуречный" };
	std::string ArrayTea[2]{ "чесночный","петрушевый" };

	int juceFrucount = 0;
	int tjuceVegcoun = 0;
	int Teacount = 0;

	int Pricefru[4]{ 120, 135, 130, 125 };
	int PriceVeg[3]{ 115, 130, 125 };
	int Pricetea[2]{ 130, 125 };

	int tradecont = 0, luse = 0, sum = 0, basketsize = 0;

	while (true)
	{
		/*Начальное меню*/
		system("cls");
		std::cout << "\n\t\"Ассистент Д.Д.\"" << "\n\t=Привет, пользователь! Добро пожаловать в магазин...=";
		std::cout << "\n\n\n\t\t|===|-СОКИ ДАНИИЛА-|===|";
		std::cout << "\n\n\tЧто вы хотите сделать?";
		std::cout << "\n\t1) -- Посмотреть на катигории товаров." "\n\t2) -- Оформить заказ и выйти." << "\n\t0) -- Уйти из приложения.";
		std::cout << "\n\n\tПоле для ввода -- ";
		std::cin >> choose;

		if (choose == 1)
		{
			/*КАТАЛОГ*/
			system("cls");
			std::cout << "\n\n\n\t|===|-СОКИ ДАНИИЛА-|===|";
			std::cout << "\n\n\t=Каталог товаров по литру=";
			std::cout << "\n\t1) -- Фруктовые соки." << "\n\t2) -- Овощные соки." << "\n\t3) -- Чаи.";
			std::cout << "\n\t0) -- Оформить заказ и выйти в меню.";
			std::cout << "\n\n\tПоле для ввода -- ";
			std::cin >> choose;

			if (choose == 1)
			{
				/*Фруктовые соки*/
				system("cls");
				std::cout << "\n\n\t=Фруктовые соки=";
				std::cout << "\n\n\t1) -- Яблочный - 120 рублей; " << "\n\t2) -- Апельсиновый - 135 рублей; ";
				std::cout << "\n\t3) -- Абрикосовый - 130 рублей; " << "\n\t4) -- Грушевый - 125 рублей. ";

				std::cout << "\n\n\tВведите номер товара -- ";
				std::cin >> chooproduct;

				if (chooproduct == 1)
				{
					std::cout << "\n\n\tВведите количество сока -- ";
					std::cin >> quantityproduct;
					if (quantityproduct > 0)
					{
						totalCost += Pricefru[0] * quantityproduct;
						std::cout << "\n\n\tТовар добавлен в корзину!";
					}
					else
					{
						std::cout << "\n\n\tТовар добавлен в корзину!";
					}
				}
				else if (chooproduct == 2)
				{
					std::cout << "\n\n\tВведите количество сока -- ";
					std::cin >> quantityproduct;
					if (quantityproduct > 0)
					{
						totalCost += Pricefru[1] * quantityproduct;
						std::cout << "\n\n\tТовар добавлен в корзину!";
					}
					else
					{
						std::cout << "\n\n\tТовар добавлен в корзину!";
					}
				}
				else if (chooproduct == 3)
				{
					std::cout << "\n\n\tВведите количество сока -- ";
					std::cin >> quantityproduct;
					if (quantityproduct > 0)
					{
						totalCost += Pricefru[2] * quantityproduct;
						std::cout << "\n\n\tТовар добавлен в корзину!";
					}
					else
					{
						std::cout << "\n\n\tТовар добавлен в корзину!";
					}

				}
				else if (chooproduct == 4)
				{
						std::cout << "\n\n\tВведите количество сока -- ";
						std::cin >> quantityproduct;
					if (quantityproduct > 0)
					{
						totalCost += Pricefru[3] * quantityproduct;
						std::cout << "\n\n\tТовар добавлен в корзину!";
					}
					else
					{
						std::cout << "\n\n\tТовар добавлен в корзину!";
					}

				}

					std::cout << "\n\n\tБудите ли вы брать еще?: " << "\n\n\t1) -- Да; " << "\n\n\t2) -- Нет; ";
					std::cout << "\n\n\tПоле для ввода -- ";
					std::cin >> tradecont;

					if (chooproduct == 1)
					{
						continue;
					}
					else if (chooproduct == 2)
					{
						continue;
					}				
			}

			if (choose == 2)
			{
				/*Овощные соки*/
				system("cls");
				std::cout << "\n\n\t=Овощные соки=";
				std::cout << "\n\n\t1) -- Томатный - 110 рублей; " << "\n\t2) -- Луковый - 125 рублей; " << "\n\t3) -- Огуречный - 130 рублей; ";

				std::cout << "\n\n\tВведите номер товара -- ";
				std::cin >> chooproduct;
				if (chooproduct == 1)
				{
					std::cout << "\n\n\tВведите количество сока -- ";
					std::cin >> quantityproduct;
					if (quantityproduct > 0)
					{
						totalCost += PriceVeg[0] * quantityproduct;
						std::cout << "\n\n\tТовар добавлен в корзину!";
					}
					else
					{
						std::cout << "\n\n\tТовар добавлен в корзину!";
					}
				}
				if (chooproduct == 2)
				{
					std::cout << "\n\n\tВведите количество сока -- ";
					std::cin >> quantityproduct;
					if (quantityproduct > 0)
					{
						totalCost += PriceVeg[1] * quantityproduct;
						std::cout << "\n\n\tТовар добавлен в корзину!";
					}
					else
					{
						std::cout << "\n\n\tТовар добавлен в корзину!";
					}
				}
				if (chooproduct == 3)
				{
					std::cout << "\n\n\tВведите количество сока -- ";
					std::cin >> quantityproduct;
					if (quantityproduct > 0)
					{
						totalCost += PriceVeg[2] * quantityproduct;
						std::cout << "\n\n\tТовар добавлен в корзину!";
					}
					else
					{
						std::cout << "\n\n\tТовар добавлен в корзину!";
					}
				}

				std::cout << "\n\n\tБудите ли вы брать еще?: " << "\n\n\t1) -- Да; " << "\n\n\t2) -- Нет; ";
				std::cout << "\n\n\tПоле для ввода -- ";
				std::cin >> tradecont;

				if (chooproduct == 1)
				{
					continue;
				}
				else if (chooproduct == 2)
				{
					continue;
				}
			}
			else if (choose == 3)
			{
				/*Чаи*/
				system("cls");
				std::cout << "\n\n\t=Чаи=";
				std::cout << "\n\n\t1) -- Чесночный - 125 рублей; " << "\n\t2) -- Петрушевый - 130 рублей; ";

				std::cout << "\n\n\tВведите номер товара -- ";
				std::cin >> chooproduct;
				if (chooproduct == 1)
				{
					std::cout << "\n\n\tВведите количество чая -- ";
					std::cin >> quantityproduct;
					if (quantityproduct > 0)
					{
						totalCost += Pricetea[0] * quantityproduct;
						std::cout << "\n\n\tТовар добавлен в корзину!";
					}
					else
					{
						std::cout << "\n\n\tТовар добавлен в корзину!";
					}
				}
				if (chooproduct == 2)
				{
					std::cout << "\n\n\tВведите количество чая -- ";
					std::cin >> quantityproduct;
					if (quantityproduct > 0)
					{
						totalCost += Pricetea[1] * quantityproduct;
						std::cout << "\n\n\tТовар добавлен в корзину!";
					}
					else
					{
						std::cout << "\n\n\tТовар добавлен в корзину!";
					}
				}
				std::cout << "\n\n\tБудите ли вы брать еще?: " << "\n\n\t1) -- Да; " << "\n\n\t2) -- Нет; ";
				std::cout << "\n\n\tПоле для ввода -- ";
				std::cin >> tradecont;

				if (chooproduct == 1)
				{
					continue;
				}
				else if (chooproduct == 2)
				{
					continue;
				}
			}
		}
		else if (choose == 2)
		{
			system("cls");
			std::cout << "\n\t\"Ассистент Д.Д.\"" << "\n\t=Ваш заказ : " << quantityproduct << " шт.на cумму " << totalCost << " руб.=";
			std::cout << "\n\t=До скорых встреч и хорошего дня, пользователь! :) =";
			std::cout << "\n\tДля выхода из программы на любую клавишу.";
			std::cout << "\n\n\n\n\n\n\n\n";
			system("pause");
			break;
		}
		else if (choose == 0)
		{
			system("cls");
			std::cout << "\n\t\"Ассистент Д.Д.\"" << "\n\t=До скорых встреч и хорошего дня, пользователь! :) ";
			std::cout << "\n\n\n\n\n\n\n\n";
			break;
		}
		return 0;
	}
	
}
