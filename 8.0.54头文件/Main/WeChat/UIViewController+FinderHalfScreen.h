@interface UIViewController (FinderHalfScreen)
- (void)setFinderHalfScreenState;
- (void)setFinderHalfScreenStateBindVC:(id)arg1;
- (void)hookVCForFinderVideoPlayStatus;
- (void)removeFinderHalfScreenState;
- (void)unHookVCForFinderVideoPlayStatus;
- (void)tagHasAlreadyDisplay;
- (id)findPreViewController;
- (id)_getBindContainerView;
- (id)_getBindTransformView;
- (id)_getBindDismissTransition;
- (void)bindListenProgressObjectModel:(id)arg1;
- (void)_observeViewFrameChanged:(id)arg1 changeBlock:(id /* block */)arg2;
- (void)setPresentedHalfScreenStatusBarHidden:(BOOL)arg1;
- (BOOL)presentedHalfScreenStatusBarHidden;
- (void)setJumpInfoPresentedFlag:(BOOL)arg1 type:(int)arg2;
- (BOOL)isPresentedByJumpInfo;
@end

