   #include <stdio.h>
   #include <stdlib.h>
   #include <string.h>
  
   int main (int argc, char *argv[], char eingabe[])
   {
  
       char alphabet[]   = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
       char leetspeech[] = { '@', '8', '(', 'D', '3', 'F', '6', '#', '!', 'J', 'X', '1', 'M', 'N', '0', '9', 'Q', '2', '$', '7', 'U', 'V', 'W', '%', 'Y', 'Z'};
      char ergebnis[100];
      char uebergang[100];
 
      int i = 0;
      int j = 0;
      int z =0;
      int zaehler = 0 ;
 
      if (argc < 2)
      {
          printf("error");
      }
      else
      {
          for( i = 1 ; i < argc ; i++ )
          {
              zaehler = strlen(argv[i]);
              strcpy( uebergang, argv[i] );
 
 
              for ( z = 0 ; z < zaehler; z++)
              {
 
 
                  for( j = 0 ; j < strlen( alphabet ) ; j++)
                  {
                      if ( uebergang[z] == alphabet[j] )
                      {
                          printf( "%c" , leetspeech[j]);
                          break;
                      }
                  }
                  if( j == strlen( alphabet ) )
                  {
                      printf( "%c", uebergang[z] );
                  }
 
              }
              printf(" ");
          }
      }
 
      printf( "\n");
 
      return 0;
 
 
 
 }
