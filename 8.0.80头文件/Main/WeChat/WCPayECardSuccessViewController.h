@interface WCPayECardSuccessViewController : WCPayBaseViewController
{
    id <WCPayECardSuccessViewControllerDelegate> _delegate; // +0x98
    NSString * _vcTitle; // +0xa0
    NSString * _successTip; // +0xa8
    UIImageView * _icon; // +0xb0
    UILabel * _detail; // +0xb8
    UIButton * _doneButton; // +0xc0
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)leftBarButtonItemClick;
- (void)reloadTableView;
- (id)navigationBarBackgroundColor;
- (id)headerView;
- (void)done;
- (id)icon;
- (id)detail;
- (id)doneButton;
- (void)setVcTitle:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)vcTitle;
- (id)successTip;
- (void)setSuccessTip:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setDetail:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void).cxx_destruct;
@end
