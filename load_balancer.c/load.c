#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>
#include <unistd.h>

// this is the function to call Python for machine learning predictions
double get_server_score(int cpu_usage, int memory_usage) {
    char command[256];
    FILE *fp;
    double score;

    // Preparing the Python command
    sprintf(command, "python3 ml_model/predict.py %d %d", cpu_usage, memory_usage);

    // Open the process for reading
    fp = popen(command, "r");
    if (fp == NULL) {
        fprintf(stderr, "Failed to run Python script.\n");
        exit(1);
    }

    // Read the result from Python
    fscanf(fp, "%lf", &score);
    pclose(fp);

    return score;
}

// Main function
int main() {
    int cpu = 70, memory = 50;  // Example metrics
    double score;

    printf("we are collecting server metrics\n");
    score = get_server_score(cpu, memory);

    printf("the predicted readiness score: %.2f\n", score);
    if (score > 0.5) {
        printf("Server is ready for traffic.\n");
    } else {
        printf("Server is not ready for traffic.\n");
    }

    return 0;
}
