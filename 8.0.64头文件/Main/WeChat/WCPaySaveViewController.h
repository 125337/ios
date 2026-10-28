@interface WCPaySaveViewController : WCPayBaseViewController <WCPayBalanceSelectCardViewDelegate, WCPayDecimalKeyboardViewDelegate, WCPayBalanceChargeLQTEntryViewDelegate>
{
    id <WCPaySaveViewControllerDelegate> m_delegate; // +0x98
    BOOL _bIsUserManulSelectCard; // +0xa0
    BOOL _bIsKeyboardShowing; // +0xa1
    BOOL _bIsShowingCardInfoView; // +0xa2
    UIView * _headerContentView; // +0xa8
    UIView * _cardContentView; // +0xb0
    MMUILabel * _cardTitle; // +0xb8
    WCPayWebImageView * _banklogoImgView; // +0xc0
    UIButton * _bankNameSelectBtn; // +0xc8
    UIImageView * _arrowImgView; // +0xd0
    MMUILabel * _bankdetailLabel; // +0xd8
    UIButton * _cardCoverButton; // +0xe0
    UIView * _moneyContentView; // +0xe8
    MMUILabel * _moneyTitleLabel; // +0xf0
    MMUILabel * _moneyCurrency; // +0xf8
    UITextField * _moneyTextField; // +0x100
    UIView * _moneySepLine; // +0x108
    WCPayBindCardInfo * _currentCardInfo; // +0x110
    WCPayDecimalKeyboardView * _keyboardView; // +0x118
    WCPayBalanceChargeLQTEntryView * _lqtEntryView; // +0x120
    WCPayNoticeItemView * _noticeItemView; // +0x128
    NSDictionary * _m_dicBanners; // +0x130
}
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)viewDidPop:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (void)initNavigationBar;
- (void)reloadTableView;
- (void)FillSaveMoneyCancel;
- (void)clickBankName;
- (void)textFieldDidChange;
- (void)activeTextFieldWithCheckTop:(BOOL)arg1;
- (void)setNeedRefreshDefaultCard;
- (id)cardInfos;
- (id)defaultCard;
- (void)setCardInfo:(id)arg1;
- (id)getCardNameFrom:(id)arg1;
- (double)selectCardViewSafeBottom;
- (void)selectCardView:(id)arg1 didSelectCard:(id)arg2;
- (void)selectCardViewDidSelectAddNewCard:(id)arg1;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (id)keyboardHostViewController;
- (void)decimalKeyboardWillShow:(double)arg1;
- (void)decimalKeyboardWillHide;
- (void)setupInputView;
- (void)checkConfirmBtnStatus;
- (BOOL)shouldShowLqtEntryView;
- (void)onClickLQTChargeEntryView;
- (id)headerContentView;
- (void)setHeaderContentView:(id)arg1;
- (id)cardContentView;
- (void)setCardContentView:(id)arg1;
- (id)cardTitle;
- (void)setCardTitle:(id)arg1;
- (id)banklogoImgView;
- (void)setBanklogoImgView:(id)arg1;
- (id)bankNameSelectBtn;
- (void)setBankNameSelectBtn:(id)arg1;
- (id)arrowImgView;
- (void)setArrowImgView:(id)arg1;
- (id)bankdetailLabel;
- (void)setBankdetailLabel:(id)arg1;
- (id)cardCoverButton;
- (void)setCardCoverButton:(id)arg1;
- (id)moneyContentView;
- (void)setMoneyContentView:(id)arg1;
- (id)moneyTitleLabel;
- (void)setMoneyTitleLabel:(id)arg1;
- (id)moneyCurrency;
- (void)setMoneyCurrency:(id)arg1;
- (id)moneyTextField;
- (void)setMoneyTextField:(id)arg1;
- (id)moneySepLine;
- (void)setMoneySepLine:(id)arg1;
- (id)currentCardInfo;
- (void)setCurrentCardInfo:(id)arg1;
- (BOOL)bIsUserManulSelectCard;
- (void)setBIsUserManulSelectCard:(BOOL)arg1;
- (id)keyboardView;
- (void)setKeyboardView:(id)arg1;
- (BOOL)bIsKeyboardShowing;
- (void)setBIsKeyboardShowing:(BOOL)arg1;
- (BOOL)bIsShowingCardInfoView;
- (void)setBIsShowingCardInfoView:(BOOL)arg1;
- (id)lqtEntryView;
- (void)setLqtEntryView:(id)arg1;
- (id)noticeItemView;
- (void)setNoticeItemView:(id)arg1;
- (id)m_dicBanners;
- (void)setM_dicBanners:(id)arg1;
- (void).cxx_destruct;
@end
