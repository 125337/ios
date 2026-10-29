@interface WCAccountAffiliatedAcctBeginViewController : WCAccountBaseViewController
{
    id <WCAccountAffiliatedAcctDelegate> _delegate; // +0x78
    MMUIButton * _helpButton; // +0x80
}
- (void)viewDidLoad;
- (BOOL)useTableView;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (BOOL)useGrayBackgroundColor;
- (id)getNewHeaderView:(id)arg1;
- (void)onTapRegUseNewPhone;
- (void)onTapNextButton;
- (void)onTapCloseBarButton;
- (void)onTapHelpButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)helpButton;
- (void)setHelpButton:(id)arg1;
- (void).cxx_destruct;
@end

