@interface MMWindowViewController : MMUIViewController
{
    BOOL _isHidden; // +0x70
    BOOL _isRequestKeyWindow; // +0x71
    BOOL _isNeedNavCtrl; // +0x72
    int _level; // +0x74
    int _transitionOptions; // +0x78
    long long _statusBarStyle; // +0x80
    BOOL _isChangeStatusBar; // +0x88
    BOOL _forbidUserInteraction; // +0x89
    BOOL _forbidVoiceOverAutoFocus; // +0x8a
    BOOL _delayVoiceOverAutoFocus; // +0x8b
    BOOL _shouldHandleStatusBarAppearance; // +0x8c
    BOOL _createNewSceneInVision; // +0x8d
    BOOL _isInOutsidePresentation; // +0x8e
    UIWindowScene * _windowScene; // +0x90
}
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateWindowSceneUpTo:(id)arg1;
- (void)setWindowLevel:(int)arg1;
- (void)hideNavBar;
- (void)setStatusBarStyle:(long long)arg1;
- (void)show;
- (void)showWithAnimated:(int)arg1;
- (void)showWithAnimated:(int)arg1 inWindow:(id)arg2;
- (void)showWithAnimated:(int)arg1 inWindow:(id)arg2 showEndEditing:(BOOL)arg3;
- (id)presentContentView;
- (long long)preferredStatusBarStyle;
- (BOOL)isClassShowing;
- (BOOL)isObjShowing;
- (void)showWithAnimated:(int)arg1 willCloseAfter:(double)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)DismissMyselfAnimated:(BOOL)arg1;
- (void)hide;
- (void)hideWithAnimated:(int)arg1;
- (BOOL)supportAdjustOrientationMask;
- (void)notifySupportedOrientationMaskShouldAdjust;
- (void)dealloc;
- (BOOL)forbidUserInteraction;
- (void)setForbidUserInteraction:(BOOL)arg1;
- (BOOL)forbidVoiceOverAutoFocus;
- (void)setForbidVoiceOverAutoFocus:(BOOL)arg1;
- (BOOL)delayVoiceOverAutoFocus;
- (void)setDelayVoiceOverAutoFocus:(BOOL)arg1;
- (BOOL)shouldHandleStatusBarAppearance;
- (void)setShouldHandleStatusBarAppearance:(BOOL)arg1;
- (id)windowScene;
- (void)setWindowScene:(id)arg1;
- (BOOL)createNewSceneInVision;
- (void)setCreateNewSceneInVision:(BOOL)arg1;
- (BOOL)isInOutsidePresentation;
- (void)setIsInOutsidePresentation:(BOOL)arg1;
- (void).cxx_destruct;
@end
