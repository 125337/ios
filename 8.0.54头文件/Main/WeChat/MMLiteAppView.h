@interface MMLiteAppView : UIView
{
    LiteAppStore * _store; // +0x8
    id /* block */ _onBodySizeChangeBlock; // +0x10
    BOOL _autoHeight; // +0x18
    BOOL _autoWidth; // +0x19
    BOOL _disableScroll; // +0x1a
    BOOL _disableLayoutSubview; // +0x1b
    BOOL _isRealAppear; // +0x1c
    MMLiteAppViewController * _vc; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)attachLiteAppView:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 signatureKey:(id)arg5 isTransparent:(BOOL)arg6 startReport:(id)arg7 reporter:(id)arg8;
- (void)attachLiteAppView:(id)arg1;
- (void)onAttachViewController:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (id)getStore;
- (void)setStore:(id)arg1;
- (void)setOnBodySizeChangeBlock:(id /* block */)arg1;
- (void)setAutoHeight:(BOOL)arg1;
- (void)setAutoWidth:(BOOL)arg1;
- (void)updateByUIWindow:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToWindow;
- (void)attachParentViewController;
- (id)findViewController;
- (void)setContentOffset:(double)arg1;
- (void)disableScroll:(BOOL)arg1;
- (void)layoutSubviews;
- (void)pauseView;
- (void)resumeView;
- (id)vc;
- (void)setVc:(id)arg1;
- (BOOL)disableLayoutSubview;
- (void)setDisableLayoutSubview:(BOOL)arg1;
- (BOOL)isRealAppear;
- (void)setIsRealAppear:(BOOL)arg1;
- (void).cxx_destruct;
@end

