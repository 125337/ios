@interface NewSettingModifyEmailViewController : MMUIViewController <SettingModifyEmailLogicDelegate, IUpdateProfileMgrExt>
{
    int _displayType; // +0x70
    id <NewSettingModifyEmailViewControllerDelegate> _delegate; // +0x78
    NSString * _lastEmail; // +0x80
    UIViewController * _currentVC; // +0x88
}
+ (void)showEmailVC:(id)arg1 fromVC:(id)arg2;
+ (BOOL)isVerify;
+ (int)getDisplayType;
- (id)initWithDisplayType:(int)arg1;
- (void)viewDidLoad;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)onCloseButtonClicked;
- (id)getDisplayVC;
- (id)getDisplayVC:(int)arg1;
- (id)getEditEmailViewController;
- (id)getVerifyEmailViewController;
- (id)getBindEmailViewController;
- (void)changeToVerifyEmail;
- (void)changeToEditEmail;
- (void)replaceController:(id)arg1 newController:(id)arg2;
- (id)getViewController;
- (void)onProfileChange;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)lastEmail;
- (void)setLastEmail:(id)arg1;
- (id)currentVC;
- (void)setCurrentVC:(id)arg1;
- (int)displayType;
- (void)setDisplayType:(int)arg1;
- (void).cxx_destruct;
@end
