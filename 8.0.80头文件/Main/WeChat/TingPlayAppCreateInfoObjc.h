@interface TingPlayAppCreateInfoObjc : UnitRCObjcBaseClass <TingPlayAppCreateInfo>
{
    BOOL _openPreloadPlayer; // +0x8
    int _appId; // +0xc
    int _playTaskType; // +0x10
    NSString * _appName; // +0x18
}
- (int)appId;
- (int)getAppId;
- (void)setAppId:(int)arg1;
- (id)appName;
- (id)getAppName;
- (void)setAppName:(id)arg1;
- (int)playTaskType;
- (int)getPlayTaskType;
- (void)setPlayTaskType:(int)arg1;
- (BOOL)openPreloadPlayer;
- (BOOL)getOpenPreloadPlayer;
- (void)setOpenPreloadPlayer:(BOOL)arg1;
- (void).cxx_destruct;
@end
