@interface WCFinderPortraitProgressPanelView : WCFinderProgressPanelView
{
    WCFinderPlayerLoadingView * _playerloadingView; // +0x8
    WCFinderProgressBar * _progressBar; // +0x10
    id <WCFinderPortraitProgressPanelViewDelegate> _portraitDelegate; // +0x18
    unsigned long long _startDragStyle; // +0x20
    UIButton * _rotateButton; // +0x28
    NSTimer * _smallerTimer; // +0x30
    WCFinderPortraitProgressBar * _immersiveProgressBar; // +0x38
    TextStateBlurButton * _exitPinchInButton; // +0x40
    CGPoint _pauseButtonCenter; // +0x48
}
- (id)extendProgressPanGes;
- (unsigned long long)getStratImmersiveProgressBarDragStyle;
- (BOOL)curSupportType:(unsigned long long)arg1;
- (BOOL)isLowestType;
- (void)setCurType:(unsigned long long)arg1;
- (void)updateCurProgressType;
- (void)setTimeHidden:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isInteracting;
- (void)cancelBecomeSmaller;
- (void)becomeInteractive;
- (void)resignInteractive;
- (void)becomeLowest;
- (void)becomeStatic;
- (void)resignStatic;
- (void)onClickCloseBtn:(id)arg1;
- (void)onClickRotateButton:(id)arg1;
- (void)hideAllSubControlWhileInteractive;
- (void)fireBecomeSmaller;
- (void)becomeSmaller;
- (void)becomeBiger;
- (double)progressCenterY;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)checkProgressBarStatus;
- (void)updateConfig;
- (void)updateProgressElementsWithCurrentPlayPosition:(double)arg1 videoDuration:(double)arg2 forbidProgressBarMovAnim:(BOOL)arg3 contentVM:(id)arg4 manual:(BOOL)arg5;
- (void)layoutProgressBar;
- (void)updateControlsEnhanceColor;
- (void)updateControlsLayout;
- (void)updateOtherControlsLayout;
- (void)updateControlsHiddenState;
- (BOOL)isShowing;
- (void)startLoading;
- (void)stopLoading;
- (BOOL)isAnimating;
- (BOOL)isNewLoading;
- (BOOL)isPinchInState;
- (id)dynamicWhiteColor;
- (id)playerloadingView;
- (id)progressBar;
- (id)smallerTimer;
- (id)immersiveProgressBar;
- (id)exitPinchInButton;
- (id)rotateButton;
- (id)longVideoEntry;
- (unsigned long long)progressStyle;
- (id)mediaCollectionView;
- (void)setPlayerloadingView:(id)arg1;
- (id)portraitDelegate;
- (void)setPortraitDelegate:(id)arg1;
- (unsigned long long)startDragStyle;
- (void)setStartDragStyle:(unsigned long long)arg1;
- (void)setRotateButton:(id)arg1;
- (void)setSmallerTimer:(id)arg1;
- (void)setImmersiveProgressBar:(id)arg1;
- (void)setExitPinchInButton:(id)arg1;
- (CGPoint)pauseButtonCenter;
- (void)setPauseButtonCenter:(CGPoint)arg1;
- (void).cxx_destruct;
@end

