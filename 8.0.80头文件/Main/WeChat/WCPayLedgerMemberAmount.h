@interface WCPayLedgerMemberAmount : NSObject
{
    void * username; // +0x8
    long long amount; // +0x18
    unsigned int time; // +0x20
}
- (id)username;
- (long long)amount;
- (unsigned int)time;
- (id)init;
- (void).cxx_destruct;
@end
