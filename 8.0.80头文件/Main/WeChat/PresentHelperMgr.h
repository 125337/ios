@interface PresentHelperMgr : MMUserService <MMServiceProtocol>
{
    NSMutableArray * _tmpCannotShowViewControllers; // +0x8
    NSCountedSet * _slientlyPreparePresentStackVCSet; // +0x10
    UIViewController * _slientlyPreparePresentToRemoveTopWebviewVC; // +0x18
}
- (void)onServiceInit;
- (BOOL)shouldIgnoreAppearLifeCycle:(id)arg1;
- (BOOL)inSlientlyPreparePresentStack:(id)arg1;
- (BOOL)isSlientlyPreparePresentToRemoveTopWebviewVC:(id)arg1;
- (void)markSlientlyPreparePresentToRemoveTopWebviewVC:(id)arg1;
- (void)resetSlientlyPreparePresentToRemoveTopWebviewVC;
- (void)slientlyPreparePresentStackForPresentationFor:(id)arg1 NeedSaveNavigationStackAfter:(BOOL)arg2 Completion:(id /* block */)arg3;
- (void)PresentSlientlyFrom:(id)arg1 NeedPresentViewControllerList:(id)arg2 ToVCIndex:(long long)arg3 Completion:(id /* block */)arg4;
- (id)getPresentationStack:(id)arg1 NeedNavigationStack:(BOOL)arg2;
- (void)addViewControllersToNavigationController:(id)arg1 ViewControllers:(id)arg2;
- (id)addSnapShotOf:(id)arg1 ToViewControllerList:(id)arg2;
- (id)getSnapShotViewFor:(id)arg1;
- (void)removeSnapshotViews:(id)arg1;
- (BOOL)isViewControllerCanSetStatusBarStyleWhenSlientProcess:(id)arg1;
- (id)tmpCannotShowViewControllers;
- (void)setTmpCannotShowViewControllers:(id)arg1;
- (id)slientlyPreparePresentStackVCSet;
- (void)setSlientlyPreparePresentStackVCSet:(id)arg1;
- (id)slientlyPreparePresentToRemoveTopWebviewVC;
- (void)setSlientlyPreparePresentToRemoveTopWebviewVC:(id)arg1;
- (void).cxx_destruct;
@end
