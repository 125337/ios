@interface WCPayRealnameInfoViewController : WCPayBaseViewController <WCPayRealnameInfoViewV2Delegate, WCPayAreaItemDelegate, WCPayGetProfessionItemDelegate, ILinkEventExt, WCBaseInfoItemDelegate>
{
    UIButton * m_footerButton; // +0x90
    WCBaseTextFieldItem * m_textFieldNameItem; // +0x98
    WCPayTenpaySecureCtrlItem * m_textFieldHolderIDItem; // +0xa0
    WCBaseKeyboardToolBar * m_keyboardBar; // +0xa8
    NSIndexPath * m_selectItemIndex; // +0xb0
    id <WCPayRealnameInfoViewControllerDelegate> m_delegate; // +0xb8
    WCBizInfoGroup * group; // +0xc0
    UIButton * _m_readAgreementButton; // +0xc8
    RichTextView * _m_readAgreementTextView; // +0xd0
    WCPayAreaItem * _areaItem; // +0xd8
    WCPayGetProfessionItem * _professionItem; // +0xe0
    double _m_minItemLeft; // +0xe8
    WCPayRealnameInfoViewV2 * _realNameViewV2; // +0xf0
}
- (id)init;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewDidLoad;
- (void)adjustBottomTips;
- (id)navigationBarBackgroundColor;
- (void)viewWillLayoutSubviews;
- (void)initNavigationBar;
- (void)initFooterView;
- (void)onReadAgreementClick:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)reloadTableView;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (BOOL)shouldInteractivePop;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (void)FillRealnameCancel:(id)arg1;
- (void)onNext;
- (BOOL)getData:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemCancelEdit:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (BOOL)checkIsEmpty:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)onWCPayAreaItemDidChoseRegion:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)areaItem;
- (id)professionItem;
- (void)onWCPayRealnameInfoViewV2ClickConfirm:(id)arg1;
- (id)onWCPayRealnameInfoViewV2CurrentViewController;
- (id)onWCPayRealnameInfoViewV2TableViewInfo;
- (id)m_readAgreementButton;
- (void)setM_readAgreementButton:(id)arg1;
- (id)m_readAgreementTextView;
- (void)setM_readAgreementTextView:(id)arg1;
- (void)setAreaItem:(id)arg1;
- (void)setProfessionItem:(id)arg1;
- (double)m_minItemLeft;
- (void)setM_minItemLeft:(double)arg1;
- (id)realNameViewV2;
- (void)setRealNameViewV2:(id)arg1;
- (void).cxx_destruct;
@end

