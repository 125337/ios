@interface WAAppTaskMinimizationData : MMObject <MinimizeTaskPlayCtrlDelegate, PBCoding>
{
    BOOL _isGameAPP; // +0x8
    NSString * _username; // +0x10
    unsigned long long _debugMode; // +0x18
    NSString * _appEntryPage; // +0x20
    NSString * _appID; // +0x28
}
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_debugMode;
+ (void)PBArrayAdd_isGameAPP;
+ (void)PBArrayAdd_appEntryPage;
+ (void)PBArrayAdd_appID;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)onContentViewClicked:(id)arg1;
- (void)onCloseButtonClicked:(id)arg1;
- (void)removeWindowMinimizeTask;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)debugMode;
- (void)setDebugMode:(unsigned long long)arg1;
- (BOOL)isGameAPP;
- (void)setIsGameAPP:(BOOL)arg1;
- (id)appEntryPage;
- (void)setAppEntryPage:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (void).cxx_destruct;
@end
