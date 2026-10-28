@interface WCSNSRewardInfo : NSObject
{
    unsigned long long amount; // +0x8
    NSString * sendId; // +0x10
}
- (id)init;
- (unsigned long long)amount;
- (void)setAmount:(unsigned long long)arg1;
- (id)sendId;
- (void)setSendId:(id)arg1;
- (void).cxx_destruct;
@end
