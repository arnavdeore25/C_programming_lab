#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	int cnt[26] = {0};
	int j=0, k;
	char encrypt[100];
	int count = 0;
	int ch;
	printf("\nEnter any random string: ");
//	scanf("%s", &str);
	gets(str);
	printf("Entered String = %s", str);
	
	
	do {
		printf("\n1. Count and display the total number of words in the text");
		printf("\n2. Count and display the total number of vowels present in the text");
		printf("\n3. Convert the first letter of every word into uppercase (Title Case) and display the modified text");
		printf("\n4. Identify all repeated words in the text and display each repeated word along with its frequency of occurrence.");
		printf("\n5. Encrypt the text using a mathematical encryption algorithm and display the encrypted text.");
		printf("\n6. Exit");
		printf("\nEnter choice: ");
		scanf("%d", &ch);
		switch(ch) {
			case 1: 	count = 1;
						for(int i = 0; i < strlen(str); i++) {
							if (str[i] == ' ') {
								count++;
							}	
						}
						printf("\nTotal Words = %d", count);
						
						break;
			
			case 2: 	count = 0;
						for(int i = 0; i < strlen(str); i++) {
							if (str[i] == 'a' || str[i] == 'A'|| str[i] == 'e'||str[i] == 'E'||str[i] == 'i'||str[i] == 'I'||str[i] == 'o'||str[i] == 'O'||str[i] == 'u'||str[i] == 'U') {
								count++;
							printf("\nVowels = %c occuring on %d position", str[i], i);
							}
						}
						printf("\nTotal vouwels= %d", count);
						
						break;
			
			case 3: 	while (str[j]!='\0') 
						{
							if(j == 0)
								str[j] = toupper(str[j]);
							if (str[j] == ' ') {
								str[j+1] = toupper(str[j+1]); 
							}
							j++;
						}
						printf("\nModified Text: %s", str);
		
						break;
							
	/*		case 4: 	
							for(int i = 0; str[i]!= '\0'; i++) {
					    	if(str[i] >= 'A' && str[i] <='Z')
					        	str[i] += 32;      
					
					    	if(str[i] >= 'a' && str[i] <= 'z') {
					        	int index = str[i] - 'a';
					        	cnt[index]++;
					    	}				
						}
						for (int i =0; i< 26; i++) {
							if (cnt[i]>0) {
								printf("\n%c: %d", i + 'a', cnt[i]);
							}
						} */
						
						
						break;
				        
			case 5:		
					    strcpy(encrypt, str);
						printf("\nEnter a key for encryption: ");
						scanf("%d", &k);
						
					    if(k< 1 || k > 25)
					    {
					        printf("\nInvalid key is entered");
					        break;
					    }
					    for(int i =0; encrypt[i]!='\0'; i++)
					    {
					        if(encrypt[i]>='A' && encrypt[i] <= 'Z')
					        {
					            encrypt[i] =((encrypt[i] - 'A' + k) % 26) + 'A';
					        }
					        else if(encrypt[i]>='a' && encrypt[i]<='z')
					        {
					            encrypt[i] = ((encrypt[i] - 'a'+ k)% 26)+'a';
					        }
					    }
					    printf("\n\n\nEncrypted Text: %s\n\n\n", encrypt);
						
						break;
			
			case 6: 	break;
			
						break;
						
			default: 	printf("\nEntered Choice isn't valid");	
			
		}
	}while (ch!=6);		
	return 0;
}