@interface WCPayOfflinePayViewController : WCPayBaseViewController <MMTipsViewControllerDelegate, WCPayOfflinePayCodeViewDelegate, UIGestureRecognizerDelegate, MMKernelExt, IdleTimerUtilExt, WCPayNoticeBannerDelegate, WCPayOfflinePayInvalidCheckTipsViewDelegate, WCPayOfflinePaySelectPayCardViewDelegate, WCPayOfflineAddNewCardTipsViewDelegate, WCPayOfflinePayCreateOffinePayTipsViewDelegate, WCPayOfflinePayNoCodeTipsViewDelegate, WCPayWalletLockVerifyLogicDelegate, WCPayWalletLockSettingLogicDelegate, WCPayOfflinePayGuideBarViewDelegate, WCPayOfflinePayBlockTipsViewDelegate, WCPayOfflineDisableBlockTipsViewDelegate, WCPayOfflineEnablePageTipsViewDelegate, WCActionSheetDelegate, ILinkEventExt, WCPayPickerViewDelegate, WCPayLogicMgrExt>
{
    id <WCPayOfflinePayViewControllerDelegate> m_delegate; // +0x98
    BOOL m_bFreezeAlertShowed; // +0xa0
    BOOL m_bReadAgreement; // +0xa1
    UIButton * footerButton; // +0xa8
    RichTextView * m_cardInfoLabel; // +0xb0
    WCPayOfflinePayCodeView * m_PayOfflinePayCodeView; // +0xb8
    int m_enCurrentOfflinePayCodeDisplayScene; // +0xc0
    double _oldBrightness; // +0xc8
    WCPayPickerView * m_pickerView; // +0xd0
    WCPayWebImageView * _bankIcon; // +0xd8
    WCPayOfflinePayBottomButton * _changeCardBtn; // +0xe0
    NSString * _cacheCode; // +0xe8
    NSObject<OS_dispatch_queue> * _cacheQueue; // +0xf0
    BOOL _isRefreshing; // +0xf8
    BOOL _triggeredGetToken; // +0xf9
    UIAttachmentBehavior * _attachment; // +0x100
    MMUIView * _cardInfoView; // +0x108
    NSDictionary * m_dicBanners; // +0x110
    double bannerHeight; // +0x118
    BOOL _isViewDidAppear; // +0x120
    BOOL _bNeedUpdateCodeView; // +0x121
    BOOL _bRefreshFromCreateOfflinePay; // +0x122
    BOOL _isPatternLockShowing; // +0x123
    BOOL _bHasCheckFirstTips; // +0x124
    BOOL _bIsAllCardNotSupportOfflinePay; // +0x125
    BOOL _bIsShowingAddNewCardTipsView; // +0x126
    BOOL _bNeedShowNoCodeTipsView; // +0x127
    BOOL _bIsNavigateToReceiveLogic; // +0x128
    BOOL _bNeedShowReCreateOfflinePayTipsView; // +0x129
    BOOL _bIsFirstRefresh; // +0x12a
    BOOL _needRefreshCardList; // +0x12b
    BOOL _needShowPayCardListAfterRefresh; // +0x12c
    BOOL _bHasReportGuideBarShow; // +0x12d
    BOOL _needRefreshData; // +0x12e
    BOOL _bHasManualChangeCard; // +0x12f
    BOOL _openProtocolClickFlag; // +0x130
    BOOL _bIsManualCloseTipsView; // +0x131
    BOOL _bIsCaptureWhenViewDisappear; // +0x132
    BOOL _bIsUpdateCodeAfterSetPayment; // +0x133
    unsigned int _patternLockLogicTag; // +0x134
    long long _entryScene; // +0x138
    UIDynamicAnimator * _animator; // +0x140
    WCUIAlertView * _snapshotAlertView; // +0x148
    WCPayOfflinePayInvalidCheckTipsView * _invalidTipsView; // +0x150
    WCPayOfflinePaySelectPayCardView * _selectCardView; // +0x158
    WCPayOfflinePayAddNewCardTipsView * _addNewCardTipsView; // +0x160
    WCPayOfflinePayCreateOfflinePayTipsView * _createOfflinePayTipsView; // +0x168
    WCPayOfflinePayNoCodeTipsView * _noCodeTipsView; // +0x170
    MMUIView * _actionBarView; // +0x178
    MMUILabel * _bankNameLabel; // +0x180
    MMUILabel * _bankDescLabel; // +0x188
    MMUILabel * _bankForbidWordLabel; // +0x190
    MMUIView * _headerContentView; // +0x198
    WCPayBindCardInfo * _selectedCardNotSave; // +0x1a0
    WCPayOfflinePayGuideBarView * _guideBarView; // +0x1a8
    WCPayOfflinePaymentTipsBarView * _tipsBarView; // +0x1b0
    WCPayOfflineBlockTipsView * _blockTipsView; // +0x1b8
    NSDictionary * _refreshExtraInfo; // +0x1c0
    WCPayOfflineDisableBlockTipsView * _disableBlockTipsView; // +0x1c8
    WCPayOfflinePayPageJumpInfo * _pageJumpInfo; // +0x1d0
    WCPayOfflinePayBottomButton * _pageJumpEntryView; // +0x1d8
    WCPayOfflineEnablePageTipsView * _enableTipsView; // +0x1e0
}
- (void)dealloc;
- (id)init;
- (id)navigationBarBackgroundColor;
- (void)onClickLeftBarButton;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)adjustSubviewRects;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)doBackForTimeout;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAppear;
- (void)willDisappear;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)OnOfflinePayCancelPosNotification:(id)arg1;
- (void)setupHeaderContentView;
- (id)getActionBarView;
- (void)setupJumpInfoEntry;
- (void)jumpInfoEntryViewClick;
- (void)setupBottomButtonView;
- (id)genBottomButtonWithTitle:(id)arg1 actionSelector:(SEL)arg2 logoImg:(id)arg3 buttonSize:(CGSize)arg4 bIsFirstBtn:(BOOL)arg5 bIsLastBtn:(BOOL)arg6 bNeedShowRedDot:(BOOL)arg7 reddotshowWording:(id)arg8 bNeedShowSmallReddot:(BOOL)arg9;
- (id)createPayCodeView;
- (void)setupChangeCardView;
- (void)refreshViewWithData:(id)arg1;
- (void)handleCodeViewRefreshFlag;
- (void)reloadTableView;
- (void)UpdateBarCodeImage;
- (void)UpdateQRCodeImage;
- (void)updateCodeImage;
- (void)updateCodeInNewWay;
- (BOOL)checkIfNeedSetPaymentBeforeUpdateCode:(id)arg1;
- (void)updateCodeInNewWayWithTips:(BOOL)arg1;
- (void)changeCodeScene;
- (void)onMoreAction:(id)arg1;
- (void)onReadAgreement:(id)arg1;
- (BOOL)preViewControllerIsKindOf:(Class)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)onClickedReadSupportBanks;
- (void)exitFullScreenIfNeedAnimation:(BOOL)arg1;
- (void)updateCodeImageAndStartAutomaticUpdate;
- (void)receiveMoneyBtnPress:(id)arg1;
- (void)grouppayBtnPress:(id)arg1;
- (void)f2fHongBaoBtnPress:(id)arg1;
- (void)qrcoderewardBtnPress:(id)arg1;
- (void)transferToMix:(id)arg1;
- (void)transferToBankCardBtnPress:(id)arg1;
- (void)removeButtonRedDot:(id)arg1;
- (void)scrollContentToBottom;
- (void)showSelectedCardView;
- (void)cleanViewControllerBeforeShowPaidSucc;
- (void)preLoadTokensIfNeed;
- (BOOL)checkIfAllCardCannotUseForOfflinePay;
- (id)getOfflinePayHelpUrl;
- (BOOL)needShowBottomBusinessEntry;
- (BOOL)needShowPreferCardChangeTips;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)OnShouldChangeCard:(id)arg1;
- (void)WCPayPickerViewDidChooseRow:(long long)arg1 atSession:(long long)arg2;
- (void)WCPayPickerViewDidChooseRowTitle:(id)arg1 atSessionTitle:(id)arg2;
- (id)currentCardInfoShouldUse;
- (id)bankLogoUrlStrFromType:(id)arg1;
- (void)increaseBrightnessIfNeed;
- (void)clearOfflinePayAndPopWithoutAlert;
- (void)onCloseOfflinePay;
- (void)onChooseCardIndex:(long long)arg1;
- (void)onUserChooseCardForOfflinePay:(id)arg1;
- (void)OnGetBarCodeFromQRCodeResponse:(id)arg1 Error:(id)arg2;
- (void)OnQueryOfflinePayLimit:(id)arg1 fromCache:(BOOL)arg2 Error:(id)arg3;
- (void)onOffPayPauseAlertViewBtnClick;
- (void)OnShouldChangePayCardError:(id)arg1 ErrorType:(unsigned int)arg2;
- (void)OnOfflinePayTokenInfoUpdated:(BOOL)arg1;
- (void)OnOfflinePayTokenGetEnablePageData;
- (void)OnGetReceiveOrPayReddotData;
- (void)onKickQuit;
- (void)wcPayOfflinePayCodeViewExitFullScreenAnimationFinished:(id)arg1;
- (void)wcPayOfflinePayCodeViewBeginToShowFullScreen;
- (void)wcPayOfflinePayCodeViewAutoRefreshCountingFinished:(id)arg1;
- (void)wcPayOfflinePayCodeViewClickViewBarCodeBtn;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)onApplicationWillEnterForeground:(id)arg1;
- (void)walletLockVerifySuccess:(id)arg1;
- (BOOL)walletLockVerifyLogicNeedBlock:(id)arg1;
- (void)walletLockDidClose:(id)arg1;
- (void)touchLockDidSetup:(id)arg1;
- (void)patternLockDidSetup:(id)arg1;
- (void)onIdleTimerUtilVoipQuit;
- (float)topMarginOfTipView;
- (float)cardInfoContentHeight;
- (float)guideBarHeight;
- (float)tipsViewContentHeight;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (id)getNoticeBanner;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)didChangeScreenCapture:(id)arg1;
- (void)handleScreenDuringCapture;
- (void)checkAndShowFirstTips;
- (void)paycodeviewAccessibilityHide;
- (void)paycodeViewAccessibilityShow;
- (void)showInvalidTipsView;
- (void)hideInvalidTipsView;
- (void)initInvalidTipsView;
- (void)wcPayOfflinePayInvalidCheckViewClickConfirmBtn:(BOOL)arg1;
- (void)wcPayOfflinePayInvalidCheckViewClickViewDetailLink;
- (void)onSelectPayCardViewCancel;
- (void)onSelectPayCardViewReturnWithNewSelectCardBindSerial:(id)arg1;
- (void)onSelectPayCardViewClickForbidUrl:(id)arg1 isFQF:(BOOL)arg2;
- (void)onSelectPayCardViewClickForbidTinyAppUsername:(id)arg1 appPath:(id)arg2 isFQF:(BOOL)arg3;
- (void)showAddNewCardTipsView;
- (void)hideAddNewCardTipsView;
- (id)wcPayOfflineAddNewCardTipsViewGetTipsTitleContent;
- (void)wcPayOfflineAddNewCardTipsViewClickAddCardBtn;
- (void)wcPayOfflineAddNewCardTipsViewClickViewPayCardBtn;
- (void)showCreateOfflinePayTipsView;
- (void)showReCreateOfflinePayTipsView;
- (void)wcPayOfflinePayCreateOffinePayViewClickConfirmBtn;
- (void)wcPayOfflinePayCreateOffinePayViewClickSafeTips;
- (void)wcPayOfflinePayCreateOffinePayViewClickProtocolUrl:(id)arg1;
- (BOOL)getProtocolClickFlag;
- (void)updateProtocolClickFlag:(BOOL)arg1;
- (void)showNoCodeTipsView;
- (void)showNoCodeTipsView:(id)arg1;
- (void)hideNoCodeTipsView;
- (void)wcPayOfflinePayNoCodeTipsViewClickRefreshBtn;
- (void)OnGetT2BCEntryMsg;
- (BOOL)needShowEnableTipsView;
- (void)showEnableOfflinePayTipsView;
- (void)onOfflinePayEnableTipsViewClickVerifyBtn;
- (void)viewCotnrollerDidBecomeActive:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (id)getCurrentSelectedCardInfo;
- (void)saveCurrentSelectedCardWithCardInfo:(id)arg1;
- (void)refreshDefaultCardInfoAfterV2AuthCodeSetPayment:(id)arg1;
- (BOOL)refreshDefaultCardInfoWithBindSerail:(id)arg1;
- (void)showBlockTipsView;
- (void)hideBlockTipsView;
- (void)offlinePayBlockTipsViewClickConfirmBtn;
- (void)offlinePayBlockTipsViewClickOpenTinyAppWithExtraInfo:(id)arg1;
- (void)showDisableBlockTipsView;
- (void)hideDisableBlockTipsView;
- (void)offlinePayDiableBlockTipsViewClickConfirmBtn;
- (void)openH5WithUrlString:(id)arg1 needRefreshData:(BOOL)arg2;
- (void)openTinyAppWithUsername:(id)arg1 path:(id)arg2 needRefresh:(BOOL)arg3;
- (BOOL)shouldShowGuideBar:(id)arg1;
- (BOOL)shouldAutoHideGuideBar:(id)arg1;
- (void)onGuideBarClick;
- (void)handleClickCardSwitchTypeGuideBar;
- (void)handleClickOperateTypeGuideBar;
- (void)registerYReportSdk;
- (long long)entryScene;
- (void)setEntryScene:(long long)arg1;
- (BOOL)isViewDidAppear;
- (void)setIsViewDidAppear:(BOOL)arg1;
- (BOOL)bNeedUpdateCodeView;
- (void)setBNeedUpdateCodeView:(BOOL)arg1;
- (BOOL)bRefreshFromCreateOfflinePay;
- (void)setBRefreshFromCreateOfflinePay:(BOOL)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (unsigned int)patternLockLogicTag;
- (void)setPatternLockLogicTag:(unsigned int)arg1;
- (BOOL)isPatternLockShowing;
- (void)setIsPatternLockShowing:(BOOL)arg1;
- (id)snapshotAlertView;
- (void)setSnapshotAlertView:(id)arg1;
- (BOOL)bHasCheckFirstTips;
- (void)setBHasCheckFirstTips:(BOOL)arg1;
- (id)invalidTipsView;
- (void)setInvalidTipsView:(id)arg1;
- (id)selectCardView;
- (void)setSelectCardView:(id)arg1;
- (BOOL)bIsAllCardNotSupportOfflinePay;
- (void)setBIsAllCardNotSupportOfflinePay:(BOOL)arg1;
- (id)addNewCardTipsView;
- (void)setAddNewCardTipsView:(id)arg1;
- (BOOL)bIsShowingAddNewCardTipsView;
- (void)setBIsShowingAddNewCardTipsView:(BOOL)arg1;
- (id)createOfflinePayTipsView;
- (void)setCreateOfflinePayTipsView:(id)arg1;
- (id)noCodeTipsView;
- (void)setNoCodeTipsView:(id)arg1;
- (BOOL)bNeedShowNoCodeTipsView;
- (void)setBNeedShowNoCodeTipsView:(BOOL)arg1;
- (BOOL)bIsNavigateToReceiveLogic;
- (void)setBIsNavigateToReceiveLogic:(BOOL)arg1;
- (BOOL)bNeedShowReCreateOfflinePayTipsView;
- (void)setBNeedShowReCreateOfflinePayTipsView:(BOOL)arg1;
- (id)actionBarView;
- (void)setActionBarView:(id)arg1;
- (BOOL)bIsFirstRefresh;
- (void)setBIsFirstRefresh:(BOOL)arg1;
- (id)bankNameLabel;
- (void)setBankNameLabel:(id)arg1;
- (id)bankDescLabel;
- (void)setBankDescLabel:(id)arg1;
- (id)bankForbidWordLabel;
- (void)setBankForbidWordLabel:(id)arg1;
- (id)headerContentView;
- (void)setHeaderContentView:(id)arg1;
- (BOOL)needRefreshCardList;
- (void)setNeedRefreshCardList:(BOOL)arg1;
- (BOOL)needShowPayCardListAfterRefresh;
- (void)setNeedShowPayCardListAfterRefresh:(BOOL)arg1;
- (id)selectedCardNotSave;
- (void)setSelectedCardNotSave:(id)arg1;
- (id)guideBarView;
- (void)setGuideBarView:(id)arg1;
- (id)tipsBarView;
- (void)setTipsBarView:(id)arg1;
- (BOOL)bHasReportGuideBarShow;
- (void)setBHasReportGuideBarShow:(BOOL)arg1;
- (id)blockTipsView;
- (void)setBlockTipsView:(id)arg1;
- (BOOL)needRefreshData;
- (void)setNeedRefreshData:(BOOL)arg1;
- (id)refreshExtraInfo;
- (void)setRefreshExtraInfo:(id)arg1;
- (id)disableBlockTipsView;
- (void)setDisableBlockTipsView:(id)arg1;
- (BOOL)bHasManualChangeCard;
- (void)setBHasManualChangeCard:(BOOL)arg1;
- (BOOL)openProtocolClickFlag;
- (void)setOpenProtocolClickFlag:(BOOL)arg1;
- (id)pageJumpInfo;
- (void)setPageJumpInfo:(id)arg1;
- (id)pageJumpEntryView;
- (void)setPageJumpEntryView:(id)arg1;
- (BOOL)bIsManualCloseTipsView;
- (void)setBIsManualCloseTipsView:(BOOL)arg1;
- (BOOL)bIsCaptureWhenViewDisappear;
- (void)setBIsCaptureWhenViewDisappear:(BOOL)arg1;
- (id)enableTipsView;
- (void)setEnableTipsView:(id)arg1;
- (BOOL)bIsUpdateCodeAfterSetPayment;
- (void)setBIsUpdateCodeAfterSetPayment:(BOOL)arg1;
- (void).cxx_destruct;
@end
