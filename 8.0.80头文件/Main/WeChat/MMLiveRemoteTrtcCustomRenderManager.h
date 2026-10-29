@interface MMLiveRemoteTrtcCustomRenderManager : NSObject
{
    X3DGlobalContext sharedGlobalContext; // +0x8
    MMLiveTaskId * _liveTaskId; // +0x10
    NSMutableDictionary * _remoteTrtcCustomRenderWrapperDict; // +0x18
}
- (id)initWithTaskId:(id)arg1;
- (void)initDefaultData;
- (void)configSharedGlobalContext;
- (void *)getShareGlobalContextPtr;
- (id)getCustomRenderWrapper:(id)arg1 scene:(long long)arg2;
- (id)getCustomRenderWrapper:(id)arg1 scene:(long long)arg2 autoCreateIfNotExist:(BOOL)arg3;
- (void)addCustomRenderWrapper:(id)arg1 userId:(id)arg2;
- (void)stopCustomRenderForAllRemoteTrtcUsers;
- (void)destroyCustomRenderWrapper:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)remoteTrtcCustomRenderWrapperDict;
- (void)setRemoteTrtcCustomRenderWrapperDict:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
