@interface WCPayNewFetchViewController : WCPayBaseViewController <UITableViewDelegate, WCPayNoticeBannerDelegate, MMTipsViewControllerDelegate, WCPayBalanceSelectCardViewDelegate, WCPayDecimalKeyboardViewDelegate, WCPayLQTipsModalDelegate, ILinkEventExt>
{
    WCPayBindCardInfo * m_oCardInfo; // +0x90
    WCPayNoticeItemView * m_banner; // +0x98
    MMUIView * m_containerView; // +0xa0
    MMUIView * m_cardBgView; // +0xa8
    MMUILabel * m_cardLabel; // +0xb0
    MMUIButton * m_bankNameBtn; // +0xb8
    MMUILabel * m_bankChargeFeeLabel; // +0xc0
    MMUIView * m_fetchBgView; // +0xc8
    MMUILabel * m_fetchLabel; // +0xd0
    MMUILabel * m_symbolLabel; // +0xd8
    UITextField * m_fetchMoneyFeild; // +0xe0
    MMUIView * m_fetchLine; // +0xe8
    MMUILabel * m_fetchTipLabel; // +0xf0
    MMUIButton * m_fetchAllBtn; // +0xf8
    MMUIButton * m_fetchLimitBtn; // +0x100
    WCPayBalanceTipsLogic * tipLogic; // +0x108
    BOOL m_bFetchAll; // +0x110
    NSDictionary * m_dicBanners; // +0x118
    WCPayFetchBalanceReport * m_reportLogic; // +0x120
    BOOL m_firstShowLimitTip; // +0x128
    BOOL m_firstShowLimitGuild; // +0x129
    BOOL _m_hasManualSelectedCard; // +0x12a
    BOOL _bIsShowingCardInfoView; // +0x12b
    id <WCPayNewFetchViewControllerDelegate> _m_delegate; // +0x130
    WCPayWebImageView * _cardLogoImgView; // +0x138
    UIImageView * _arrowImgView; // +0x140
    UIButton * _cardInfoCoverBtn; // +0x148
    RichTextView * _frozenTipsTextView; // +0x150
    WCPayDecimalKeyboardView * _keyboardView; // +0x158
    WCPayLQTipsModal * _tipsModal; // +0x160
    UIView * _fetchLimitGuildView; // +0x168
    WCPayWebImageView * _fetchLimitGuildLogoView; // +0x170
    MMUILabel * _fetchLimitGuildDescView; // +0x178
    RichTextView * _fetchLimitGuildActionView; // +0x180
    NSString * _fetchLimitRecomentSerial; // +0x188
}
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillPopOrDismiss:(BOOL)arg1;
- (BOOL)cardInfoCanBeUsedForFetch:(id)arg1;
- (id)validCardInfoOfBindSerial:(id)arg1 fromBindedCardList:(id)arg2;
- (id)manualSelectedCardInfo;
- (id)serverDefaultCard;
- (id)firstAvailableCardInfo;
- (id)getCardBySerial:(id)arg1;
- (id)displayCardInfo;
- (void)refreshViewWithData:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)setupNavigationBar;
- (void)setupView;
- (id)fetchLimitGuildView;
- (void)layoutAllViews;
- (void)layoutBankCardInfo;
- (void)layoutFetchInfo;
- (id)getFetchTipsLabelContent;
- (id)genLabelWithFontSize:(int)arg1 textColor:(id)arg2;
- (id)getCardNameFrom:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)setDelegate:(id)arg1;
- (void)setCardInfo:(id)arg1;
- (id)getNoticeBanner;
- (void)setCurrentCardInfo:(id)arg1;
- (void)onRightBarButtonClick;
- (void)onCancelClick;
- (void)onClickNext:(id)arg1;
- (void)onClickBankName:(id)arg1;
- (void)doNext;
- (void)onFetchLimitTipsClick:(id)arg1;
- (void)onFetchAllBtnClick:(id)arg1;
- (void)onFetchAllBtnDown:(id)arg1;
- (void)onFetchAllBtnCancel:(id)arg1;
- (BOOL)updateFeeForFetchAll;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)textFieldDidChange;
- (void)updateFetchTipLable:(id)arg1;
- (void)showBeyondFetchBalanceErrorTip;
- (void)showChargeFeeTip:(id)arg1;
- (void)showFetchBalanceTip;
- (id)getRealtimeChargeFeeFor:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)showFetchRuleTips;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)checkAndShowFirstVisitTips;
- (double)selectCardViewSafeBottom;
- (void)selectCardView:(id)arg1 didSelectCard:(id)arg2;
- (void)selectCardViewDidSelectAddNewCard:(id)arg1;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (id)keyboardHostViewController;
- (void)decimalKeyboardWillShow:(double)arg1;
- (void)decimalKeyboardWillHide;
- (void)onWCPayLQTipsModalClose;
- (void)setupInputView;
- (void)activeTextFieldWithCheckTop:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_hasManualSelectedCard;
- (void)setM_hasManualSelectedCard:(BOOL)arg1;
- (id)cardLogoImgView;
- (void)setCardLogoImgView:(id)arg1;
- (id)arrowImgView;
- (void)setArrowImgView:(id)arg1;
- (id)cardInfoCoverBtn;
- (void)setCardInfoCoverBtn:(id)arg1;
- (id)frozenTipsTextView;
- (void)setFrozenTipsTextView:(id)arg1;
- (id)keyboardView;
- (void)setKeyboardView:(id)arg1;
- (id)tipsModal;
- (void)setTipsModal:(id)arg1;
- (void)setFetchLimitGuildView:(id)arg1;
- (id)fetchLimitGuildLogoView;
- (void)setFetchLimitGuildLogoView:(id)arg1;
- (id)fetchLimitGuildDescView;
- (void)setFetchLimitGuildDescView:(id)arg1;
- (id)fetchLimitGuildActionView;
- (void)setFetchLimitGuildActionView:(id)arg1;
- (id)fetchLimitRecomentSerial;
- (void)setFetchLimitRecomentSerial:(id)arg1;
- (BOOL)bIsShowingCardInfoView;
- (void)setBIsShowingCardInfoView:(BOOL)arg1;
- (void).cxx_destruct;
@end

