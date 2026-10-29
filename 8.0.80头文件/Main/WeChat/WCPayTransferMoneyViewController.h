@interface WCPayTransferMoneyViewController : WCPayBaseViewController <WCPayNoticeBannerDelegate, WCPayGetTransferWordingCgiDelegate, WCPayBeforeTransferCgiDelegate, WCPayUnionTransferBeforeCgiDelegate, WCPayDecimalKeyboardViewDelegate, WCPayRemarkPageSheetDelegate, WCAddressEntranceControlLogicDelegate, WCPayTransferMoneyAntiCheatButtonDelegate, MMTipsViewControllerDelegate, ILinkEventExt>
{
    UIButton * m_footerButton; // +0x98
    id <WCPayTransferMoneyViewControllerDelegate> m_delegate; // +0xa0
    WCPayMoneyTextFieldItem * m_textFieldItem; // +0xa8
    MMTipsViewController * tipsView; // +0xb0
    BOOL m_bIsPoped; // +0xb8
    CGPoint m_originalViewCenter; // +0xc0
    BOOL m_isShowTips; // +0xd0
    NSDictionary * m_dicBanners; // +0xd8
    WCPayNoticeBanner * noticeBanner; // +0xe0
    UIView * headerView; // +0xe8
    UIView * footerView; // +0xf0
    UIView * backgroundView; // +0xf8
    BOOL _disableEditMoney; // +0x100
    BOOL _bIsFeeTextFieldFirstTimeAutoFocus; // +0x101
    BOOL _exclusiveTipsHasShown; // +0x102
    BOOL _bIsSelectingAddress; // +0x103
    BOOL _bIsMerchantLoading; // +0x104
    id /* block */ _textFieldResignBlk; // +0x108
    NSString * _remark; // +0x110
    WCPayTextField * _feeTextField; // +0x118
    RichTextView * _commentTextView; // +0x120
    UIView * _nameContainerView; // +0x128
    UILabel * _transferDisplaynameLabel; // +0x130
    MMUILabel * _transferWeixinNameLabel; // +0x138
    UIView * _openImHeaderView; // +0x140
    UIView * _openImMerchantLayoutView; // +0x148
    UILabel * _openImTitleView; // +0x150
    KindaOpenIMInfoView * _openImInfoView; // +0x158
    UILabel * _openImMerchantTitleView; // +0x160
    UILabel * _openImMerchantView; // +0x168
    MMUIActivityIndicatorView * _indicatorView; // +0x170
    UILabel * _transferTitleLabel; // +0x178
    MMHeadImageView * _headImageView; // +0x180
    UIView * _bannerView; // +0x188
    WCUIAlertView * _alertView; // +0x190
    WCPayTransferMoneyAntiCheatUIView * _m_antiCheatView; // +0x198
    UIView * _contentView; // +0x1a0
    UILabel * _moneyTitle; // +0x1a8
    UILabel * _unitLabel; // +0x1b0
    UILabel * _fixMoneyLabel; // +0x1b8
    UIView * _m_lineView; // +0x1c0
    UILabel * _transferDelayLabel; // +0x1c8
    WCPayGetTransferWordingCgi * _wordingCgi; // +0x1d0
    GetTransferWordingResponse * _wordingResponse; // +0x1d8
    WCPayBeforeTransferCgi * _beforeCgi; // +0x1e0
    CgiTransferBeforeResp * _beforeResponse; // +0x1e8
    WCPayUnionTransferBeforeCgi * _unionBeforeCgi; // +0x1f0
    CgiUnionTransferBeforeResp * _unionBeforeResponse; // +0x1f8
    NSString * _openImTitle; // +0x200
    NSString * _openImReceiver; // +0x208
    NSString * _openImEnterprise; // +0x210
    NSString * _openImMerchantTitle; // +0x218
    WCPayDecimalKeyboardView * _keyboardView; // +0x220
    double _keyboardHeight; // +0x228
    UIView * _m_footerMask; // +0x230
    WCPayRemarkPageSheet * _remarkPageSheet; // +0x238
    WCPayRemarkPageSheetConfig * _pageSheetConfig; // +0x240
    NSMutableString * _addressContent; // +0x248
    NSString * _wechatAliasName; // +0x250
    NSNumber * _pendingInitialMoneyFen; // +0x258
    NSString * _pendingInitialRemark; // +0x260
}
- (id)init;
- (void)dealloc;
- (void)setupWithData:(id)arg1;
- (void)viewDidLoad;
- (void)reportWithAction:(unsigned long long)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidPop:(BOOL)arg1;
- (void)adjustTableViewInset:(id)arg1;
- (void)requestWording;
- (void)requestBeforeInfo;
- (void)initNewHeaderView;
- (BOOL)isShowContactDisplayName;
- (void)onWCPayAntiCheatButtonClickWithH5:(id)arg1;
- (void)onWCPayAntiCheatButtonClickWithMiniProgram:(id)arg1 path:(id)arg2;
- (void)onWCPayAntiCheatButtonClickWithNative:(id)arg1;
- (void)updateFooterButtonForTransferSceneKeyboard;
- (void)updateFooterButtonForTransferScene;
- (void)layoutForTransfer;
- (id)getTransferDelayTips;
- (void)CancelMySelfViewController;
- (void)FillSaveMoneyCancel;
- (BOOL)isTransferScene;
- (id)navigationBarBackgroundColor;
- (BOOL)navigationBarBlurEffect;
- (void)initNavigationBar;
- (void)setLeftCancelButton:(id)arg1;
- (void)setDisableEditMoney:(BOOL)arg1;
- (void)reloadTableView;
- (void)onOpenQA;
- (void)clickRightNavigationItem;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)onNext;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)setDelegate:(id)arg1;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)handleEditRemark:(id)arg1;
- (void)pageSheetCancel;
- (void)pageSheetConfirmWithRemark:(id)arg1;
- (void)pageSheetRightButtonClick;
- (void)pageSheetInpuContentLengthExceed;
- (void)addressLogicDidStop;
- (void)didSelectAddress:(id)arg1;
- (id)processRemarkContentWithAddress:(id)arg1;
- (void)detectRemarkContainAddress;
- (void)reportTransferAddressAction:(unsigned int)arg1;
- (void)textFieldDidChange;
- (void)showChargeFeeTips;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)setNoticeBanner;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)wcpayGetTransferWordingCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)beforeTransferCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)beforeTransferCgi:(id)arg1 didFailWith:(id)arg2;
- (void)onWCPayUnionTransferBeforeCgiResponseOK:(id)arg1;
- (void)onWCPayUnionTransferBeforeCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)checkPermission:(unsigned int)arg1 errMsg:(id)arg2;
- (void)textFieldResignFirstResponderWithBlk:(id /* block */)arg1;
- (void)onKeyboardDidHide;
- (void)reportEnter;
- (void)reportAction:(unsigned long long)arg1;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (id)keyboardHostViewController;
- (void)showFloatConfirmBtn;
- (void)activeTextField;
- (void)clearMoneyInput;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)setInitialTransferMoneyInFen:(unsigned long long)arg1;
- (void)setInitialRemark:(id)arg1;
- (void)applyPendingInitialValuesIfNeeded;
- (BOOL)disableEditMoney;
- (id /* block */)textFieldResignBlk;
- (void)setTextFieldResignBlk:(id /* block */)arg1;
- (id)remark;
- (void)setRemark:(id)arg1;
- (id)feeTextField;
- (void)setFeeTextField:(id)arg1;
- (id)commentTextView;
- (void)setCommentTextView:(id)arg1;
- (id)nameContainerView;
- (void)setNameContainerView:(id)arg1;
- (id)transferDisplaynameLabel;
- (void)setTransferDisplaynameLabel:(id)arg1;
- (id)transferWeixinNameLabel;
- (void)setTransferWeixinNameLabel:(id)arg1;
- (id)openImHeaderView;
- (void)setOpenImHeaderView:(id)arg1;
- (id)openImMerchantLayoutView;
- (void)setOpenImMerchantLayoutView:(id)arg1;
- (id)openImTitleView;
- (void)setOpenImTitleView:(id)arg1;
- (id)openImInfoView;
- (void)setOpenImInfoView:(id)arg1;
- (id)openImMerchantTitleView;
- (void)setOpenImMerchantTitleView:(id)arg1;
- (id)openImMerchantView;
- (void)setOpenImMerchantView:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (id)transferTitleLabel;
- (void)setTransferTitleLabel:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)bannerView;
- (void)setBannerView:(id)arg1;
- (id)alertView;
- (void)setAlertView:(id)arg1;
- (id)m_antiCheatView;
- (void)setM_antiCheatView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)moneyTitle;
- (void)setMoneyTitle:(id)arg1;
- (id)unitLabel;
- (void)setUnitLabel:(id)arg1;
- (id)fixMoneyLabel;
- (void)setFixMoneyLabel:(id)arg1;
- (id)m_lineView;
- (void)setM_lineView:(id)arg1;
- (id)transferDelayLabel;
- (void)setTransferDelayLabel:(id)arg1;
- (id)wordingCgi;
- (void)setWordingCgi:(id)arg1;
- (id)wordingResponse;
- (void)setWordingResponse:(id)arg1;
- (id)beforeCgi;
- (void)setBeforeCgi:(id)arg1;
- (id)beforeResponse;
- (void)setBeforeResponse:(id)arg1;
- (id)unionBeforeCgi;
- (void)setUnionBeforeCgi:(id)arg1;
- (id)unionBeforeResponse;
- (void)setUnionBeforeResponse:(id)arg1;
- (id)openImTitle;
- (void)setOpenImTitle:(id)arg1;
- (id)openImReceiver;
- (void)setOpenImReceiver:(id)arg1;
- (id)openImEnterprise;
- (void)setOpenImEnterprise:(id)arg1;
- (id)openImMerchantTitle;
- (void)setOpenImMerchantTitle:(id)arg1;
- (BOOL)bIsFeeTextFieldFirstTimeAutoFocus;
- (void)setBIsFeeTextFieldFirstTimeAutoFocus:(BOOL)arg1;
- (id)keyboardView;
- (void)setKeyboardView:(id)arg1;
- (BOOL)exclusiveTipsHasShown;
- (void)setExclusiveTipsHasShown:(BOOL)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (id)m_footerMask;
- (void)setM_footerMask:(id)arg1;
- (id)remarkPageSheet;
- (void)setRemarkPageSheet:(id)arg1;
- (id)pageSheetConfig;
- (void)setPageSheetConfig:(id)arg1;
- (id)addressContent;
- (void)setAddressContent:(id)arg1;
- (BOOL)bIsSelectingAddress;
- (void)setBIsSelectingAddress:(BOOL)arg1;
- (BOOL)bIsMerchantLoading;
- (void)setBIsMerchantLoading:(BOOL)arg1;
- (id)wechatAliasName;
- (void)setWechatAliasName:(id)arg1;
- (id)pendingInitialMoneyFen;
- (void)setPendingInitialMoneyFen:(id)arg1;
- (id)pendingInitialRemark;
- (void)setPendingInitialRemark:(id)arg1;
- (void).cxx_destruct;
@end
