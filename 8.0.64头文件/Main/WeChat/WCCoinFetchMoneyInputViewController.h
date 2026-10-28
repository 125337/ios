@interface WCCoinFetchMoneyInputViewController : MMUIViewController <UITextFieldDelegate, ILinkEventExt, WCActionSheetDelegate, WCPayDecimalKeyboardViewDelegate>
{
    id <WCCoinFetchMoneyInputViewControllerDelegate> _delegate; // +0x70
    long long _incomeBalance; // +0x78
    WecoinTaxCutEntranceInfo * _taxCutInfo; // +0x80
    id _userInfo; // +0x88
    LiveRewardIncomeBizInfo * _incomeBizInfo; // +0x90
    MMTableView * _tableView; // +0x98
    UITextField * _moneyTextField; // +0xa0
    MMUILabel * _invalidTipsLabel; // +0xa8
    RichTextView * _richTextView; // +0xb0
    MMUIButton * _cardInfoBtn; // +0xb8
    UIView * _m_buttonContentView; // +0xc0
    UIView * _m_inputContentView; // +0xc8
    UILabel * _m_topTipsLabel; // +0xd0
    UIView * _m_topbarView; // +0xd8
    UIButton * _m_maskTopbarButton; // +0xe0
    WCPayWebImageView * _m_cardLogo; // +0xe8
    UIImageView * _m_arrowImageView; // +0xf0
    UILabel * _m_textFieldTitle; // +0xf8
    UILabel * _m_unitLabel; // +0x100
    UIView * _m_moneyLineView; // +0x108
    double _m_keyboardHeight; // +0x110
    WCPayDecimalKeyboardView * _keyboardView; // +0x118
    KindaUIView * _taxCutView; // +0x120
    TrueKindaOnePxLineView * _taxCutTopLine; // +0x128
    TrueKindaOnePxLineView * _taxCutBotttomLine; // +0x130
    UILabel * _taxCutTitle; // +0x138
    UILabel * _taxCutDesc; // +0x140
    UIImageView * _taxCutArrow; // +0x148
}
- (void)dealloc;
- (id)navigationBarBackgroundColor;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidPop:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)updateView;
- (void)adjustButtonY;
- (void)viewDidLoad;
- (void)setupContentView;
- (double)inputContentViewTopbarheight;
- (void)makeCardInfoView:(id)arg1;
- (void)makeInputContentView:(id)arg1;
- (void)layoutTaxCutView;
- (void)initInvalidTipsLabel;
- (void)showInvalidTipsLabelWithContent:(id)arg1;
- (void)hideInvalidTipsLabel;
- (void)textFieldDidChang:(id)arg1;
- (void)checkBtnStatus;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)checkIfFetchAmountInvalid:(unsigned int)arg1;
- (void)cardInfoBtnClick;
- (void)activeTextField;
- (unsigned long long)getCurrentFetchTotalAmount;
- (void)clickTaxCutEntrance;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)updateTableViewOffset;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (void)onWCPayLQTTipsNewModalTapCancel;
- (id)keyboardHostViewController;
- (unsigned long long)inputAmount;
- (void)setTaxCutInfo:(id)arg1;
- (id)taxCutView;
- (id)taxCutTopLine;
- (id)taxCutBotttomLine;
- (id)taxCutTitle;
- (id)taxCutDesc;
- (id)taxCutArrow;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)incomeBalance;
- (void)setIncomeBalance:(long long)arg1;
- (id)taxCutInfo;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)incomeBizInfo;
- (void)setIncomeBizInfo:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)moneyTextField;
- (void)setMoneyTextField:(id)arg1;
- (id)invalidTipsLabel;
- (void)setInvalidTipsLabel:(id)arg1;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (id)cardInfoBtn;
- (void)setCardInfoBtn:(id)arg1;
- (id)m_buttonContentView;
- (void)setM_buttonContentView:(id)arg1;
- (id)m_inputContentView;
- (void)setM_inputContentView:(id)arg1;
- (id)m_topTipsLabel;
- (void)setM_topTipsLabel:(id)arg1;
- (id)m_topbarView;
- (void)setM_topbarView:(id)arg1;
- (id)m_maskTopbarButton;
- (void)setM_maskTopbarButton:(id)arg1;
- (id)m_cardLogo;
- (void)setM_cardLogo:(id)arg1;
- (id)m_arrowImageView;
- (void)setM_arrowImageView:(id)arg1;
- (id)m_textFieldTitle;
- (void)setM_textFieldTitle:(id)arg1;
- (id)m_unitLabel;
- (void)setM_unitLabel:(id)arg1;
- (id)m_moneyLineView;
- (void)setM_moneyLineView:(id)arg1;
- (double)m_keyboardHeight;
- (void)setM_keyboardHeight:(double)arg1;
- (id)keyboardView;
- (void)setKeyboardView:(id)arg1;
- (void)setTaxCutView:(id)arg1;
- (void)setTaxCutTopLine:(id)arg1;
- (void)setTaxCutBotttomLine:(id)arg1;
- (void)setTaxCutTitle:(id)arg1;
- (void)setTaxCutDesc:(id)arg1;
- (void)setTaxCutArrow:(id)arg1;
- (void).cxx_destruct;
@end
