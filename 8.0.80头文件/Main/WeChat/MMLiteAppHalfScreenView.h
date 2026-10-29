@interface MMLiteAppHalfScreenView : MMLiteAppView
{
    BOOL _enablePullUp; // +0x8
    BOOL _enablePullDown; // +0x9
    BOOL _enableFullscreenPullDown; // +0xa
    BOOL _withMask; // +0xb
    BOOL _landscape; // +0xc
    BOOL _autoRotate; // +0xd
    BOOL _fullscreenEnter; // +0xe
    BOOL _modal; // +0xf
    BOOL _forbidEdgePanClose; // +0x10
    BOOL _isRealAppear; // +0x11
    MMLiteAppHalfScreenViewController * _halfScreenVC; // +0x18
    double _heightPercent; // +0x20
}
- (id)init;
- (void)attachLiteAppView:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 sessionId:(id)arg5 signatureKey:(id)arg6 isTransparent:(BOOL)arg7 startReport:(id)arg8 reporter:(id)arg9;
- (void)attachLiteAppView:(id)arg1;
- (void)dealloc;
- (void)innerAttachLiteAppView:(id)arg1;
- (void)onAttachViewController:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)updateByUIWindow:(id)arg1;
- (void)removeFromSuperview;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToWindow;
- (void)attachParentViewController;
- (id)findViewController;
- (void)layoutSubviews;
- (void)scrollToTop;
- (void)scrollToBottom;
- (void)scrollToResume;
- (void)setTitleBackgroundColor:(unsigned long long)arg1 darkMode:(BOOL)arg2 pageId:(unsigned long long)arg3;
- (id)halfScreenVC;
- (void)setHalfScreenVC:(id)arg1;
- (double)heightPercent;
- (void)setHeightPercent:(double)arg1;
- (BOOL)enablePullUp;
- (void)setEnablePullUp:(BOOL)arg1;
- (BOOL)enablePullDown;
- (void)setEnablePullDown:(BOOL)arg1;
- (BOOL)enableFullscreenPullDown;
- (void)setEnableFullscreenPullDown:(BOOL)arg1;
- (BOOL)withMask;
- (void)setWithMask:(BOOL)arg1;
- (BOOL)landscape;
- (void)setLandscape:(BOOL)arg1;
- (BOOL)autoRotate;
- (void)setAutoRotate:(BOOL)arg1;
- (BOOL)fullscreenEnter;
- (void)setFullscreenEnter:(BOOL)arg1;
- (BOOL)modal;
- (void)setModal:(BOOL)arg1;
- (BOOL)forbidEdgePanClose;
- (void)setForbidEdgePanClose:(BOOL)arg1;
- (BOOL)isRealAppear;
- (void)setIsRealAppear:(BOOL)arg1;
- (void).cxx_destruct;
@end
