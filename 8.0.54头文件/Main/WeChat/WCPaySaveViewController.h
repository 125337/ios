@interface WCPaySaveViewController : WCPayBaseViewController <WCPayBalanceSelectCardViewDelegate, WCPayDecimalKeyboardViewDelegate, WCPayBalanceChargeLQTEntryViewDelegate>
{
    id <WCPaySaveViewControllerDelegate> m_delegate; // +0x90
    BOOL _bIsUserManulSelectCard; // +0x98
    BOOL _bIsKeyboardShowing; // +0x99
    BOOL _bIsShowingCardInfoView; // +0x9a
    UIView * _headerContentView; // +0xa0
    UIView * _cardContentView; // +0xa8
    MMUILabel * _cardTitle; // +0xb0
    WCPayWebImageView * _banklogoImgView; // +0xb8
    UIButton * _bankNameSelectBtn; // +0xc0
    UIImageView * _arrowImgView; // +0xc8
    MMUILabel * _bankdetailLabel; // +0xd0
    UIButton * _cardCoverButton; // +0xd8
    UIView * _moneyContentView; // +0xe0
    MMUILabel * _moneyTitleLabel; // +0xe8
    MMUILabel * _moneyCurrency; // +0xf0
    UITextField * _moneyTextField; // +0xf8
    UIView * _moneySepLine; // +0x100
    WCPayBindCardInfo * _currentCardInfo; // +0x108
    WCPayDecimalKeyboardView * _keyboardView; // +0x110
    WCPayBalanceChargeLQTEntryView * _lqtEntryView; // +0x118
    WCPayNoticeItemView * _noticeItemView; // +0x120
    NSDictionary * _m_dicBanners; // +0x128
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

