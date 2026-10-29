@interface CBTContactStarAskToastView : NSObject
{
    CBTContactStarAskToastWindow * _toastWindow; // +0x8
    UIView * _toastContainer; // +0x10
    UIView * _actionPill; // +0x18
    id /* block */ _tapAction; // +0x20
    id /* block */ _autoHideBlock; // +0x28
}
+ (void)showToastWithText:(id)arg1 action:(id /* block */)arg2;
+ (void)hideToast;
+ (id)sharedInstance;
- (void)showWithText:(id)arg1 action:(id /* block */)arg2;
- (void)hideWithAnimated:(BOOL)arg1;
- (id)buildToastContainerWithText:(id)arg1 width:(double)arg2;
- (id)toastFont;
- (id)labelWithText:(id)arg1 font:(id)arg2 numberOfLines:(long long)arg3 lineBreakMode:(long long)arg4;
- (id)buildPillWithText:(id)arg1 maxWidth:(double)arg2;
- (id)centeredEyeIconFromImage:(id)arg1 dstSize:(double)arg2;
- (void)containerTapped;
- (double)safeAreaBottomInset;
- (id)activeWindowScene;
- (id)toastWindow;
- (void)setToastWindow:(id)arg1;
- (id)toastContainer;
- (void)setToastContainer:(id)arg1;
- (id)actionPill;
- (void)setActionPill:(id)arg1;
- (id /* block */)tapAction;
- (void)setTapAction:(id /* block */)arg1;
- (id /* block */)autoHideBlock;
- (void)setAutoHideBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
