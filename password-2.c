#include <stdio.h> 
#include <string.h>

int main(){	
	char a[20]="xyz12@gmail.com";
	char b[12]="123!m";
	char c[20],d[12];
	
	 printf("Enter email:"); 
    scanf("%s",c); 
    
     printf("Enter password:"); 
    scanf("%s",d); 
    
	int n,z;
	n= strcmp(a,c);
	z= strcmp(b,d);
	
    if(n==0 && z==0){ 
        printf("Login Success!!");
    }
	else{ 
    	printf("\nUser doesn't exist!!"); 
	} 		
	return 0;
}



//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char email[50], password[50];
//
//    printf("Enter your email: ");
//    scanf("%s", email);
//
//    printf("Enter your password: ");
//    scanf("%s", password);
//
//    // Check if the email and password are correct
//    if (strcmp(email, "user@example.com") == 0 && strcmp(password, "password123") == 0)
//    {
//        printf("Login successful!\n");
//    }
//    else
//    {
//        printf("Invalid email or password. Please try again.\n");
//    }
//
//    return 0;
//}

