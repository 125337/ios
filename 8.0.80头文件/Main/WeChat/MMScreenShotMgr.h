@interface MMScreenShotMgr : MMUserService <MMScreenShotViewControllerDelegate, MMStandardOverlayExt, MMServiceProtocol>
{
    MMScreenShotReporter * _reporter; // +0x8
    MMScreenShotViewController * _screenShotViewController; // +0x10
    NSMutableSet * _screenShotSessions; // +0x18
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onStandardOverlayLayoutChanged;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)updateScreenShotBottomOffset;
- (void)onUserDidTakeScreenshot;
- (void)screenShotViewControllerDidClose:(id)arg1;
- (void)screenShotViewControllerWillHandleEntry:(id)arg1;
- (id)reporter;
- (id)screenShotViewController;
- (void)setScreenShotViewController:(id)arg1;
- (id)screenShotSessions;
- (void)setScreenShotSessions:(id)arg1;
- (void).cxx_destruct;
@end
