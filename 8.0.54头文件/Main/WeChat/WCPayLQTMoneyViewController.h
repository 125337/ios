@interface WCPayLQTMoneyViewController : WCPayBaseViewController <WCPayLQTRedeemTypeCellDelegate, MMUseCaseCallback, UITextFieldDelegate, ILinkEventExt, WCPayLQTOrderConfirmViewDelegate, WCActionSheetDelegate, WCPayBankListPanelViewDelegate, WCPayDecimalKeyboardViewDelegate, WCPayLQTInvalidTipsViewDelegate, WCPayLQTTipsNewModalDelegate, WCPayLQTPromptTipsViewDelegate, WCPayLQTPageSheetDelegate, WCPayLQTBelowAmountHintViewDelegate, WCPayLQTKeyboardToolViewDelegate, WCPayLQTTipsModalDelegate>
{
    BOOL _bHasEnterOrChangeCard; // +0x90
    BOOL _bIsShowingCardInfoView; // +0x91
    BOOL _bhasAutoPullUpKeyboard; // +0x92
    BOOL _bIsSelectPaymentPopupDialog; // +0x93
    BOOL _bIsNeedLoaingUpdate; // +0x94
    BOOL _isOpenFof; // +0x95
    int _checkBoxSelectFlag; // +0x98
    unsigned int _m_selectedRedeemType; // +0x9c
    WCPayLQTBelowAmountHintView * _belowAmountHintView; // +0xa0
    WCPayLQTInvalidTipsView * _invalidTipsView; // +0xa8
    id <WCPayLQTMoneyViewControllerDelegate> _delegate; // +0xb0
    MMTableView * _tableView; // +0xb8
    UIButton * _operationBtn; // +0xc0
    UITextField * _moneyTextField; // +0xc8
    MMUILabel * _invalidTipsLabel; // +0xd0
    RichTextView * _richTextView; // +0xd8
    WCPayLQTOrderConfirmView * _confirmView; // +0xe0
    MMUILabel * _cardInfoBtn; // +0xe8
    WCPayBankListPanelView * _panelView; // +0xf0
    MMUIButton * _fetchTipsBtn; // +0xf8
    MMUILabel * _realtimeFetchBalanceTipsLabel; // +0x100
    WCPayLQTTipsModal * _tipsModal; // +0x108
    RichTextView * _frozenTipsTextView; // +0x110
    WCPayLimitCashierModal * _limitModal; // +0x118
    WCPayLQTKeyboardToolView * _keyboardToolView; // +0x120
    UIView * _m_buttonContentView; // +0x128
    MMUILabel * _m_bottomWarningLabel; // +0x130
    RichTextView * _m_bottomTipsLabel; // +0x138
    UIView * _m_protocolView; // +0x140
    UIButton * _protocolCheckBtn; // +0x148
    UIView * _m_profitView; // +0x150
    UIView * _m_selectView; // +0x158
    UIView * _m_inputContentView; // +0x160
    UILabel * _m_topTipsLabel; // +0x168
    UIView * _m_topbarView; // +0x170
    UIButton * _m_maskTopbarButton; // +0x178
    WCPayWebImageView * _m_cardLogo; // +0x180
    NSString * _cardinfoAccessibilityTips; // +0x188
    UILabel * _m_availLabel; // +0x190
    UILabel * _m_preArriveTimeLabel; // +0x198
    MMUILabel * _m_redeemToBankLabel; // +0x1a0
    UIImageView * _m_arrowImageView; // +0x1a8
    UIView * _m_topbarLineView; // +0x1b0
    UILabel * _m_textFieldTitle; // +0x1b8
    UILabel * _m_unitLabel; // +0x1c0
    UIView * _m_moneyLineView; // +0x1c8
    UIView * _m_redeemTypeListView; // +0x1d0
    double _m_keyboardHeight; // +0x1d8
    RichTextView * _balanceUpgradeTextView; // +0x1e0
    WCPayDecimalKeyboardView * _keyboardView; // +0x1e8
    UIView * _bannerView; // +0x1f0
    MMUILabel * _bannerLabel; // +0x1f8
    UIButton * _bannerCoverBtn; // +0x200
    WCPayLQTTipsNewModal * _slowRedeemTipsModal; // +0x208
    WCPayLQTPromptTipsView * _fetchInvalidPromptTipsView; // +0x210
    WCPayLQTPageSheet * _fetchToBalanceExceedGuidePageSheet; // +0x218
    WCPayLQTPageSheet * _fetchToBalanceExceedDetailPageSheet; // +0x220
    NSString * _balanceExceedString; // +0x228
    UIView * _cardInfoLoadingView; // +0x230
    UIView * _lqtBalanceInfoLoadingView; // +0x238
    UIView * _purchaseFromLqGuideView; // +0x240
    unsigned long long _showCardListScene; // +0x248
    WCPayLQTPageSheet * _purchaseInterceptPageSheet; // +0x250
    WCPayLQTPageSheet * _purchaseFundResPageSheet; // +0x258
    WCPayLQTPageSheet * _preRedeemFundResPageSheet; // +0x260
}
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillPopOrDismiss:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidPop:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)updateView;
- (void)adjustButtonY;
- (void)updateRedeemTypeSelection;
- (void)viewDidLoad;
- (void)setupContentView;
- (BOOL)hasEnterAmountOrChangeDefaultCard;
- (double)saveAndFetchDetailTipsContentMaxWidth;
- (double)tableViewSaveAndFetchDetailTipsContentHeight;
- (double)inputContentViewTopbarheight;
- (id)getBannerInfo;
- (void)makeCardInfoView:(id)arg1;
- (void)setupCardInfoViewWhenHasRespData:(double)arg1;
- (void)setupCardInfoViewWhenLoadingRespData:(double)arg1;
- (void)setupLoadingView:(id)arg1 loadingContent:(id)arg2 loadingMaxWidth:(double)arg3;
- (void)makeInputContentView:(id)arg1;
- (void)setupInputContentBottomViewWhenHasRespData;
- (void)setupInputContentBottomViewWhenLoadingRespData;
- (void)makeBtnCellContentView:(id)arg1;
- (void)initInvalidTipsLabel;
- (void)showInvalidTipsLabelWithContent:(id)arg1;
- (void)showNewInvalidTipsLabelWithContent:(id)arg1;
- (void)handleFetchToBankAmountInvalidWithAmount:(unsigned int)arg1;
- (void)showFetchInvalidPromptTipsViewWithAmount:(unsigned int)arg1;
- (void)hideInvalidTipsLabel;
- (void)showBalanceUpgradeTextView;
- (void)leftBarButtonClick;
- (void)textFieldDidChang:(id)arg1;
- (void)updateBelowAmountHint;
- (BOOL)isViewShown:(id)arg1;
- (void)checkBtnStatus;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)openH5WithUrl:(id)arg1 needUpdatePurchaseData:(BOOL)arg2;
- (void)openTinyappWithUsername:(id)arg1 path:(id)arg2;
- (void)checkIfFetchAmountInvalid:(unsigned int)arg1;
- (void)checkIfSaveAmountInvalid:(unsigned int)arg1;
- (void)showPwdConfirmViewWhenPreRedeemFundOk;
- (void)reloadContentView;
- (void)checkLimitCashierModalWithCreate:(BOOL)arg1;
- (void)refreshMoneyBottomTipsArea;
- (void)cardInfoBtnClick;
- (void)showSelectPayCardListViewWithScene:(unsigned long long)arg1;
- (void)activeTextField;
- (int)getPanelViewAutoShowFlag;
- (void)resetPanelViewAutoShowFlag;
- (void)autoShowCardPanelViewIfNecessary;
- (void)bannerClick;
- (void)showPurchaseFundResPageSheet:(id)arg1;
- (void)showRedeemFundResPageSheet:(id)arg1;
- (void)onOrderConfirmViewClose;
- (void)onOrderConfirmViewCancel;
- (void)onOrderConfirmViewPayWithEnPwd:(id)arg1;
- (void)call:(id)arg1;
- (BOOL)canShowLQTProtocol;
- (BOOL)lqtProtocolCheck;
- (id)makeProtocolContentView;
- (void)checkBtnClick:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getCardNameWithBindSerial:(id)arg1;
- (id)getCurrentCardList;
- (id)getPanelViewBankList;
- (id)getBalanceCardInfo;
- (id)setBalanceAsDefaultSaveCard;
- (id)setBalanceAsDefaultFetchCard;
- (id)getCurrentSelcectBankInfo;
- (unsigned int)getCurrentFetchTotalAmount;
- (BOOL)hasResponseData;
- (id)getPanelViewTitleWording;
- (id)getPanelViewDescWording;
- (id)getPanelViewAddNewCardCellWording;
- (void)onBankListPanelViewCancel;
- (void)onBankListPanelViewReturnWithSelectedCardBindSerial:(id)arg1;
- (void)reportAfterSelectNewCardInfo;
- (void)onBankListPanelViewClickForbidUrl:(id)arg1;
- (void)onBankListPanelViewClickAddNewCardCell;
- (BOOL)hasFetchTipsContent;
- (void)fetchTipsBtnClick;
- (void)initKeyboard;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)updateTableViewOffset;
- (void)updateKeyboardConfirmBtnStatus;
- (BOOL)isSaveScene;
- (BOOL)isBalanceSelected;
- (id)currentRedeemTypeList;
- (id)keyboardToolView;
- (void)lqtKeyboardToolViewDidSelectAmount:(unsigned int)arg1;
- (void)onWCPayLQTRedeemTypeCellClick:(id)arg1;
- (void)decimalKeyboardDidShow;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (BOOL)handlePurchaseInterceptIfNecessaryWithAmount:(id)arg1;
- (void)onWCPayLQTTipsNewModalTapContinueTransferOut;
- (void)onWCPayLQTTipsNewModalTapCancel;
- (id)keyboardHostViewController;
- (void)onClickInvalidTipsViewLink:(id)arg1;
- (void)onClickHintViewLink:(id)arg1;
- (unsigned long long)inputAmount;
- (void)onClickPromptTipsView:(id)arg1 info:(id)arg2;
- (void)showBankBalanceTipsView;
- (void)onTipsModalDismiss;
- (unsigned int)calcBalanceExceedAmount;
- (BOOL)shouldShowBalanceExceedTips;
- (void)showBalanceExceedGuidePageSheet;
- (void)onClickPageSheet:(id)arg1 promptInfo:(id)arg2;
- (void)onClickPageSheet:(id)arg1 jumpInfo:(id)arg2;
- (void)showBalanceExceedDetailPageSheet;
- (void)onClickPageSheetLefeCloseBtn:(id)arg1;
- (void)removePurchaseFromLqGuideView;
- (void)setupPurchaseFromLqGuideView;
- (void)handlePurchaseFromLqJumpTextClick;
- (void)removePurchaseFromLqGuideAndReloadView;
- (BOOL)bHasEnterOrChangeCard;
- (void)setBHasEnterOrChangeCard:(BOOL)arg1;
- (id)belowAmountHintView;
- (void)setBelowAmountHintView:(id)arg1;
- (id)invalidTipsView;
- (void)setInvalidTipsView:(id)arg1;
- (id)delegate;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)operationBtn;
- (void)setOperationBtn:(id)arg1;
- (id)moneyTextField;
- (void)setMoneyTextField:(id)arg1;
- (id)invalidTipsLabel;
- (void)setInvalidTipsLabel:(id)arg1;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (id)confirmView;
- (void)setConfirmView:(id)arg1;
- (id)cardInfoBtn;
- (void)setCardInfoBtn:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)fetchTipsBtn;
- (void)setFetchTipsBtn:(id)arg1;
- (id)realtimeFetchBalanceTipsLabel;
- (void)setRealtimeFetchBalanceTipsLabel:(id)arg1;
- (id)tipsModal;
- (void)setTipsModal:(id)arg1;
- (id)frozenTipsTextView;
- (void)setFrozenTipsTextView:(id)arg1;
- (id)limitModal;
- (void)setLimitModal:(id)arg1;
- (void)setKeyboardToolView:(id)arg1;
- (int)checkBoxSelectFlag;
- (void)setCheckBoxSelectFlag:(int)arg1;
- (id)m_buttonContentView;
- (void)setM_buttonContentView:(id)arg1;
- (id)m_bottomWarningLabel;
- (void)setM_bottomWarningLabel:(id)arg1;
- (id)m_bottomTipsLabel;
- (void)setM_bottomTipsLabel:(id)arg1;
- (id)m_protocolView;
- (void)setM_protocolView:(id)arg1;
- (id)protocolCheckBtn;
- (void)setProtocolCheckBtn:(id)arg1;
- (id)m_profitView;
- (void)setM_profitView:(id)arg1;
- (id)m_selectView;
- (void)setM_selectView:(id)arg1;
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
- (id)cardinfoAccessibilityTips;
- (void)setCardinfoAccessibilityTips:(id)arg1;
- (id)m_availLabel;
- (void)setM_availLabel:(id)arg1;
- (id)m_preArriveTimeLabel;
- (void)setM_preArriveTimeLabel:(id)arg1;
- (id)m_redeemToBankLabel;
- (void)setM_redeemToBankLabel:(id)arg1;
- (id)m_arrowImageView;
- (void)setM_arrowImageView:(id)arg1;
- (id)m_topbarLineView;
- (void)setM_topbarLineView:(id)arg1;
- (id)m_textFieldTitle;
- (void)setM_textFieldTitle:(id)arg1;
- (id)m_unitLabel;
- (void)setM_unitLabel:(id)arg1;
- (id)m_moneyLineView;
- (void)setM_moneyLineView:(id)arg1;
- (id)m_redeemTypeListView;
- (void)setM_redeemTypeListView:(id)arg1;
- (unsigned int)m_selectedRedeemType;
- (void)setM_selectedRedeemType:(unsigned int)arg1;
- (double)m_keyboardHeight;
- (void)setM_keyboardHeight:(double)arg1;
- (id)balanceUpgradeTextView;
- (void)setBalanceUpgradeTextView:(id)arg1;
- (id)keyboardView;
- (void)setKeyboardView:(id)arg1;
- (BOOL)bIsShowingCardInfoView;
- (void)setBIsShowingCardInfoView:(BOOL)arg1;
- (id)bannerView;
- (void)setBannerView:(id)arg1;
- (id)bannerLabel;
- (void)setBannerLabel:(id)arg1;
- (id)bannerCoverBtn;
- (void)setBannerCoverBtn:(id)arg1;
- (id)slowRedeemTipsModal;
- (void)setSlowRedeemTipsModal:(id)arg1;
- (id)fetchInvalidPromptTipsView;
- (void)setFetchInvalidPromptTipsView:(id)arg1;
- (id)fetchToBalanceExceedGuidePageSheet;
- (void)setFetchToBalanceExceedGuidePageSheet:(id)arg1;
- (id)fetchToBalanceExceedDetailPageSheet;
- (void)setFetchToBalanceExceedDetailPageSheet:(id)arg1;
- (id)balanceExceedString;
- (void)setBalanceExceedString:(id)arg1;
- (id)cardInfoLoadingView;
- (void)setCardInfoLoadingView:(id)arg1;
- (id)lqtBalanceInfoLoadingView;
- (void)setLqtBalanceInfoLoadingView:(id)arg1;
- (id)purchaseFromLqGuideView;
- (void)setPurchaseFromLqGuideView:(id)arg1;
- (unsigned long long)showCardListScene;
- (void)setShowCardListScene:(unsigned long long)arg1;
- (BOOL)bhasAutoPullUpKeyboard;
- (void)setBhasAutoPullUpKeyboard:(BOOL)arg1;
- (id)purchaseInterceptPageSheet;
- (void)setPurchaseInterceptPageSheet:(id)arg1;
- (BOOL)bIsSelectPaymentPopupDialog;
- (void)setBIsSelectPaymentPopupDialog:(BOOL)arg1;
- (BOOL)bIsNeedLoaingUpdate;
- (void)setBIsNeedLoaingUpdate:(BOOL)arg1;
- (BOOL)isOpenFof;
- (void)setIsOpenFof:(BOOL)arg1;
- (id)purchaseFundResPageSheet;
- (void)setPurchaseFundResPageSheet:(id)arg1;
- (id)preRedeemFundResPageSheet;
- (void)setPreRedeemFundResPageSheet:(id)arg1;
- (void).cxx_destruct;
@end

