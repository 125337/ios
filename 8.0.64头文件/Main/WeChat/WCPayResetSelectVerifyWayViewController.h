@interface WCPayResetSelectVerifyWayViewController : WCPayBaseViewController
{
    id <WCPayResetSelectVerifyWayViewControllerDelegate> _delegate; // +0x98
}
- (id)navigationBarBackgroundColor;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupNavigationBar;
- (void)leftBarButtonItemClick;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)setupContentView;
- (id)setupTableHeaderView;
- (id)genVerifyWayViewWithTitle:(id)arg1 desc:(id)arg2 iconImage:(id)arg3 action:(SEL)arg4;
- (void)clickVerifyFace;
- (void)clickVerifyCard;
- (id)delegate;
- (void).cxx_destruct;
@end
