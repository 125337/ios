@interface WCImageFullScreanViewMgr : MMUserService <WCTranslateImgViewControllerDelegate, MMServiceProtocol, WCImageFullScreenViewControllerDelegate>
{
    BOOL _isFullScreenPresented; // +0x8
    NSString * _nsFromVCName; // +0x10
    WCImageFullScreenViewController * m_controller; // +0x18
    WCMediaItemWrap * _currentMediaItemWrap; // +0x20
}
- (void)animationShowWithHint:(id)arg1 fromViewController:(id)arg2;
- (void)animationShowWithParams:(id)arg1 fromViewController:(id)arg2 completeBlock:(id /* block */)arg3;
- (void)animationShowWithMediaDataArray:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3 needEdit:(BOOL)arg4 From3DTouch:(BOOL)arg5 scene:(unsigned long long)arg6 navigatingDelegate:(id)arg7;
- (void)animationHideToLeft;
- (BOOL)isWindowShown;
- (void)onWindowAnimationWillHide;
- (void)onWindowAnimationHide;
- (void)handleOnWindowAnimationHide;
- (void)changePresentedState:(BOOL)arg1;
- (void)updateCurrentMediaItemWrap:(id)arg1;
- (void)fullScreenViewControllerWillBePushedOrPresented:(id)arg1;
- (void)fullScreenViewControllerDidBePopedOrDismissed:(id)arg1;
- (void)fullScreenViewController:(id)arg1 didScrollFromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)fullScreenViewController:(id)arg1 didClickOriginalArticle:(id)arg2;
- (void)onViewControllerAnimationHideStop;
- (void)onViewControllerAnimationHideWillStop;
- (void)windowHideToLeft;
- (void)onAnimateFadeOut;
- (id)getViewController;
- (void)photoVCHideAnimationCompleted;
- (id)currentMediaItemWrap;
- (void)setCurrentMediaItemWrap:(id)arg1;
- (void).cxx_destruct;
@end

