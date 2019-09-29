#include <stdio.h>
#include <string.h>

int main () {
   FILE *fp;
   char c[] = "this is tutorialspoint";
   char buffer[100];

   /* Open file for both reading and writing */
   fp = fopen("x.txt", "w+");

   /* Write data to the file */
   fwrite(c, strlen(c) + 1, 1, fp);


   fwrite(c, strlen(c) + 1, 1, fp);


   fwrite(c, strlen(c) + 1, 1, fp);


   /* Seek to the beginning of the file */
   fseek(fp, 0, SEEK_SET);

   while(!feof(fp)){
      /* Read and display data */
      fread(buffer, 10,1, fp);

      printf("%s\n", buffer);
   }

   fclose(fp);

   return(0);
}