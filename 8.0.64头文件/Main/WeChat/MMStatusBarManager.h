@interface MMStatusBarManager : MMRootService <MMServiceProtocol>
{
    BOOL _isRunningStatusBarAction; // +0x8
    MMStatusBarCustomInfo * _globalOverrideInfo; // +0x10
    NSMutableDictionary * _customStatusTable; // +0x18
    NSMutableArray * _statusBarActions; // +0x20
    double _preferredStatusBarHeight; // +0x28
}
- (id)init;
- (void)addStatusBarAction:(id /* block */)arg1;
- (void)performQueuingAction;
- (void)setStatusBarHidden:(BOOL)arg1 forViewController:(id)arg2;
- (void)setStatusBarStyle:(long long)arg1 forViewController:(id)arg2;
- (void)setStatusBarAnimation:(long long)arg1 forViewController:(id)arg2;
- (BOOL)shouldOverrideStatusBarHiddenFor:(id)arg1;
- (BOOL)shouldOverrideStatusBarStyleFor:(id)arg1;
- (BOOL)shouldOverrideStatusBarAnimation:(id)arg1;
- (BOOL)statusBarHiddenForViewController:(id)arg1;
- (long long)statusBarStyleForViewController:(id)arg1;
- (long long)statusBarAnimationForViewController:(id)arg1;
- (void)onViewControllerChange;
- (void)removeViewControllerConfig:(id)arg1;
- (void)removeAllViewControllerConfigs;
- (id)createCustomInfoFor:(id)arg1;
- (id)getCustomInfoFor:(id)arg1;
- (id)globalOverrideInfo;
- (void)updateSystemNavigationBarFrame:(CGRect)arg1;
- (double)preferredStatusBarHeight;
- (void)setGlobalOverrideInfo:(id)arg1;
- (id)customStatusTable;
- (void)setCustomStatusTable:(id)arg1;
- (id)statusBarActions;
- (void)setStatusBarActions:(id)arg1;
- (BOOL)isRunningStatusBarAction;
- (void)setIsRunningStatusBarAction:(BOOL)arg1;
- (void)setPreferredStatusBarHeight:(double)arg1;
- (void).cxx_destruct;
@end
