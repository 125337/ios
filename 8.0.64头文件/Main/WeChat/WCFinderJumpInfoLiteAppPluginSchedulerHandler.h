@interface WCFinderJumpInfoLiteAppPluginSchedulerHandler : NSObject <MMLiteAppExt, MMLiteAppHalfScreenStatusChangeListener>
{
    BOOL _hasCallWillAppear; // +0x8
    BOOL _hasAppear; // +0x9
    BOOL _isHalf; // +0xa
    int _businessType; // +0xc
    UIViewController * _fromVC; // +0x10
    MMLiteAppViewController * _toLiteAppVC; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)onLiteAppLifeCycleEvent:(unsigned long long)arg1 appId:(id)arg2 appUuid:(unsigned int)arg3 extraData:(id)arg4;
- (void)fixMissingLifecycleMethod;
- (id)navigationController;
- (id)displayContainerVC;
- (id)_backgroundFromVC;
- (BOOL)_isPushingOrPresenting;
- (void)_onViewWillDisappear;
- (void)_onViewDidDisappear;
- (void)_onViewWillAppear;
- (void)_onViewDidAppear;
- (void)_viewWillBePushOrPresent;
- (void)_viewDidBePushOrPresent;
- (void)_viewWillBePopOrDismiss;
- (void)_viewDidBePopOrDismiss;
- (void)_viewWillPushOrPresent;
- (void)_viewDidPushOrPresent;
- (void)_viewWillPop;
- (void)_viewDidPop;
- (void)onFullScreenAnimEnd;
- (void)onResumeAnimEnd;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (id)toLiteAppVC;
- (void)setToLiteAppVC:(id)arg1;
- (int)businessType;
- (void)setBusinessType:(int)arg1;
- (BOOL)hasCallWillAppear;
- (void)setHasCallWillAppear:(BOOL)arg1;
- (BOOL)hasAppear;
- (void)setHasAppear:(BOOL)arg1;
- (BOOL)isHalf;
- (void)setIsHalf:(BOOL)arg1;
- (void).cxx_destruct;
@end
