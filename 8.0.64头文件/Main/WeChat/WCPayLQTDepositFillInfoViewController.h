@interface WCPayLQTDepositFillInfoViewController : WCPayBaseViewController <WCBaseInfoItemDelegate, WCPayRecommendItemViewDelegate, WCPayDecimalKeyboardViewDelegate, ILinkEventExt, WCPayLQTSelectCardItemDelegate, UITextFieldDelegate, WCPayLQTSelectDateItemDelegate, WCPayLQTDepositProtocolPageSheetDelegate>
{
    id <WCPayLQTDepositFillInfoViewControllerDelegate> m_delegate; // +0x98
    WCBaseKeyboardToolBar * m_keyboardBar; // +0xa0
    long long controllerType; // +0xa8
    BOOL _isKeyboardShow; // +0xb0
    BOOL _isKeyboardAnimating; // +0xb1
    BOOL _hasClickDateItem; // +0xb2
    BOOL _hasClickCardItem; // +0xb3
    UIView * _headerView; // +0xb8
    UILabel * _productWordLabel; // +0xc0
    UILabel * _marketingWordLabel; // +0xc8
    UILabel * _depositAmountLabel; // +0xd0
    UILabel * _currencyLabel; // +0xd8
    UITextField * _amountTextField; // +0xe0
    UIView * _textFieldLineView; // +0xe8
    UILabel * _tipsLabel; // +0xf0
    UIView * _headerBottomLine; // +0xf8
    WCPayLQTSelectCardItem * _selectCardItem; // +0x100
    WCPayLQTSelectDateItem * _selectDateItem; // +0x108
    double _m_minItemLeft; // +0x110
    UIButton * _tipsInfoBtn; // +0x118
    double _currentBtnY; // +0x120
    double _currentProtocolY; // +0x128
    WCPayDecimalKeyboardView * _keyboard; // +0x130
    WCPayRecommendItemView * _recommendItemView; // +0x138
    UIButton * _confirmButton; // +0x140
    WCPayLQTDepositProtocolPageSheet * _protocolPageSheet; // +0x148
    CGPoint _currentOffset; // +0x150
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
