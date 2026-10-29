@interface MMFinderLiveClickStream : NSObject <ClickStatSwizzleExt>
{
    NSMutableArray * _pathStack; // +0x8
    long long _installCount; // +0x10
    long long _seq; // +0x18
    NSString * _lastClickIdentifier; // +0x20
    double _lastClickTime; // +0x28
    NSString * _lastDedupIdentifier; // +0x30
    double _lastDedupTime; // +0x38
    MMTimer * _watchdogTimer; // +0x40
    long long _watchdogLeakTicks; // +0x48
    NSMutableDictionary * _activeTouches; // +0x50
}
+ (id)csHookItems;
+ (void)installContainerHooks;
+ (void)uninstallContainerHooks;
+ (id)sharedInstance;
- (id)init;
- (BOOL)isActive;
- (void)installWithLiveRoom:(id)arg1;
- (void)uninstallWithLiveRoom:(id)arg1;
- (BOOL)selfHealIfLeaked;
- (BOOL)trySelfHealLeakLocked;
- (void)clearStateLocked;
- (void)forceUninstallHooksAsync;
- (void)startWatchdog;
- (void)stopWatchdog;
- (void)onWatchdogTick;
- (void)resetPathStackWithLiveRoom:(id)arg1;
- (void)onContainerEnter:(id)arg1 type:(unsigned long long)arg2;
- (void)onContainerExit:(id)arg1;
- (void)onSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
- (void)onSendEvent:(id)arg1;
- (id)activeTouches;
- (void)rememberActiveTouch:(id)arg1;
- (void)forgetActiveTouch:(id)arg1;
- (id)takeTapViewIfTracked:(id)arg1;
- (void)handleClickWithView:(id)arg1 action:(SEL)arg2;
- (id)identifierForView:(id)arg1;
- (id)semanticAnchorOfView:(id)arg1;
- (void)markLiveAction:(id)arg1;
- (void)logEvent:(id)arg1 detail:(id)arg2;
- (id)pathDescLocked;
- (void)compactPathStackLocked;
- (id)pathStack;
- (void)setPathStack:(id)arg1;
- (long long)installCount;
- (void)setInstallCount:(long long)arg1;
- (long long)seq;
- (void)setSeq:(long long)arg1;
- (id)lastClickIdentifier;
- (void)setLastClickIdentifier:(id)arg1;
- (double)lastClickTime;
- (void)setLastClickTime:(double)arg1;
- (id)lastDedupIdentifier;
- (void)setLastDedupIdentifier:(id)arg1;
- (double)lastDedupTime;
- (void)setLastDedupTime:(double)arg1;
- (id)watchdogTimer;
- (void)setWatchdogTimer:(id)arg1;
- (long long)watchdogLeakTicks;
- (void)setWatchdogLeakTicks:(long long)arg1;
- (void)setActiveTouches:(id)arg1;
- (void).cxx_destruct;
@end
