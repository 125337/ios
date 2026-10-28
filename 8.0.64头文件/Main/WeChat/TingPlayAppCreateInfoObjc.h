@interface TingPlayAppCreateInfoObjc : UnitRCObjcBaseClass <TingPlayAppCreateInfo>
{
    int _appId; // +0x8
    int _playTaskType; // +0xc
    NSString * _appName; // +0x10
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
- (void).cxx_destruct;
@end
