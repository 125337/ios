@interface WCPayVerifyTouchLockViewController : WCPayBaseViewController
{
    BOOL _bHasCheckShowTouchId; // +0x98
    id <WCPayVerifyTouchLockViewControllerDelegate> _delegate; // +0xa0
}
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)setupView;
- (void)setupNavigationBar;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)clickTouchID;
- (void)clickPassword;
- (void)onBackButtonClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)bHasCheckShowTouchId;
- (void)setBHasCheckShowTouchId:(BOOL)arg1;
- (void).cxx_destruct;
@end
