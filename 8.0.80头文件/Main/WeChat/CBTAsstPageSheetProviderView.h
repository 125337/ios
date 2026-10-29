@interface CBTAsstPageSheetProviderView : MMPageSheetProviderView
{
    BOOL _cbtDidSeePanBegan; // +0x8
}
+ (void)load;
+ (void)cbt_install;
+ (id)cbt_viewWithProvider:(id)arg1;
- (void)doShowWithAnimated:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)handleInteractiveClosePanGesture:(id)arg1;
- (void)cbt_repairContainerAnchorIfNeeded;
@end
