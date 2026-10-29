@interface WCFinderPortraitProgressPanelView : WCFinderProgressPanelView
{
    BOOL _voiceOverFlattenedByHostCell; // +0x8
    WCFinderPlayerLoadingView * _playerloadingView; // +0x10
    WCFinderProgressBar * _progressBar; // +0x18
    id <WCFinderPortraitProgressPanelViewDelegate> _portraitDelegate; // +0x20
    unsigned long long _startDragStyle; // +0x28
    UIButton * _rotateButton; // +0x30
    UIButton * _listenVideoButton; // +0x38
    UIButton * _effectiveAreaExpandButton; // +0x40
    MMUIButton * _voiceOverButton; // +0x48
    NSTimer * _stateChangeTimer; // +0x50
    WCFinderPortraitProgressBar * _immersiveProgressBar; // +0x58
    WCFinderPhotoProgressBar * _photoProgressBar; // +0x60
    TextStateBlurButton * _exitPinchInButton; // +0x68
    WCFinderCommonTipsView * _progressAnchorTips; // +0x70
    WCFinderCommonTipsView * _bulletOpenGuideTips; // +0x78
    unsigned long long _lastType; // +0x80
    MMUIButton * _seeLaterButton; // +0x88
    MMTimer * _loadingStartTimer; // +0x90
    CGPoint _pauseButtonCenter; // +0x98
}
- (void)dealloc;
- (void)removeFromSuperview;
- (void)resetUIViewState;
- (BOOL)showBulletOpenGuideBubbleWithText:(id)arg1 duration:(double)arg2 onDismiss:(id /* block */)arg3;
- (void)dismissBulletOpenGuideBubble;
- (void)dismissBulletOpenGuideBubbleWithUnexpReason:(long long)arg1;
- (void)syncBulletOpenGuideBubbleAlpha;
- (id)extendProgressPanGes;
- (unsigned long long)getStratImmersiveProgressBarDragStyle;
- (BOOL)curSupportType:(unsigned long long)arg1;
- (BOOL)isLowestType;
- (void)setCurType:(unsigned long long)arg1;
- (void)resetDefaultType;
- (void)updateCurProgressType;
- (void)setTimeHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isInteracting;
- (BOOL)isInSkipButtonCooldown;
- (void)cancelTimer;
- (void)becomeInteractive;
- (void)resignInteractive;
- (void)becomeLowest;
- (void)becomeStatic;
- (void)resignStatic;
- (void)onVoiceOverStatusChanged;
- (void)applyVoiceOverProgressLockIfNeeded;
- (void)showProgressAnchor:(double)arg1;
- (void)setViewsOverLapPlayerIsTranslucent:(BOOL)arg1;
- (void)_syncProgressBarLayoutBeforeShowingAnchorTips;
- (void)_showAnchorTipsView;
- (void)clickPlayAnchor;
- (void)hidePlaceHolder:(id)arg1;
- (void)dismissProgressAnchorTips;
- (double)anchorProgress;
- (BOOL)canShowAnchor;
- (void)onClickCloseBtn:(id)arg1;
- (void)onClickRotateButton:(id)arg1;
- (void)onClickVoiceOverButton:(id)arg1;
- (void)onClickEffectiveAreaExpandButton:(id)arg1;
- (void)hideAllSubControlWhileInteractive;
- (void)fireBecomeSmaller;
- (void)fireBecomeSmallerWithTimeInterval:(double)arg1;
- (void)becomeSmaller;
- (void)becomeBiger;
- (double)progressCenterY;
- (void)updateEffectiveAreaExpandButtonIconWithExpanded:(BOOL)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)checkProgressBarStatus;
- (void)updateConfig;
- (unsigned long long)_defaultProgressType;
- (void)updateProgressElementsWithCurrentPlayPosition:(double)arg1 videoDuration:(double)arg2 forbidProgressBarMovAnim:(BOOL)arg3 contentVM:(id)arg4 manual:(BOOL)arg5;
- (void)layoutProgressBar;
- (void)updateControlsStyle;
- (void)updateControlsLayout;
- (void)_layoutTimeLabelAndRelatedUIWithProgressBarPosition;
- (void)updateOtherControlsLayout;
- (BOOL)_hasListenPermission;
- (void)updateControlsHiddenState;
- (BOOL)isShowing;
- (void)updatePhotoProgressBarWithIndex:(unsigned long long)arg1 precent:(double)arg2;
- (void)_handleClickSkipForwardBtn;
- (void)_handleClickSkipBackwardBtn;
- (void)startLoading;
- (void)startLoadingAfterSeekWithReason:(id)arg1;
- (void)_startLoadingWithReason:(id)arg1 ignoreSkipButtonCooldown:(BOOL)arg2;
- (void)stopLoading;
- (void)cancelLoadingStartTimer;
- (void)handleLoadingStartTimer:(id)arg1;
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
- (id)listenVideoButtonIconName;
- (id)listenVideoButton;
- (void)onClickListenVideoButton:(id)arg1;
- (id)effectiveAreaExpandButton;
- (id)longVideoEntry;
- (unsigned long long)progressStyle;
- (CGRect)getMediaArea;
- (id)finderProgressBarGetContentVM;
- (id)seeLaterButton;
- (void)onClickSeeLaterButton:(id)arg1;
- (BOOL)canShowSeeLaterButton;
- (void)updateSeeLaterButtonUI;
- (id)accessibilityElements;
- (id)accessibleLeafElements;
- (void)willMoveToWindow:(id)arg1;
- (void)setPlayerloadingView:(id)arg1;
- (id)portraitDelegate;
- (void)setPortraitDelegate:(id)arg1;
- (unsigned long long)startDragStyle;
- (void)setStartDragStyle:(unsigned long long)arg1;
- (void)setRotateButton:(id)arg1;
- (void)setListenVideoButton:(id)arg1;
- (void)setEffectiveAreaExpandButton:(id)arg1;
- (void)setVoiceOverButton:(id)arg1;
- (BOOL)voiceOverFlattenedByHostCell;
- (void)setVoiceOverFlattenedByHostCell:(BOOL)arg1;
- (id)stateChangeTimer;
- (void)setStateChangeTimer:(id)arg1;
- (void)setImmersiveProgressBar:(id)arg1;
- (void)setPhotoProgressBar:(id)arg1;
- (void)setExitPinchInButton:(id)arg1;
- (CGPoint)pauseButtonCenter;
- (void)setPauseButtonCenter:(CGPoint)arg1;
- (id)progressAnchorTips;
- (void)setProgressAnchorTips:(id)arg1;
- (id)bulletOpenGuideTips;
- (void)setBulletOpenGuideTips:(id)arg1;
- (unsigned long long)lastType;
- (void)setLastType:(unsigned long long)arg1;
- (void)setSeeLaterButton:(id)arg1;
- (id)loadingStartTimer;
- (void)setLoadingStartTimer:(id)arg1;
- (void).cxx_destruct;
@end
