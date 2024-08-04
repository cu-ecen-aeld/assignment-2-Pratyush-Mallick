#include <stdio.h>
#include <syslog.h>

int main(int argc, char **argv) {

    char *name;
    char *tx;
    
    openlog(NULL, 0, LOG_USER);
    
    if (argc < 2) {
        syslog(LOG_ERR, "Few args");
        closelog();
        return 1;
    }

    name = argv[1];
    txt = argv[2];

    FILE *file_temp = fopen(name, "w");
    if (file != NULL) {
        fprintf(file_temp, "%s", txt);
        fclose(file_temp);
        syslog(LOG_DEBUG, "Writing %s to %s", txt, name);
        closelog();
    }
    else
    {
        syslog(LOG_ERR, "Write Failed");
        closelog();
        return 1;
    }
    
    return 0;
}