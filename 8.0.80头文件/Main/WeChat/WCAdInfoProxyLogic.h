@interface WCAdInfoProxyLogic : MMObject <PBMessageObserverDelegate, MMImageLoaderObserver>
{
    id <WCLogicMgrDelegate> _wcLogicMgrDelegate; // +0x8
    NSMutableDictionary * _updateTimeDic; // +0x10
    MemoryMappedKV * _infoProxyMapKV; // +0x18
    NSMutableDictionary * _avatarInfoDict; // +0x20
    NSMutableDictionary * _avatarUrlDict; // +0x28
}
- (id)updateTimeDic;
- (id)infoProxyMapKV;
- (id)avatarInfoDict;
- (id)avatarUrlDict;
- (void)appendUsername:(id)arg1 forUrl:(id)arg2;
- (id)fetchAvatarUrlForUsername:(id)arg1;
- (id)fetchImageForUsername:(id)arg1;
- (id)fetchAvatarInfoFor:(id)arg1;
- (void)setAvatarInfo:(id)arg1 forUsername:(id)arg2;
- (void)updateAvatarInfoWithItem:(id)arg1;
- (void)handleAvatarInfoWithResponse:(id)arg1 snsId:(id)arg2 request:(id)arg3;
- (id)fetchImageForAvatarUrl:(id)arg1;
- (void)sendImageUpdatedExtensionWith:(id)arg1 url:(id)arg2;
- (void)handleAdInfoProxyResponse:(id)arg1;
- (BOOL)checkUpdateInterval:(id)arg1 tid:(id)arg2 function:(id)arg3;
- (int)getUpdateInterval:(id)arg1;
- (long long)getUpdateTime:(id)arg1 tid:(id)arg2 function:(id)arg3;
- (void)setUpdateTime:(id)arg1 tid:(id)arg2 function:(id)arg3 updateTime:(long long)arg4;
- (id)genKeyWithTId:(id)arg1 username:(id)arg2 function:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)wcLogicMgrDelegate;
- (void)setWcLogicMgrDelegate:(id)arg1;
- (void)setUpdateTimeDic:(id)arg1;
- (void)setInfoProxyMapKV:(id)arg1;
- (void)setAvatarInfoDict:(id)arg1;
- (void)setAvatarUrlDict:(id)arg1;
- (void).cxx_destruct;
@end
