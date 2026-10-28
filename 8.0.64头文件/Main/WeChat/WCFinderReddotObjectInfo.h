@interface WCFinderReddotObjectInfo : NSObject
{
    int _tabType; // +0x8
    NSString * _objectId; // +0x10
    NSString * _nonceId; // +0x18
    NSString * _containerId; // +0x20
    NSData * _tabTipsByPassInfo; // +0x28
}
- (BOOL)hasPinToTopFeed;
- (long long)finderTabType;
- (id)description;
- (id)objectId;
- (void)setObjectId:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)containerId;
- (void)setContainerId:(id)arg1;
- (int)tabType;
- (void)setTabType:(int)arg1;
- (id)tabTipsByPassInfo;
- (void)setTabTipsByPassInfo:(id)arg1;
- (void).cxx_destruct;
@end
