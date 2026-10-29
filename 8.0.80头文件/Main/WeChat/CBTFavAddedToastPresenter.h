@interface CBTFavAddedToastPresenter : NSObject
{
    CBTFavAddedToastWindow * _toastWindow; // +0x8
    UIView * _toastContainer; // +0x10
    id /* block */ _tagAction; // +0x18
    id /* block */ _xiaoweiAction; // +0x20
    NSString * _xiaoweiButtonText; // +0x28
    id /* block */ _autoHideBlock; // +0x30
}
+ (void)showToastWithTitle:(id)arg1 upQuery:(id)arg2 xiaoweiButtonText:(id)arg3 tagAction:(id /* block */)arg4 xiaoweiAction:(id /* block */)arg5;
+ (void)hideToast;
+ (id)sharedInstance;
- (void)showWithTitle:(id)arg1 upQuery:(id)arg2 xiaoweiButtonText:(id)arg3 tagAction:(id /* block */)arg4 xiaoweiAction:(id /* block */)arg5;
- (void)hideWithAnimated:(BOOL)arg1;
- (id)buildToastContainerWithTitle:(id)arg1 width:(double)arg2;
- (id)toastFont;
- (id)labelWithText:(id)arg1 font:(id)arg2 numberOfLines:(long long)arg3 lineBreakMode:(long long)arg4;
- (id)buildButtonWithIconName:(id)arg1 text:(id)arg2 maxWidth:(double)arg3;
- (void)tagButtonTapped;
- (void)xiaoweiButtonTapped;
- (void)buttonTouchDown:(id)arg1;
- (void)buttonTouchUp:(id)arg1;
- (double)safeAreaBottomInset;
- (id)activeWindowScene;
- (id)toastWindow;
- (void)setToastWindow:(id)arg1;
- (id)toastContainer;
- (void)setToastContainer:(id)arg1;
- (id /* block */)tagAction;
- (void)setTagAction:(id /* block */)arg1;
- (id /* block */)xiaoweiAction;
- (void)setXiaoweiAction:(id /* block */)arg1;
- (id)xiaoweiButtonText;
- (void)setXiaoweiButtonText:(id)arg1;
- (id /* block */)autoHideBlock;
- (void)setAutoHideBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
