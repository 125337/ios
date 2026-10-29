@interface _TtC11MidasPayKit24DefaultWebViewController : UIViewController <WKNavigationDelegate>
{
     window; // +0x8
     config; // +0x10
     registeredActions; // +0xc0
     $__lazy_storage_$_titleBar; // +0xc8
     $__lazy_storage_$_webView; // +0xd0
     $__lazy_storage_$_containerView; // +0xd8
     containerViewYAnchorConstraints; // +0xe0
     containerViewYAnchorConstraintsFromH5; // +0xf0
     showWebViewCompletion; // +0x100
}
- (void)presentErrorAlert;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)keyboardWillShowWithNotification:(id)arg1;
- (void)keyboardWillHideWithNotification:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void).cxx_destruct;
@end
