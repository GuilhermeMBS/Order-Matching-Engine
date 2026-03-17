// Estruturas e variáveis compartilhadas por todos os arquivos C

#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint32_t timestamp;
    int order_id;
    int client_id;
    int quantity;
    double price;
    char symbol[8];
    char side;
    char is_valid;
} Order;

typedef struct {
    Order* order;
    // ...
} Trade;
