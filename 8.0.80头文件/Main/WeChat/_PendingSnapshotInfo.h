@interface _PendingSnapshotInfo : NSObject
{
    WAAgentCardMetadata * _metadata; // +0x8
    NSDate * _expireAt; // +0x10
}
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (id)expireAt;
- (void)setExpireAt:(id)arg1;
- (void).cxx_destruct;
@end
