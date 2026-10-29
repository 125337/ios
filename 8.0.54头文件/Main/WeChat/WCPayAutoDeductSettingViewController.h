@interface WCPayAutoDeductSettingViewController : WCPayBaseViewController <ILinkEventExt>
{
    id <WCPayAutoDeductSettingViewControllerDelegate> m_delegate; // +0x90
    UISwitch * _switchButton; // +0x98
    RichTextView * _richTextView; // +0xa0
    WCPayOrderDetail * _order; // +0xa8
    WCPayEntrustPayInfo * _entrustPayInfo; // +0xb0
}
- (id)init;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)initNavigationBar;
- (void)reloadTableView;
- (void)makeHeaderContent;
- (void)makeInfoSectionContentView:(id)arg1;
- (id)footerView;
- (void)setupBottomTextView;
- (id)getShowInfoView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setupData;
- (void)OnCancel;
- (void)changeSwitch:(id)arg1;
- (void)OnFooterButtonClick:(id)arg1;
- (BOOL)isCNY;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (id)switchButton;
- (void)setSwitchButton:(id)arg1;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (id)order;
- (void)setOrder:(id)arg1;
- (id)entrustPayInfo;
- (void)setEntrustPayInfo:(id)arg1;
- (void).cxx_destruct;
@end

