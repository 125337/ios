@interface WCPayF2FReceiveRecordItem : NSObject
{
    unsigned long long _timeStamp; // +0x8
    NSString * _billID; // +0x10
    NSString * _transID; // +0x18
    NSString * _desc; // +0x20
    unsigned long long _amount; // +0x28
}
- (unsigned long long)timeStamp;
- (void)setTimeStamp:(unsigned long long)arg1;
- (id)billID;
- (void)setBillID:(id)arg1;
- (id)transID;
- (void)setTransID:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (unsigned long long)amount;
- (void)setAmount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
