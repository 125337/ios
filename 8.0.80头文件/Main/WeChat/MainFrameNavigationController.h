@interface MainFrameNavigationController : WCTabBarBaseNavigationController
{
    BOOL _hasDumpIvars; // +0x8
    BOOL _hasFinishedUpdatingStatusBar; // +0x9
}
- (void)viewDidLayoutSubviews;
- (void)PushViewController:(id)arg1 animated:(BOOL)arg2 isForceFullScreen:(BOOL)arg3 isAutoRotatePortrait:(BOOL)arg4 completion:(id /* block */)arg5;
- (id)navigationUniqueKey;
- (void)dumpIvars;
- (id)jsonForObject:(id)arg1 children:(id)arg2;
- (id)valueForIvar:(objc_ivar *)arg1 object:(id)arg2 encoding:(const char *)arg3;
- (BOOL)hasDumpIvars;
- (void)setHasDumpIvars:(BOOL)arg1;
- (BOOL)hasFinishedUpdatingStatusBar;
- (void)setHasFinishedUpdatingStatusBar:(BOOL)arg1;
@end
