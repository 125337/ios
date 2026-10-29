@interface WCImageFullScreenWindowForHBV4 : MMUIWindow <WCImageFullScreenViewControllerDelegateV4>
{
    WCImageFullScreenViewControllerForHBV4 * m_controller; // +0x8
    id <WCImageFullScreenWindowDelegate> _wc_delegate; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)setFrame:(CGRect)arg1;
- (void)animationShowWithHint:(id)arg1;
- (void)animationShowWithMediaDataArray:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3;
- (void)onViewControllerAnimationShowWillStart;
- (void)onViewControllerAnimationHideStop;
- (void)onViewControllerAnimationHideWillStop;
- (void)windowNeed2Hide;
- (void)windowNeed2Show;
- (void)windowHideToLeft;
- (void)onAnimateFadeOut;
- (void)onViewBePopByMsgBar;
- (void)captureFakeWindow;
- (void)cancelCaptureFakeWindow;
- (void)startLoadingBlocked;
- (void)stopLoading;
- (void)showErrorTip:(id)arg1;
- (id)wc_delegate;
- (void)setWc_delegate:(id)arg1;
- (void).cxx_destruct;
@end

