@interface WCAppLaunchTimeRecorder : NSObject <INetworkStatusMgrExt, INewSyncExt>
{
    unordered_map<WCAppLaunchTimeEvent, unsigned long long, std::hash<WCAppLaunchTimeEvent>, std::equal_to<WCAppLaunchTimeEvent>, std::allocator<std::pair<const WCAppLaunchTimeEvent, unsigned long long>>> _eventTimestamps; // +0x8
    unsigned long long _processStartTime; // +0x30
    BOOL _isBeingDebugged; // +0x38
    BOOL _isNormalLaunch; // +0x39
    BOOL _hasFinishedLaunching; // +0x3a
    NSString * _activePrewarm; // +0x40
}
+ (id)sharedInstance;
- (void)dealloc;
- (void)record:(unsigned long long)arg1;
- (unsigned long long)timestamp:(unsigned long long)arg1;
- (void)setIsNormalLaunch:(BOOL)arg1;
- (void)reportAtStage:(unsigned long long)arg1;
- (void)printTimeline;
- (id)eventName:(unsigned long long)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onNewSyncBegin;
- (void)onNewSyncStart;
- (void)onNewSyncFinish;
- (void)onNewSyncEnd;
- (void)onNewSyncOplogOK;
- (void)onNewSyncOplogFail;
- (void)onNewSyncOplogConnectFail;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
