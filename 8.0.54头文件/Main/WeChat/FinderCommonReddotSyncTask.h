@interface FinderCommonReddotSyncTask : NSObject
{
    unsigned int _syncScene; // +0x8
    unsigned int _locationAuthScene; // +0xc
    NSString * _finderUsername; // +0x10
    NSData * _reliableNotifyBuff; // +0x18
    NSString * _contextId; // +0x20
    FinderCommonReddotSyncRequest * _request; // +0x28
}
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (unsigned int)syncScene;
- (void)setSyncScene:(unsigned int)arg1;
- (unsigned int)locationAuthScene;
- (void)setLocationAuthScene:(unsigned int)arg1;
- (id)reliableNotifyBuff;
- (void)setReliableNotifyBuff:(id)arg1;
- (id)contextId;
- (void)setContextId:(id)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (void).cxx_destruct;
@end

