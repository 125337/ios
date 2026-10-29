@interface VoIPMPScreenProjectMiniCoordinator : NSObject <MinimizeNewTransitionControllerDelegate>
{
    BOOL _isDismissingForMiniWindow; // +0x8
    BOOL _shouldRestoreScreenProjectPageAfterMiniWindow; // +0x9
    BOOL _shouldRestorePresentationAfterMiniWindow; // +0xa
    id /* block */ _onGestureTriggeredMiniHandler; // +0x10
    UIWindow * _hiddenUnderlyingCallWindow; // +0x18
    MinimizeNewTransitionController * _miniTransitionController; // +0x20
    VoIPMPScreenProjectFlutterViewController * _attachedViewController; // +0x28
    CGRect _screenProjectInitialViewFrame; // +0x30
}
- (void)attachToFlutterViewController:(id)arg1;
- (void)hideUnderlyingCallWindowForIlinkMode:(BOOL)arg1;
- (void)switchCallWindowToHiddenForMiniMode;
- (void)switchCallWindowToAlphaForFullscreenMode;
- (void)revealUnderlyingCallWindowForPopAnimationWithIlinkMode:(BOOL)arg1;
- (void)restoreUnderlyingCallWindowForIlinkMode:(BOOL)arg1;
- (void)dismissScreenProjectPageForMiniWindow:(id)arg1 plugin:(id)arg2 isRemoteViewingMode:(BOOL)arg3 remoteViewingMemberId:(int)arg4 completion:(id /* block */)arg5 extendHandler:(id /* block */)arg6 closeHandler:(id /* block */)arg7;
- (void)restoreScreenProjectPageFromMiniWindow:(id)arg1 isIlinkMode:(BOOL)arg2 fallback:(id /* block */)arg3;
- (CGRect)computeMiniWindowFrameInWindow:(id)arg1;
- (void)onMinimizeTransitionBeginWithoutContext;
- (void)onMinimizeTransitionChanged:(double)arg1 translation:(CGPoint)arg2;
- (void)onMinimizeTransitionEnd:(unsigned int)arg1 isComplete:(BOOL)arg2;
- (void)invalidate;
- (void)clearHiddenCallWindowReference;
- (BOOL)isDismissingForMiniWindow;
- (void)setIsDismissingForMiniWindow:(BOOL)arg1;
- (BOOL)shouldRestoreScreenProjectPageAfterMiniWindow;
- (void)setShouldRestoreScreenProjectPageAfterMiniWindow:(BOOL)arg1;
- (BOOL)shouldRestorePresentationAfterMiniWindow;
- (void)setShouldRestorePresentationAfterMiniWindow:(BOOL)arg1;
- (id /* block */)onGestureTriggeredMiniHandler;
- (void)setOnGestureTriggeredMiniHandler:(id /* block */)arg1;
- (id)hiddenUnderlyingCallWindow;
- (void)setHiddenUnderlyingCallWindow:(id)arg1;
- (id)miniTransitionController;
- (void)setMiniTransitionController:(id)arg1;
- (CGRect)screenProjectInitialViewFrame;
- (void)setScreenProjectInitialViewFrame:(CGRect)arg1;
- (id)attachedViewController;
- (void)setAttachedViewController:(id)arg1;
- (void).cxx_destruct;
@end
