#include <stdio.h>

int main() {

   
    char *gregorianMonths[12] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    
  
    char *hijriMonths[12] = {
        "Muharram", "Safar", "Rabi' al-awwal", "Rabi' al-thani", "Jumada al-awwal", "Jumada al-thani",
        "Rajab", "Sha'ban", "Ramadan", "Shawwal", "Dhu al-Qi'dah", "Dhu al-Hijjah"
    };

   
    printf("Gregorian Months:\n");
    for(int i = 0; i < 12; i++) {
        printf("%d. %s\n", i+1, gregorianMonths[i]);
    }
    
 
    printf("\n");

    
    printf("Hijri Months:\n");
    for(int i = 0; i < 12; i++) {
        printf("%d. %s\n", i+1, hijriMonths[i]);
    }

    return 0;
}

