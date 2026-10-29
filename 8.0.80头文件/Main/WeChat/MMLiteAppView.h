@interface MMLiteAppView : UIView
{
    LiteAppStore * _store; // +0x8
    id /* block */ _onBodySizeChangeBlock; // +0x10
    id /* block */ _pageCreatedCallback; // +0x18
    id /* block */ _pageShownCallback; // +0x20
    BOOL _autoHeight; // +0x28
    BOOL _autoWidth; // +0x29
    BOOL _disableScroll; // +0x2a
    long long _pixelBufferOutputPreferredFramesPerSecond; // +0x30
    long long _pixelBufferOutputMode; // +0x38
    BOOL _disableLayoutSubview; // +0x40
    BOOL _isRealAppear; // +0x41
    BOOL _hasObservedFlutterView; // +0x42
    BOOL _attachedInBackground; // +0x43
    MMLiteAppViewController * _vc; // +0x48
    unsigned long long _lastObservedFlutterViewAddr; // +0x50
    MMLiteAppPixelBufferGrabber * _pixelBufferGrabber; // +0x58
}
- (id)init;
- (void)dealloc;
- (void)attachLiteAppView:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 sessionId:(id)arg5 signatureKey:(id)arg6 isTransparent:(BOOL)arg7 startReport:(id)arg8 reporter:(id)arg9;
- (void)attachLiteAppView:(id)arg1;
- (void)onAttachViewController:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (id)getStore;
- (void)setStore:(id)arg1;
- (void)setOnBodySizeChangeBlock:(id /* block */)arg1;
- (void)setPageCreatedCallback:(id /* block */)arg1;
- (void)setPageShownCallback:(id /* block */)arg1;
- (void)setAutoHeight:(BOOL)arg1;
- (void)setAutoWidth:(BOOL)arg1;
- (void)updateByUIWindow:(id)arg1;
- (id)currentFlutterChildVc;
- (void)forceReattachFlutterSurfaceForBackgroundAttach;
- (void)snapshotCurrentFlutterView;
- (void)refreshFlutterSurfaceIfFlutterViewRebuilt;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToWindow;
- (void)attachParentViewController;
- (id)findViewController;
- (void)setContentOffset:(double)arg1;
- (void)disableScroll:(BOOL)arg1;
- (void)layoutSubviews;
- (void)pauseView;
- (void)resumeView;
- (id)liteAppRenderView;
- (void)enablePixelBufferOutputWithHandler:(id /* block */)arg1;
- (void)enablePixelBufferOutputWithMode:(long long)arg1 handler:(id /* block */)arg2;
- (void)enableMetalTextureOutputWithDevice:(id)arg1 handler:(id /* block */)arg2;
- (void)enableMetalTextureOutputWithDevice:(id)arg1 mode:(long long)arg2 handler:(id /* block */)arg3;
- (id)pixelBufferGrabberForRenderView:(id)arg1 mode:(long long)arg2;
- (void)disablePixelBufferOutput;
- (void)setPixelBufferOutputPreferredFramesPerSecond:(long long)arg1;
- (void)injectPointerAtLogicalPoint:(CGPoint)arg1 phase:(long long)arg2 pointerId:(long long)arg3;
- (void)rebindPixelBufferGrabberIfNeeded;
- (id)vc;
- (void)setVc:(id)arg1;
- (BOOL)disableLayoutSubview;
- (void)setDisableLayoutSubview:(BOOL)arg1;
- (BOOL)isRealAppear;
- (void)setIsRealAppear:(BOOL)arg1;
- (unsigned long long)lastObservedFlutterViewAddr;
- (void)setLastObservedFlutterViewAddr:(unsigned long long)arg1;
- (BOOL)hasObservedFlutterView;
- (void)setHasObservedFlutterView:(BOOL)arg1;
- (BOOL)attachedInBackground;
- (void)setAttachedInBackground:(BOOL)arg1;
- (id)pixelBufferGrabber;
- (void)setPixelBufferGrabber:(id)arg1;
- (void).cxx_destruct;
@end
