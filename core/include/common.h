// Estruturas e variáveis compartilhadas por todos os arquivos C

#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint32_t timestamp;     // Horário da ordem
    int32_t order_id;       // ID único da ordem (-1 se for inválida)
    int32_t client_id;      // ID do cliente
    int32_t quantity;       // Quantidade
    double price;           // Preço
    char side;              // Comprador ('C') ou Vendedor ('V')
} Order;

typedef struct {
    uint32_t timestamp;          // Momento exato do match
    int32_t trade_id;            // ID único do negócio realizado
    int32_t buy_order_id;        // ID da ordem de compra original
    int32_t sell_order_id;       // ID da ordem de venda original
    int32_t buy_client_id;       // ID do comprador
    int32_t sell_client_id;      // ID do vendedor
    double price;                // Preço final da execução (pode ser diferente do pedido)
    int32_t quantity;            // Quantidade que foi trocada
} Transaction;
