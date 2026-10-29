@interface MMFinderLiveHandOffItem : MMHandOffItem <NSCopying>
{
    NSString * _icon; // +0x30
    NSString * _feedObjectId; // +0x38
    NSString * _feedNonceId; // +0x40
    NSString * _feedLiveId; // +0x48
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)feedObjectId;
- (void)setFeedObjectId:(id)arg1;
- (id)feedNonceId;
- (void)setFeedNonceId:(id)arg1;
- (id)feedLiveId;
- (void)setFeedLiveId:(id)arg1;
- (void).cxx_destruct;
@end

