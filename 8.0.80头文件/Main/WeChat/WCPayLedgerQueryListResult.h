@interface WCPayLedgerQueryListResult : NSObject
{
    BOOL hasValue; // +0x8
    void * items; // +0x10
    BOOL truncated; // +0x18
}
- (BOOL)hasValue;
- (id)items;
- (BOOL)truncated;
- (id)init;
- (void).cxx_destruct;
@end
