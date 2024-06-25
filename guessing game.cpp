#include<iostream>

using namespace std;

int main()

{
	
	int answer=34;
	
	int guess;
	
	int health=0;
	
	int chances=5;
	
	bool gameover= false;
	
	while(answer !=guess && !gameover)
	{
		
		if(health<chances)
		{
			
			cout<<"Enter your number=";
			cin>>guess;
			health++;
			
		}
		
		else
		{
			gameover=true;
		}
		
	}
	
	if(gameover)
	{
		cout<<"You lost"<<endl;
	}
	else
	{
		cout<<"You win"<<endl;
	}
	
	return 0;
}
