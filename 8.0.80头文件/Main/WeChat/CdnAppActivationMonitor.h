@interface CdnAppActivationMonitor : NSObject
{
    BOOL _isInForeground; // +0x8
    BOOL _isActive; // +0x9
    NSObject<OS_dispatch_source> * _activationCheckTimer; // +0x10
    CdnTicker * _backgroundTicker; // +0x18
}
+ (id)sharedInstance;
+ (void)start;
+ (BOOL)isAppActive;
+ (BOOL)isAppInForeground;
+ (BOOL)isAnySceneActive;
+ (BOOL)isAnySceneInForeground;
+ (BOOL)checkAppActiveState;
+ (void)logAppState;
- (id)init;
- (void)startActivationCheckTimer;
- (void)stopActivationCheckTimer;
- (void)onAppEnterBackground:(id)arg1;
- (void)onAppEnterForeground:(id)arg1;
- (void)onAppResignActive:(id)arg1;
- (void)onAppBecomeActive:(id)arg1;
- (void)onSceneEnterBackground:(id)arg1;
- (void)onSceneResignActive:(id)arg1;
- (BOOL)isInForeground;
- (void)setIsInForeground:(BOOL)arg1;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (id)activationCheckTimer;
- (void)setActivationCheckTimer:(id)arg1;
- (id)backgroundTicker;
- (void)setBackgroundTicker:(id)arg1;
- (void).cxx_destruct;
@end
