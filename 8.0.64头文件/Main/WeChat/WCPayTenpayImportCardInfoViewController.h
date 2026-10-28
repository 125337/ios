@interface WCPayTenpayImportCardInfoViewController : WCPayBaseViewController <ILinkEventExt, WCActionSheetDelegate>
{
    BOOL m_bReadAgreement; // +0x98
    BOOL m_bSubscribeApp; // +0x99
    UIButton * m_footerButton; // +0xa0
    NSMutableArray * m_arrayInfoGroup; // +0xa8
    id <WCPayTenpayImportCardInfoViewControllerDelegate> m_delegate; // +0xb0
}
- (void)initNavigationBar;
- (id)getHeaderView;
- (void)initInfoTemplate;
- (void)viewDidLoad;
- (void)reloadTableView;
- (void)onSubscribeAppBtn:(id)arg1;
- (void)onReadAgreement:(id)arg1;
- (void)initFooterView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onNext;
- (void)setDelegate:(id)arg1;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void).cxx_destruct;
@end
