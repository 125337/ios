@interface WCPayLedgerComplexItem : NSObject
{
    void * transactionId; // +0x8
    int type; // +0x18
    void * counterparty; // +0x20
    long long amount; // +0x30
    long long date; // +0x38
    unsigned int time; // +0x40
    long long kind; // +0x48
    void * remark; // +0x50
    long long transferState; // +0x60
    long long luckyMoneyState; // +0x68
    void * exclusiveRecvUsername; // +0x70
    void * claimList; // +0x80
    int luckyMoneyTotalNum; // +0x88
    int luckyMoneyType; // +0x8c
    long long aaState; // +0x90
    void * fullPayers; // +0x98
    void * paidList; // +0xa0
    int aaDetailState; // +0xa8
    long long aaType; // +0xb0
}
- (id)transactionId;
- (int)type;
- (id)counterparty;
- (long long)amount;
- (long long)date;
- (unsigned int)time;
- (long long)kind;
- (id)remark;
- (long long)transferState;
- (long long)luckyMoneyState;
- (id)exclusiveRecvUsername;
- (id)claimList;
- (int)luckyMoneyTotalNum;
- (int)luckyMoneyType;
- (long long)aaState;
- (id)fullPayers;
- (id)paidList;
- (int)aaDetailState;
- (long long)aaType;
- (id)init;
- (void).cxx_destruct;
@end
