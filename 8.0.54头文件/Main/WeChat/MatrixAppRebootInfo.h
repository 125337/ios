@interface MatrixAppRebootInfo : MatrixBaseModel
{
    BOOL _isAppEnterForeground; // +0x8
    BOOL _isAppEnterBackground; // +0x9
    BOOL _isAppWillSuspend; // +0xa
    BOOL _isAppBackgroundFetch; // +0xb
    BOOL _isAppSuspendKilled; // +0xc
    BOOL _isAppCrashed; // +0xd
    BOOL _isAppQuitByExit; // +0xe
    BOOL _isAppQuitByUser; // +0xf
    BOOL _isAppMainThreadBlocked; // +0x10
    unsigned long long _appLaunchTime; // +0x18
    NSString * _appUUID; // +0x20
    NSString * _osVersion; // +0x28
    NSString * _dumpFileName; // +0x30
    NSString * _userScene; // +0x38
}
+ (id)sharedInstance;
+ (id)infoPath;
- (void)saveInfo;
- (BOOL)isAppEnterForeground;
- (void)setIsAppEnterForeground:(BOOL)arg1;
- (BOOL)isAppEnterBackground;
- (void)setIsAppEnterBackground:(BOOL)arg1;
- (BOOL)isAppWillSuspend;
- (void)setIsAppWillSuspend:(BOOL)arg1;
- (BOOL)isAppBackgroundFetch;
- (void)setIsAppBackgroundFetch:(BOOL)arg1;
- (BOOL)isAppSuspendKilled;
- (void)setIsAppSuspendKilled:(BOOL)arg1;
- (BOOL)isAppCrashed;
- (void)setIsAppCrashed:(BOOL)arg1;
- (BOOL)isAppQuitByExit;
- (void)setIsAppQuitByExit:(BOOL)arg1;
- (BOOL)isAppQuitByUser;
- (void)setIsAppQuitByUser:(BOOL)arg1;
- (BOOL)isAppMainThreadBlocked;
- (void)setIsAppMainThreadBlocked:(BOOL)arg1;
- (unsigned long long)appLaunchTime;
- (void)setAppLaunchTime:(unsigned long long)arg1;
- (id)appUUID;
- (void)setAppUUID:(id)arg1;
- (id)osVersion;
- (void)setOsVersion:(id)arg1;
- (id)dumpFileName;
- (void)setDumpFileName:(id)arg1;
- (id)userScene;
- (void)setUserScene:(id)arg1;
- (void).cxx_destruct;
@end

