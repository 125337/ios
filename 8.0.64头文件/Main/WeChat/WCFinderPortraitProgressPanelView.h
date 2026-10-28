@interface WCFinderPortraitProgressPanelView : WCFinderProgressPanelView
{
    WCFinderPlayerLoadingView * _playerloadingView; // +0x8
    WCFinderProgressBar * _progressBar; // +0x10
    id <WCFinderPortraitProgressPanelViewDelegate> _portraitDelegate; // +0x18
    unsigned long long _startDragStyle; // +0x20
    UIButton * _rotateButton; // +0x28
    NSTimer * _stateChangeTimer; // +0x30
    WCFinderPortraitProgressBar * _immersiveProgressBar; // +0x38
    WCFinderPhotoProgressBar * _photoProgressBar; // +0x40
    TextStateBlurButton * _exitPinchInButton; // +0x48
    MMUIButton * _voiceOverButton; // +0x50
    WCFinderCommonTipsView * _progressAnchorTips; // +0x58
    unsigned long long _lastType; // +0x60
    CGPoint _pauseButtonCenter; // +0x68
}
- (void)dealloc;
- (void)removeFromSuperview;
- (void)resetUIViewState;
- (id)extendProgressPanGes;
- (unsigned long long)getStratImmersiveProgressBarDragStyle;
- (BOOL)curSupportType:(unsigned long long)arg1;
- (BOOL)isLowestType;
- (void)setCurType:(unsigned long long)arg1;
- (void)resetDefaultType;
- (void)updateCurProgressType;
- (void)setTimeHidden:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isInteracting;
- (void)cancelTimer;
- (void)becomeInteractive;
- (void)resignInteractive;
- (void)becomeLowest;
- (void)becomeStatic;
- (void)resignStatic;
- (void)onVoiceOverStatusChanged;
- (void)showProgressAnchor:(double)arg1;
- (void)setViewsOverLapPlayerIsTranslucent:(BOOL)arg1;
- (void)_showAnchorTipsView;
- (void)clickPlayAnchor;
- (void)hidePlaceHolder:(id)arg1;
- (double)anchorProgress;
- (BOOL)canShowAnchor;
- (void)onClickCloseBtn:(id)arg1;
- (void)onClickRotateButton:(id)arg1;
- (void)onClickVoiceOverButton:(id)arg1;
- (void)hideAllSubControlWhileInteractive;
- (void)fireBecomeSmaller;
- (void)becomeSmaller;
- (void)becomeBiger;
- (double)progressCenterY;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)checkProgressBarStatus;
- (void)updateConfig;
- (unsigned long long)_defaultProgressType;
- (void)updateProgressElementsWithCurrentPlayPosition:(double)arg1 videoDuration:(double)arg2 forbidProgressBarMovAnim:(BOOL)arg3 contentVM:(id)arg4 manual:(BOOL)arg5;
- (void)layoutProgressBar;
- (void)updateControlsEnhanceColor;
- (void)updateControlsLayout;
- (void)updateOtherControlsLayout;
- (void)updateControlsHiddenState;
- (BOOL)isShowing;
- (void)updatePhotoProgressBarWithIndex:(unsigned long long)arg1 precent:(double)arg2;
- (void)startLoading;
- (void)stopLoading;
- (BOOL)isAnimating;
- (BOOL)isNewLoading;
- (BOOL)isPinchInState;
- (id)dynamicWhiteColor;
- (BOOL)canVideoFeedPlay;
- (id)photoProgressBar;
- (id)voiceOverButton;
- (id)playerloadingView;
- (id)progressBar;
- (id)createRecoverTimerWithTinterval:(double)arg1 selector:(SEL)arg2 userInfo:(id)arg3;
- (id)immersiveProgressBar;
- (id)exitPinchInButton;
- (id)rotateButton;
- (id)longVideoEntry;
- (unsigned long long)progressStyle;
- (id)mediaCollectionView;
- (id)finderProgressBarGetContentVM;
- (void)setPlayerloadingView:(id)arg1;
- (id)portraitDelegate;
- (void)setPortraitDelegate:(id)arg1;
- (unsigned long long)startDragStyle;
- (void)setStartDragStyle:(unsigned long long)arg1;
- (void)setRotateButton:(id)arg1;
- (id)stateChangeTimer;
- (void)setStateChangeTimer:(id)arg1;
- (void)setImmersiveProgressBar:(id)arg1;
- (void)setPhotoProgressBar:(id)arg1;
- (void)setExitPinchInButton:(id)arg1;
- (CGPoint)pauseButtonCenter;
- (void)setPauseButtonCenter:(CGPoint)arg1;
- (void)setVoiceOverButton:(id)arg1;
- (id)progressAnchorTips;
- (void)setProgressAnchorTips:(id)arg1;
- (unsigned long long)lastType;
- (void)setLastType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
