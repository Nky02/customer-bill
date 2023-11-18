#include <stdio.h>

int main()
{

    // declarations
    const float TV_PRICE = 400.00;
    const float VCR_PRICE = 220.00;
    const float REMOTE_CNTRL_PRICE = 35.20;
    const float CD_PLAYER_PRICE = 300.00;
    const float TAPE_RCRDR_PRICE = 150.00;
    const float TAX = 0.0825;

    int qtyTV;
    int qtyVCR;
    int qtyRemoteCntrl;
    int qtyCDplayer;
    int qtyTapeRcrdr;

    float cost;
    float subTotal;
    float Total;
    float SalesTax;

    // INPUT
    printf("How Many TVs Were Sold?\n");
    scanf("%d", &qtyTV);

    printf("How Many VCRs Were Sold?\n");
    scanf("%d", &qtyVCR);

    printf("How Many Remote Controllers Were Sold?\n");
    scanf("%d", &qtyRemoteCntrl);

    printf("How Many CDs Were Sold?\n");
    scanf("%d", &qtyCDplayer);

    printf("How Many Tape Recorders Were Sold?\n");
    scanf("%d", &qtyTapeRcrdr);

    // PROCESS
    float costTV = qtyTV * TV_PRICE;
    float costVCR = qtyVCR * VCR_PRICE;
    float costRemoteCntrl = qtyRemoteCntrl * REMOTE_CNTRL_PRICE; // product costs by by quantity
    float costCDplayer = qtyCDplayer * CD_PLAYER_PRICE;
    float costTapeRcrdr = qtyTapeRcrdr * TAPE_RCRDR_PRICE;

    subTotal = costTV + costVCR + costRemoteCntrl + costCDplayer + costTapeRcrdr;
    SalesTax = subTotal * TAX;
    Total = subTotal + SalesTax;

    // OUTPUT
    printf("\n\n");
    printf(" QTY     DESCRIPTION     UNIT PRICE    TOTAL PRICE \n");
    printf(" ---     -----------     ----------    ----------- \n");
    printf(" %.2d    TV                  400.00       %.2f     \n", qtyTV, costTV);
    printf(" %.2d    VCR                 220.00       %.2f     \n", qtyVCR, costVCR);
    printf(" %.2d    REMOTE CTRLR         35.20       %.2f     \n", qtyVCR, costRemoteCntrl);
    printf(" %.2d    CD PLAYER           300.00       %.2f     \n", qtyCDplayer, costCDplayer);
    printf(" %.2d    TAPE RECORDER       150.00       %.2f     \n", qtyCDplayer, costTapeRcrdr);
    printf("                                       ----------- \n");
    printf("                         SUBTOTAL      %.2f       \n", subTotal);
    printf("                          TAX            %.2f      \n", SalesTax);
    printf("                         TOTAL         %.2f       \n\n", Total);

    return 0;
}