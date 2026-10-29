@interface _TtC11SwiftyMidas24DefaultWebViewController : UIViewController <WKNavigationDelegate>
{
     config; // +0x8
     registeredActions; // +0xb8
     $__lazy_storage_$_titleBar; // +0xc0
     $__lazy_storage_$_webView; // +0xc8
     $__lazy_storage_$_containerView; // +0xd0
     containerViewYAnchorConstraints; // +0xd8
     containerViewYAnchorConstraintsFromH5; // +0xe8
     showWebViewCompletion; // +0xf8
}
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)presentErrorAlert;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)keyboardWillShowWithNotification:(id)arg1;
- (void)keyboardWillHideWithNotification:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void).cxx_destruct;
@end
