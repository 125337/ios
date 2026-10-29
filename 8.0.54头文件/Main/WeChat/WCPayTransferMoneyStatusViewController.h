@interface WCPayTransferMoneyStatusViewController : WCPayBaseViewController <KindaUIViewDelegate, WCPayTransferMoneyStatusViewControllerExt, WCPayAddressRemarkViewDelegate, WCPayGetTransferWordingCgiDelegate, WCPayNoticeBannerDelegate, WCActionSheetDelegate, MMTipsViewControllerDelegate, ILinkEventExt>
{
    id <WCPayTransferMoneyStatusViewControllerDelegate> m_delegate; // +0x90
    BOOL _m_shouldRefreshDataOnAppear; // +0x98
    BOOL _m_expendAddress; // +0x99
    BOOL _hasShowChannelHalfTips; // +0x9a
    BOOL _m_bHasChannelTypeExpousreReport; // +0x9b
    BOOL _m_bHasCustomerCellReport; // +0x9c
    BOOL _m_bNeedRefresh; // +0x9d
    BOOL _m_bShowingBalanceDescription; // +0x9e
    BOOL _didFromOpenRecvChannelPage; // +0x9f
    BOOL _isPreloadedLiteApp; // +0xa0
    unsigned int _currentSelectedRecvChannelType; // +0xa4
    OpenMinimchGuide * _resumeGuide; // +0xa8
    WCPayGetTransferWordingCgi * _wordingCgi; // +0xb0
    GetTransferWordingResponse * _wordingResponse; // +0xb8
    WCPayNoticeItemView * _noticeBanner; // +0xc0
    WCActionSheet * _m_actionSheet; // +0xc8
    MMTipsViewController * _resendTipsView; // +0xd0
    NSMutableDictionary * _receiveAccountDownImages; // +0xd8
    UIView * _topContentCantainerView; // +0xe0
    NSMutableDictionary * _subTitleClickInfo; // +0xe8
    NSMutableSet * _chanelsHasShowFirstChooseGuide; // +0xf0
    NSMutableDictionary * _subChannelSelectdDictionary; // +0xf8
    RecvChannel * _modalSelectedChannel; // +0x100
}
+ (long long)indexInLocation:(CGPoint)arg1 withLabel:(id)arg2;
- (id)init;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (BOOL)shouldInteractivePop;
- (void)OnHistoryOrderDetailBack;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (double)measureWidth:(id)arg1;
- (id)checkBreakLine:(double)arg1 preStr:(id)arg2 openImName:(id)arg3;
- (BOOL)shouldUseSmallMargin;
- (void)reloadTableView;
- (void)layoutOptimizePaymentProcessStyle:(id)arg1 intoView:(id)arg2 receiverContact:(id)arg3 senderContact:(id)arg4;
- (int)getDefalutSelectedRecvChannelType:(id)arg1;
- (unsigned long long)getDefaultSelectedSubChannelId:(id)arg1;
- (id)getSubChannelNameById:(unsigned long long)arg1 fromChannels:(id)arg2;
- (BOOL)checkIfChanelAvaible:(int)arg1;
- (void)handleRecvChannelGroupInfo:(id)arg1;
- (BOOL)didRecvChannel:(id)arg1 inRecvChannelGroup:(id)arg2;
- (id)getRecvChannelDataByChannelType:(int)arg1 fromDestArr:(id)arg2;
- (void)delayShowRecvChannelFirstTips;
- (void)onClickRecvChannelInfoBtn:(id)arg1;
- (long long)getFirstChooseGuideShowTimes:(long long)arg1;
- (void)saveFirstChooseGuideShowTimes:(long long)arg1 showTimes:(long long)arg2;
- (void)showFirstChooseGuide:(id)arg1;
- (void)onClickCustomerInfo:(id)arg1;
- (void)onClickOptimizePaymentCustomerInfo:(id)arg1;
- (void)onClickOptimizePaymentOpenRecvChannelBtn:(id)arg1;
- (void)delayShowRecvChannelTips:(id)arg1 channelType:(int)arg2 showType:(int)arg3;
- (void)onClickMiddleInfo;
- (void)recvChanelTypeClickReport:(int)arg1 actionType:(int)arg2;
- (void)onClickRecvChannel:(id)arg1;
- (void)updateExposureView;
- (void)updateFooterButton:(id)arg1;
- (BOOL)isNotSentFromMeAndWaitingForReceive;
- (void)onClickTextInfo;
- (void)onClickAddressJumpInfo;
- (void)onClickJumpInfo:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)OnConfirmTransferMoneyBtnDone;
- (void)reportLocationAndWifi;
- (void)OnRealnameSucceed;
- (void)requestWording;
- (void)onOpenQA;
- (void)wcpayGetTransferWordingCgi:(id)arg1 didGetResponse:(id)arg2;
- (id)getMainTitleWordingInLocal:(BOOL)arg1 receiverContact:(id)arg2;
- (id)getSubTitleWordingInLocal:(BOOL)arg1;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)onWCPayAddressRemarkViewExpend;
- (void)onWCPayAddressRemarkViewCopy;
- (void)reportAction:(unsigned long long)arg1;
- (void)showResendTipsView;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (id)getReceiverDisplayName:(id)arg1;
- (id)getSenderDisplayName:(id)arg1;
- (void)rightBarButtonPress;
- (id)findChannelDataByChannelType:(long long)arg1;
- (void)showSubChannelSelectModalView:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getTransferChatContact;
- (void)onJsapiConfirmTransfer;
- (void)didTap:(id)arg1;
- (void)sizeDidChange:(id)arg1;
- (BOOL)hasShowRecvChannelOnceUsageTips:(int)arg1;
- (void)setShowRecvChannelOnceUsageTips:(int)arg1;
- (void)handleRecvChannelSubTitleRoutInfo:(id)arg1 channelType:(unsigned int)arg2 subTitle:(id)arg3;
- (BOOL)checkIfRecvSubTitleClicked:(unsigned int)arg1;
- (BOOL)shouldShowOptimizeStyle:(id)arg1;
- (void)preloadLiteApp;
- (void)userDidTakeScreenshot:(id)arg1;
- (BOOL)m_shouldRefreshDataOnAppear;
- (void)setM_shouldRefreshDataOnAppear:(BOOL)arg1;
- (id)resumeGuide;
- (void)setResumeGuide:(id)arg1;
- (id)wordingCgi;
- (void)setWordingCgi:(id)arg1;
- (id)wordingResponse;
- (void)setWordingResponse:(id)arg1;
- (id)noticeBanner;
- (void)setNoticeBanner:(id)arg1;
- (BOOL)m_expendAddress;
- (void)setM_expendAddress:(BOOL)arg1;
- (id)m_actionSheet;
- (void)setM_actionSheet:(id)arg1;
- (id)resendTipsView;
- (void)setResendTipsView:(id)arg1;
- (BOOL)hasShowChannelHalfTips;
- (void)setHasShowChannelHalfTips:(BOOL)arg1;
- (BOOL)m_bHasChannelTypeExpousreReport;
- (void)setM_bHasChannelTypeExpousreReport:(BOOL)arg1;
- (BOOL)m_bHasCustomerCellReport;
- (void)setM_bHasCustomerCellReport:(BOOL)arg1;
- (BOOL)m_bNeedRefresh;
- (void)setM_bNeedRefresh:(BOOL)arg1;
- (BOOL)m_bShowingBalanceDescription;
- (void)setM_bShowingBalanceDescription:(BOOL)arg1;
- (id)receiveAccountDownImages;
- (void)setReceiveAccountDownImages:(id)arg1;
- (id)topContentCantainerView;
- (void)setTopContentCantainerView:(id)arg1;
- (id)subTitleClickInfo;
- (void)setSubTitleClickInfo:(id)arg1;
- (id)chanelsHasShowFirstChooseGuide;
- (void)setChanelsHasShowFirstChooseGuide:(id)arg1;
- (unsigned int)currentSelectedRecvChannelType;
- (void)setCurrentSelectedRecvChannelType:(unsigned int)arg1;
- (BOOL)didFromOpenRecvChannelPage;
- (void)setDidFromOpenRecvChannelPage:(BOOL)arg1;
- (id)subChannelSelectdDictionary;
- (void)setSubChannelSelectdDictionary:(id)arg1;
- (id)modalSelectedChannel;
- (void)setModalSelectedChannel:(id)arg1;
- (BOOL)isPreloadedLiteApp;
- (void)setIsPreloadedLiteApp:(BOOL)arg1;
- (void).cxx_destruct;
@end

