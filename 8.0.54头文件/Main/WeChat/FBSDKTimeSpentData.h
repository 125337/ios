@interface FBSDKTimeSpentData : NSObject
{
    BOOL _isCurrentlyLoaded; // +0x8
    BOOL _shouldLogActivateEvent; // +0x9
    BOOL _shouldLogDeactivateEvent; // +0xa
    long long _secondsSpentInCurrentSession; // +0x10
    long long _timeSinceLastSuspend; // +0x18
    int _numInterruptionsInCurrentSession; // +0x20
    long long _lastRestoreTime; // +0x28
    long long _lastSuspendTime; // +0x30
    NSString * _sessionID; // +0x38
}
+ (void)suspend;
+ (void)restore:(BOOL)arg1;
+ (id)singleton;
+ (void)setSourceApplication:(id)arg1 openURL:(id)arg2;
+ (void)setSourceApplication:(id)arg1 isFromAppLink:(BOOL)arg2;
+ (id)getSourceApplication;
+ (void)resetSourceApplication;
+ (void)registerAutoResetSourceApplication;
- (void)instanceSuspend;
- (void)instanceRestore:(BOOL)arg1;
- (id)appEventsParametersForActivate;
- (id)appEventsParametersForDeactivate;
- (void).cxx_destruct;
@end

