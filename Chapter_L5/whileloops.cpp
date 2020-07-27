#include <iostream>

/*

int main(){
	unsigned int count = 10;
	while (count >= 0){
		if (count == 0){
			std::cout << "BOOOOM!";
		}
		else{
			std::cout << count << " ";
		}
		--count;
	}
}


int main(){
	int count = 1;
	int sum = 0;
	while(count <= 5){
		int x;
		std::cout << " Enter an integer " << count << ":";
		std::cin >> x;
		sum += x;
		++count;
	}
	std::cout << " THe sum of all entered numebrs is: " << sum << "\n";
	return 0;
}



//print 1 to 50 each in new line for every 10
int main(){
	int count = 1;
	while (count <= 100){
		if (count < 10){
			//pad with zeros
			std::cout << "0" << count << "  ";
		}
		else {
			std::cout << count << "  ";
		}
		if (count % 10 == 0){
			std::cout << "\n";
		}
		++count;
	}
}



//print lower triangualr pyrammid n=1 to n = 5

int main(){
	int out = 1;
	while (out <=10){
		int in = 1;
		while( in <= out){
			std::cout << in ++ << " ";
		}
		std::cout << "\n";
		++out;
	}
}



int main(){
	char x = 'A';
	while (x <= 'Z'){
	std::cout << x << '\n';
	++x;
 }
}



int main()
{
	int h = 5;
	while (h >= 1)
	{
		int i = h;
		while (i >= 1)
		{
			std::cout << i << ' ';
			--i;
		}
	std::cout << '\n';
	--h;
	}	
}



int main(){
	int outer = 1;
	while (outer <= 5)
	{
		int inner = 5;
		while (inner >= 1)
		{
			if (inner <= outer)
				std::cout << inner << ' ';
			else
			{

				std::cout << " ";
			}
			--inner;

		}
		std::cout << '\n';
		++outer;
	}

}

*/

int main()
{
	int selection;

	do
	{
		std::cout << "Please make a selection: \n";
        std::cout << "1) Addition\n";
        std::cout << "2) Subtraction\n";
        std::cout << "3) Multiplication\n";
        std::cout << "4) Division\n";
        std::cin >> selection;
	}
	while (selection != 1 )
}

