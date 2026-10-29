@interface FBSDKWebDialog : NSObject <FBSDKWebDialogViewDelegate>
{
    UIView * _backgroundView; // +0x8
    FBSDKWebDialogView * _dialogView; // +0x10
    BOOL _deferVisibility; // +0x18
    id <FBSDKWebDialogDelegate> _delegate; // +0x20
    NSString * _name; // +0x28
    NSDictionary * _parameters; // +0x30
}
+ (id)showWithName:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;
- (void)dealloc;
- (BOOL)show;
- (void)webDialogView:(id)arg1 didCompleteWithResults:(id)arg2;
- (void)webDialogView:(id)arg1 didFailWithError:(id)arg2;
- (void)webDialogViewDidCancel:(id)arg1;
- (void)webDialogViewDidFinishLoad:(id)arg1;
- (void)_addObservers;
- (void)_deviceOrientationDidChangeNotification:(id)arg1;
- (void)_removeObservers;
- (void)_cancel;
- (void)_completeWithResults:(id)arg1;
- (void)_dismissAnimated:(BOOL)arg1;
- (void)_failWithError:(id)arg1;
- (id)_generateURL:(id *)arg1;
- (BOOL)_showWebView;
- (CGAffineTransform)_transformForOrientation;
- (CGRect)_applicationFrameForOrientation;
- (void)_updateViewsWithScale:(double)arg1 alpha:(double)arg2 animationDuration:(double)arg3 completion:(id /* block */)arg4;
- (BOOL)shouldDeferVisibility;
- (void)setDeferVisibility:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)parameters;
- (void)setParameters:(id)arg1;
- (void).cxx_destruct;
@end

