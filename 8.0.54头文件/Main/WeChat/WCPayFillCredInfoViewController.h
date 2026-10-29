@interface WCPayFillCredInfoViewController : WCPayBaseViewController <WCBaseInfoItemDelegate>
{
    id <WCPayFillCredInfoViewControllerDelegate> _delegate; // +0x90
    double _minItemLeft; // +0x98
    WCBizInfoGroup * _infoGroup; // +0xa0
    WCBaseKeyboardToolBar * _keyboardBar; // +0xa8
    WCBaseTextFieldItem * _textFieldNameItem; // +0xb0
    WCPayCredTypeItem * _pickerCredTypeItem; // +0xb8
    WCPayTenpaySecureCtrlItem * _textFieldHolderIDItem; // +0xc0
    UIButton * _footerBtn; // +0xc8
    UIButton * _faqBtn; // +0xd0
    double _footerBtnOldY; // +0xd8
}
- (id)navigationBarBackgroundColor;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupNavigationBar;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)leftBarButtonItemClick;
- (void)setupContentView;
- (void)setupInfoTemplate;
- (void)setupTableView;
- (id)setupTableHeaderView;
- (id)setupTableFooterView;
- (void)checkFooterBtnStatus;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)clickInfoCell:(id)arg1;
- (void)footerBtnClick;
- (void)faqBtnClick;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)onKeyboardFrameManulChange:(id)arg1;
- (id)delegate;
- (double)minItemLeft;
- (void)setMinItemLeft:(double)arg1;
- (id)infoGroup;
- (void)setInfoGroup:(id)arg1;
- (id)keyboardBar;
- (void)setKeyboardBar:(id)arg1;
- (id)textFieldNameItem;
- (void)setTextFieldNameItem:(id)arg1;
- (id)pickerCredTypeItem;
- (void)setPickerCredTypeItem:(id)arg1;
- (id)textFieldHolderIDItem;
- (void)setTextFieldHolderIDItem:(id)arg1;
- (id)footerBtn;
- (void)setFooterBtn:(id)arg1;
- (id)faqBtn;
- (void)setFaqBtn:(id)arg1;
- (double)footerBtnOldY;
- (void)setFooterBtnOldY:(double)arg1;
- (void).cxx_destruct;
@end

