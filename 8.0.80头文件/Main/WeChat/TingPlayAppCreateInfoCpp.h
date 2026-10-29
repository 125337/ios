@interface TingPlayAppCreateInfoCpp : UnitRCObjcBaseProxyClass <TingPlayAppCreateInfo>
{
    recursive_mutex _fieldMutex; // +0x8
    vector<bool, std::allocator<bool>> _fieldHasCache; // +0x48
    int _appId; // +0x60
    NSString * _appName; // +0x68
    int _playTaskType; // +0x70
    BOOL _openPreloadPlayer; // +0x74
}
- (id)init;
- (void)notifyFieldUpdated:(int)arg1;
- (int)appId;
- (id)appName;
- (int)playTaskType;
- (BOOL)openPreloadPlayer;
- (int)getAppId;
- (void)setAppId:(int)arg1;
- (id)getAppName;
- (void)setAppName:(id)arg1;
- (int)getPlayTaskType;
- (void)setPlayTaskType:(int)arg1;
- (BOOL)getOpenPreloadPlayer;
- (void)setOpenPreloadPlayer:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
