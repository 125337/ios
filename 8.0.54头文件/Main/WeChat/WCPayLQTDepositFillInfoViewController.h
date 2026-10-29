@interface WCPayLQTDepositFillInfoViewController : WCPayBaseViewController <WCBaseInfoItemDelegate, WCPayRecommendItemViewDelegate, WCPayDecimalKeyboardViewDelegate, ILinkEventExt, WCPayLQTSelectCardItemDelegate, UITextFieldDelegate, WCPayLQTSelectDateItemDelegate, WCPayLQTDepositProtocolPageSheetDelegate>
{
    id <WCPayLQTDepositFillInfoViewControllerDelegate> m_delegate; // +0x90
    WCBaseKeyboardToolBar * m_keyboardBar; // +0x98
    long long controllerType; // +0xa0
    BOOL _isKeyboardShow; // +0xa8
    BOOL _isKeyboardAnimating; // +0xa9
    BOOL _hasClickDateItem; // +0xaa
    BOOL _hasClickCardItem; // +0xab
    UIView * _headerView; // +0xb0
    UILabel * _productWordLabel; // +0xb8
    UILabel * _marketingWordLabel; // +0xc0
    UILabel * _depositAmountLabel; // +0xc8
    UILabel * _currencyLabel; // +0xd0
    UITextField * _amountTextField; // +0xd8
    UIView * _textFieldLineView; // +0xe0
    UILabel * _tipsLabel; // +0xe8
    UIView * _headerBottomLine; // +0xf0
    WCPayLQTSelectCardItem * _selectCardItem; // +0xf8
    WCPayLQTSelectDateItem * _selectDateItem; // +0x100
    double _m_minItemLeft; // +0x108
    UIButton * _tipsInfoBtn; // +0x110
    double _currentBtnY; // +0x118
    double _currentProtocolY; // +0x120
    WCPayDecimalKeyboardView * _keyboard; // +0x128
    WCPayRecommendItemView * _recommendItemView; // +0x130
    UIButton * _confirmButton; // +0x138
    WCPayLQTDepositProtocolPageSheet * _protocolPageSheet; // +0x140
    CGPoint _currentOffset; // +0x148
}
- (void)setControllerType:(long long)arg1;
- (id)navigationBarBackgroundColor;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)onBack;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)initNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)refreshViewWithData:(id)arg1;
- (void)initView;
- (void)updateTableView;
- (void)updateHeaderView;
- (void)updateTipsLabel;
- (void)infoBtnClick:(id)arg1;
- (void)updateConfirmButtonStatus;
- (BOOL)shouldEnableButton;
- (void)updateRecommendItemView;
- (void)updateKeyboard;
- (id)getSelectCardItemBankList;
- (void)reloadTableView;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (void)updateBottomView;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onAgreementClick:(id)arg1;
- (void)onConfirm:(id)arg1;
- (void)onConfirmInternal;
- (void)textFieldDidChange;
- (void)onWCPayLQTSelectCardItemAddNewCard;
- (void)onWCPayLQTSelectDateItemShow;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (id)keyboardHostViewController;
- (void)activeTextField;
- (void)onWCPayRecommendItemViewSelect:(unsigned long long)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)onProtocolPageSheetClickProtocolUrl:(id)arg1;
- (void)onProtocolPageSheetClickCancel;
- (void)onProtocolPageSheetClickConfirm;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)productWordLabel;
- (void)setProductWordLabel:(id)arg1;
- (id)marketingWordLabel;
- (void)setMarketingWordLabel:(id)arg1;
- (id)depositAmountLabel;
- (void)setDepositAmountLabel:(id)arg1;
- (id)currencyLabel;
- (void)setCurrencyLabel:(id)arg1;
- (id)amountTextField;
- (void)setAmountTextField:(id)arg1;
- (id)textFieldLineView;
- (void)setTextFieldLineView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)headerBottomLine;
- (void)setHeaderBottomLine:(id)arg1;
- (id)selectCardItem;
- (void)setSelectCardItem:(id)arg1;
- (id)selectDateItem;
- (void)setSelectDateItem:(id)arg1;
- (double)m_minItemLeft;
- (void)setM_minItemLeft:(double)arg1;
- (BOOL)isKeyboardShow;
- (void)setIsKeyboardShow:(BOOL)arg1;
- (BOOL)isKeyboardAnimating;
- (void)setIsKeyboardAnimating:(BOOL)arg1;
- (id)tipsInfoBtn;
- (void)setTipsInfoBtn:(id)arg1;
- (CGPoint)currentOffset;
- (void)setCurrentOffset:(CGPoint)arg1;
- (double)currentBtnY;
- (void)setCurrentBtnY:(double)arg1;
- (double)currentProtocolY;
- (void)setCurrentProtocolY:(double)arg1;
- (id)keyboard;
- (void)setKeyboard:(id)arg1;
- (id)recommendItemView;
- (void)setRecommendItemView:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (BOOL)hasClickDateItem;
- (void)setHasClickDateItem:(BOOL)arg1;
- (BOOL)hasClickCardItem;
- (void)setHasClickCardItem:(BOOL)arg1;
- (id)protocolPageSheet;
- (void)setProtocolPageSheet:(id)arg1;
- (void).cxx_destruct;
@end

