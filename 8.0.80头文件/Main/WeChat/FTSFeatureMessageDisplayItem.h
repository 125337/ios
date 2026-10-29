@interface FTSFeatureMessageDisplayItem : NSObject
{
    NSString * _sessionUsername; // +0x8
    NSArray * _msgItems; // +0x10
    unsigned long long _sourceMgrIndex; // +0x18
    NSString * _clusterHolderUsername; // +0x20
}
- (id)initWithSessionUsername:(id)arg1 msgItems:(id)arg2 sourceMgrIndex:(unsigned long long)arg3 clusterHolderUsername:(id)arg4;
- (id)sessionUsername;
- (void)setSessionUsername:(id)arg1;
- (id)msgItems;
- (void)setMsgItems:(id)arg1;
- (unsigned long long)sourceMgrIndex;
- (void)setSourceMgrIndex:(unsigned long long)arg1;
- (id)clusterHolderUsername;
- (void)setClusterHolderUsername:(id)arg1;
- (void).cxx_destruct;
@end
