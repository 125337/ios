@interface WCRedEnvelopesInfo : NSObject <NSCoding, PBCoding>
{
    BOOL _hasReward; // +0x8
    BOOL _bFree; // +0x9
    NSString * _sendId; // +0x10
}
+ (void)PBArrayAdd_sendId;
+ (void)PBArrayAdd_hasReward;
+ (void)PBArrayAdd_bFree;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sendId;
- (void)setSendId:(id)arg1;
- (BOOL)hasReward;
- (void)setHasReward:(BOOL)arg1;
- (BOOL)bFree;
- (void)setBFree:(BOOL)arg1;
- (void).cxx_destruct;
@end

