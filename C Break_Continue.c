//Code:1 Break

#include <stdio.h>

int main()
	{
  		int i;
  
  		for (i = 0; i < 10; i++)
        	{
    			if (i == 4)
                	{
      			break;
    			}
    			printf("%d\n", i);
  		}
   			return 0;
	}

//Code:2 Continue

#include <stdio.h>

int main()
	{
  		int i;
  
  		for (i = 0; i < 10; i++)
        	{
    			if (i == 4)
                		{
      				continue;
    				}
    			printf("%d\n", i);
  		}   
  		return 0;
	}

//Break In While Loop

    #include <stdio.h>

int main()
	{
  		int i = 0;
  
  		while (i < 10)
        	{
    			if (i == 4)
                	{
      				break;
    			}
    			printf("%d\n", i);
    			i++;
  		} 
  		return 0;
	}

//Continue In While Loop

#include <stdio.h>

int main()
	{
  		int i = 0;
  
  		while (i < 10)
        	{
    			if (i == 4)
                	{
      				i++;
      				continue;
    			}
    			printf("%d\n", i);
    			i++;
  		} 
  		return 0;
	}
