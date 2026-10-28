@interface WCPayTransferPhoneMainPage : WCPayBaseViewController <WCPayTransferDelayOptionViewDelegate, ILinkEventExt, WCPayDecimalKeyboardViewDelegate>
{
    BOOL _bShowAlert; // +0x98
    unsigned int _currentSelectedDelayOption; // +0x9c
    id <WCPayTransferPhoneMainPageDelegate> _m_delegate; // +0xa0
    UIView * _containerView; // +0xa8
    UIView * _headerView; // +0xb0
    UIView * _rcvrView; // +0xb8
    UIView * _rcvrInfoView; // +0xc0
    UILabel * _nameLabel; // +0xc8
    UIView * _descContainer; // +0xd0
    UILabel * _descLabel; // +0xd8
    WCPayWebImageView * _headImageView; // +0xe0
    UIView * _checkNameLineView; // +0xe8
    MMUIButton * _checkNameButton; // +0xf0
    UIView * _panelContainer; // +0xf8
    UILabel * _amountLabel; // +0x100
    UIView * _inputContainer; // +0x108
    UILabel * _unitLabel; // +0x110
    WCPayTextField * _textField; // +0x118
    WCPayDecimalKeyboardView * _keyboard; // +0x120
    UIView * _amountLineView; // +0x128
    RichTextView * _commentView; // +0x130
    UIView * _arriveFirstLineView; // +0x138
    UIView * _arriveTimeContainer; // +0x140
    UILabel * _arriveTimeTitleLabel; // +0x148
    UILabel * _arriveTimeDescLabel; // +0x150
    UIImageView * _arriveTimeArrowView; // +0x158
    UIView * _arriveSecondLineView; // +0x160
    TransferPhoneGetRcvrResp * _getRvcrResp; // +0x168
    WCPayCss * _css; // +0x170
    NSString * _comment; // +0x178
    WCUIAlertView * _commentAlertView; // +0x180
    MMTipsViewController * _checkNameController; // +0x188
    WCPayNavigationView * _navigationView; // +0x190
    WCPayTransferDelayOptionView * _delayOption; // +0x198
    UIView * _tailView; // +0x1a0
}
- (id)init;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidPop:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (BOOL)shouldInteractivePop;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)updateView;
- (void)updateHeaderView;
- (void)updateRcvrView;
- (void)updateRcvrInfoView;
- (void)updateNameLabel;
- (void)updateDescContainer;
- (void)updateDescLabel;
- (id)phoneAccessibility:(id)arg1;
- (void)updateCheckNameLineView;
- (void)updateCheckNameButton;
- (void)updateHeadImageView;
- (void)maskPanel;
- (void)updatePanelContainer;
- (void)updateAmountTitle;
- (void)updateInputContainer;
- (void)updateUnitLabel;
- (void)updateTextField;
- (void)updateAmountLineView;
- (void)updateCommentView;
- (void)updateArriveFirstLineView;
- (void)updateArriveTimeContainer;
- (void)updateArriveTimeTitleLabel;
- (void)updateArriveTimeDescLabel;
- (void)updateArriveTimeArrowView;
- (void)updateArriveSecondLineView;
- (void)onTapCheckName;
- (void)showCheckName:(id)arg1;
- (void)cutString:(id)arg1;
- (void)checkNameDidChange:(id)arg1;
- (void)textFieldDidChange;
- (void)onLongPressArriveTime:(id)arg1;
- (void)onTapArriveTime:(id)arg1;
- (id)convertDelayOptions:(id)arg1;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (id)keyboardHostViewController;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)activeTextField;
- (void)commentCancel;
- (void)commentConfirm;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)onWCPayTransferDelayOptionViewCancel;
- (void)onWCPayTransferDelayOptionViewConfirm:(unsigned int)arg1;
- (double)onWCPayTransferDelayOptionViewSafeBottom;
- (void)onSpaceTap;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)bShowAlert;
- (void)setBShowAlert:(BOOL)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)rcvrView;
- (void)setRcvrView:(id)arg1;
- (id)rcvrInfoView;
- (void)setRcvrInfoView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)descContainer;
- (void)setDescContainer:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)checkNameLineView;
- (void)setCheckNameLineView:(id)arg1;
- (id)checkNameButton;
- (void)setCheckNameButton:(id)arg1;
- (id)panelContainer;
- (void)setPanelContainer:(id)arg1;
- (id)amountLabel;
- (void)setAmountLabel:(id)arg1;
- (id)inputContainer;
- (void)setInputContainer:(id)arg1;
- (id)unitLabel;
- (void)setUnitLabel:(id)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)keyboard;
- (void)setKeyboard:(id)arg1;
- (id)amountLineView;
- (void)setAmountLineView:(id)arg1;
- (id)commentView;
- (void)setCommentView:(id)arg1;
- (id)arriveFirstLineView;
- (void)setArriveFirstLineView:(id)arg1;
- (id)arriveTimeContainer;
- (void)setArriveTimeContainer:(id)arg1;
- (id)arriveTimeTitleLabel;
- (void)setArriveTimeTitleLabel:(id)arg1;
- (id)arriveTimeDescLabel;
- (void)setArriveTimeDescLabel:(id)arg1;
- (id)arriveTimeArrowView;
- (void)setArriveTimeArrowView:(id)arg1;
- (id)arriveSecondLineView;
- (void)setArriveSecondLineView:(id)arg1;
- (id)getRvcrResp;
- (void)setGetRvcrResp:(id)arg1;
- (id)css;
- (void)setCss:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)commentAlertView;
- (void)setCommentAlertView:(id)arg1;
- (id)checkNameController;
- (void)setCheckNameController:(id)arg1;
- (unsigned int)currentSelectedDelayOption;
- (void)setCurrentSelectedDelayOption:(unsigned int)arg1;
- (id)navigationView;
- (void)setNavigationView:(id)arg1;
- (id)delayOption;
- (void)setDelayOption:(id)arg1;
- (id)tailView;
- (void)setTailView:(id)arg1;
- (void).cxx_destruct;
@end
