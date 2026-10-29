@interface TXCAppStateMonitor : NSObject
{
    BOOL _isInForeground; // +0x8
    BOOL _isActive; // +0x9
    BOOL _isInPip; // +0xa
    NSObject<OS_dispatch_source> * _activationCheckTimer; // +0x10
}
+ (id)sharedInstance;
+ (void)start;
+ (BOOL)isAppActive;
+ (BOOL)isAppInForeground;
+ (BOOL)isAppInPip;
+ (void)updatePipSate:(BOOL)arg1;
+ (BOOL)isAnySceneActive;
+ (BOOL)isAnySceneInForeground;
+ (BOOL)checkAppActiveState;
- (id)init;
- (void)startActivationCheckTimer;
- (void)stopActivationCheckTimer;
- (void)onAppEnterBackground:(id)arg1;
- (void)onAppEnterForeground:(id)arg1;
- (void)onAppResignActive:(id)arg1;
- (void)onAppBecomeActive:(id)arg1;
- (BOOL)isInForeground;
- (void)setIsInForeground:(BOOL)arg1;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (BOOL)isInPip;
- (void)setIsInPip:(BOOL)arg1;
- (id)activationCheckTimer;
- (void)setActivationCheckTimer:(id)arg1;
- (void).cxx_destruct;
@end
