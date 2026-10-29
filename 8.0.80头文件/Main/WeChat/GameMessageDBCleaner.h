@interface GameMessageDBCleaner : NSObject
{
    unsigned int interactiveMaxCount; // +0x8
    unsigned int interactiveMaxRetentionDays; // +0xc
    unsigned int notifyMaxCount; // +0x10
    unsigned int notifyMaxRetentionDays; // +0x14
    unsigned int reddotMaxRetentionDays; // +0x18
    BOOL enableCleanStrategy; // +0x1c
    unsigned int checkIntervalDays; // +0x20
    BOOL shouldStopTask; // +0x24
    double timeTaskStart; // +0x28
}
- (void)initSetting;
- (BOOL)getConfigFromGlobalConfig;
- (void)makeDefaultValue;
- (void)clean;
- (void)uninit;
- (void)onAppEnterBackground;
- (void)onAppEnterForeground;
- (void)onAppWillClose;
- (void)onUserLogout;
- (BOOL)checkCleanFrequency;
- (void)cleanDBExecute;
- (void)cleanRedDot;
- (void)cleanNotifyMsg;
- (void)cleanInteractiveMsg;
- (void)reportStart;
- (void)reportComplete;
- (void)reportDBSize;
- (void)reportStatus:(id)arg1;
@end
