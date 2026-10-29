@interface WCImageFullScreanViewMgrForHBV4 : MMUserService <MMServiceProtocol, WCImageFullScreenWindowDelegate>
{
    WCImageFullScreenWindowForHBV4 * m_view; // +0x8
}
- (id)getWCImageFullScreenView;
- (void)forceHideWindow;
- (void)animationShowWithHint:(id)arg1;
- (void)animationShowWithMediaDataArray:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3;
- (void)animationHideToLeft;
- (BOOL)isWindowShown;
- (void)captureFakeWindow;
- (void)cancelCaptureFakeWindow;
- (void)startLoadingBlocked;
- (void)stopLoading;
- (void)showErrorTip:(id)arg1;
- (void)onWindowAnimationWillHide;
- (void)onWindowAnimationHide;
- (void).cxx_destruct;
@end

