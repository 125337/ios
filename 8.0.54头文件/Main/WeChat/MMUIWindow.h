@interface MMUIWindow : MMUIBaseWindow <IVOIPWindowExt>
{
    BOOL _canMixWithOther; // +0x8
    BOOL _shouldHandleStatusBarAppearance; // +0x9
    int _mmWindowLevel; // +0xc
    double m_lastWindowLevel; // +0x10
    MMWindowMgrObject * _rootWindowMgrObj; // +0x18
}
- (void)setPassthroughDelegate:(id)arg1;
- (id)passthroughDelegate;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setDisableQuickReplyPush:(BOOL)arg1;
- (BOOL)disableQuickReplyPush;
- (BOOL)shouldShowQuickReplyPush:(id)arg1;
- (void)onVoipWindowDidAppear;
- (void)onVoipWindowDisappear;
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithWindowScene:(id)arg1;
- (void)commonInit;
- (void)dealloc;
- (void)becomeKeyWindow;
- (void)showWindowFrom:(int)arg1 withTopOffset:(double)arg2;
- (void)showWindowFrom:(int)arg1 withTopOffset:(double)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (void)hideWindowTo:(int)arg1 withTopOffset:(double)arg2;
- (void)hideWindowTo:(int)arg1 withTopOffset:(double)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (void)setShowFrameWithTopOffset:(double)arg1;
- (void)setHideFrame:(int)arg1 withTopOffset:(double)arg2;
- (void)SetWindowLevel:(int)arg1;
- (void)setMmWindowLevel:(int)arg1;
- (void)setWindowLevel:(double)arg1;
- (void)animateFadeoutWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)onWindowSceneSizeChanged;
- (double)m_lastWindowLevel;
- (void)setM_lastWindowLevel:(double)arg1;
- (int)mmWindowLevel;
- (BOOL)canMixWithOther;
- (void)setCanMixWithOther:(BOOL)arg1;
- (BOOL)shouldHandleStatusBarAppearance;
- (void)setShouldHandleStatusBarAppearance:(BOOL)arg1;
- (id)rootWindowMgrObj;
- (void)setRootWindowMgrObj:(id)arg1;
- (void).cxx_destruct;
@end

