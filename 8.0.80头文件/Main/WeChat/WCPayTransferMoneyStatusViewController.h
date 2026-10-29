@interface WCPayTransferMoneyStatusViewController : WCPayBaseViewController <KindaUIViewDelegate, WCPayTransferMoneyStatusViewControllerExt, WCPayAddressRemarkViewDelegate, WCPayGetTransferWordingCgiDelegate, WCPayNoticeBannerDelegate, WCActionSheetDelegate, MMTipsViewControllerDelegate, ILinkEventExt>
{
    id <WCPayTransferMoneyStatusViewControllerDelegate> m_delegate; // +0x98
    BOOL _m_shouldRefreshDataOnAppear; // +0xa0
    BOOL _m_expendAddress; // +0xa1
    BOOL _hasShowChannelHalfTips; // +0xa2
    BOOL _m_bHasChannelTypeExpousreReport; // +0xa3
    BOOL _m_bHasCustomerCellReport; // +0xa4
    BOOL _m_bNeedRefresh; // +0xa5
    BOOL _m_bShowingBalanceDescription; // +0xa6
    BOOL _didFromOpenRecvChannelPage; // +0xa7
    BOOL _isPreloadedLiteApp; // +0xa8
    BOOL _hasScrolledToEnd; // +0xa9
    unsigned int _currentSelectedRecvChannelType; // +0xac
    OpenMinimchGuide * _resumeGuide; // +0xb0
    WCPayGetTransferWordingCgi * _wordingCgi; // +0xb8
    GetTransferWordingResponse * _wordingResponse; // +0xc0
    WCPayNoticeItemView * _noticeBanner; // +0xc8
    WCActionSheet * _m_actionSheet; // +0xd0
    MMTipsViewController * _resendTipsView; // +0xd8
    NSMutableDictionary * _receiveAccountDownImages; // +0xe0
    UIView * _topContentCantainerView; // +0xe8
    NSMutableDictionary * _subTitleClickInfo; // +0xf0
    NSMutableSet * _chanelsHasShowFirstChooseGuide; // +0xf8
    NSString * _currentSelectedBindSerial; // +0x100
    NSMutableDictionary * _subChannelSelectdDictionary; // +0x108
    RecvChannel * _modalSelectedChannel; // +0x110
    NSMutableDictionary * _channelInfoMap; // +0x118
}
+ (id)safeBindSerialFromAccount:(id)arg1;
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
- (BOOL)isTransferShowExceedTips:(id)arg1 selfReceiver:(BOOL)arg2;
- (void)addLimitInfoTipsView:(id)arg1 orderDetail:(id)arg2;
- (void)reloadTableView;
- (void)layoutOptimizePaymentProcessStyle:(id)arg1 intoView:(id)arg2 receiverContact:(id)arg3 senderContact:(id)arg4;
- (id)getDefalutSelectedRecvChannelType:(id)arg1;
- (int)validateSelected:(id)arg1 current:(id)arg2;
- (id)safeBindSerialFromAccount:(id)arg1;
- (long long)getFirstShowTimeStampForChannel:(id)arg1;
- (void)setFirstShowTimeStamp:(long long)arg1 forChannel:(id)arg2;
- (id)buildFirstShowTimeStampKeyForChannel:(id)arg1;
- (void)addShownChannelWithType:(long long)arg1 bindSerial:(id)arg2 kvKey:(id)arg3 bindKey:(id)arg4;
- (BOOL)hasShownChannelWithType:(long long)arg1 bindSerial:(id)arg2 kvKey:(id)arg3 bindKey:(id)arg4;
- (id)getShownChannelsArrayForKey:(id)arg1;
- (id)getShownChannelsArrayForBindSerialKey:(id)arg1;
- (void)addShownChannelWithType:(long long)arg1 bindSerial:(id)arg2;
- (BOOL)hasShownChannelWithType:(long long)arg1 bindSerial:(id)arg2;
- (void)addSelectedChannelWithType:(long long)arg1 bindSerial:(id)arg2;
- (BOOL)hasSelectedChannelWithType:(long long)arg1 bindSerial:(id)arg2;
- (id)buildKeyWithChannelType:(long long)arg1 bindSerial:(id)arg2;
- (void)parseKey:(id)arg1 channelType:(long long *)arg2 bindSerial:(id *)arg3;
- (unsigned long long)getDefaultSelectedSubChannelId:(id)arg1;
- (id)getSubChannelNameById:(unsigned long long)arg1 fromChannels:(id)arg2;
- (BOOL)checkIfChanelAvaible:(int)arg1 bindSerial:(id)arg2;
- (void)handleRecvChannelGroupInfo:(id)arg1;
- (BOOL)didRecvChannel:(id)arg1 inRecvChannelGroup:(id)arg2;
- (id)getRecvChannelDataByChannelType:(int)arg1 bindSerial:(id)arg2 fromDestArr:(id)arg3;
- (void)delayShowRecvChannelFirstTips;
- (void)onClickRecvChannelInfoBtn:(id)arg1;
- (long long)getFirstChooseGuideShowTimes:(long long)arg1 bindSerial:(id)arg2;
- (void)saveFirstChooseGuideShowTimes:(long long)arg1 bindSerial:(id)arg2 showTimes:(long long)arg3;
- (BOOL)hasBindSerial:(id)arg1;
- (void)showFirstChooseGuide:(id)arg1;
- (void)onClickCustomerInfo:(id)arg1;
- (void)onClickOptimizePaymentCustomerInfo:(id)arg1;
- (void)onClickOptimizePaymentOpenRecvChannelBtn:(id)arg1;
- (void)delayShowRecvChannelTips:(id)arg1 channelType:(int)arg2 bindSerial:(id)arg3 showType:(int)arg4;
- (void)onClickMiddleInfo;
- (void)recvChanelTypeClickReport:(int)arg1 actionType:(int)arg2;
- (void)recvChanelTypeWithBindSerialReport:(int)arg1 bindSerial:(id)arg2 actionType:(int)arg3;
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
- (id)findChannelDataByChannelType:(long long)arg1 bindSerial:(id)arg2;
- (void)showSubChannelSelectModalView:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getTransferChatContact;
- (void)onJsapiConfirmTransfer;
- (void)onJsapiRefreshTransferStatus:(id)arg1;
- (void)didTap:(id)arg1;
- (void)sizeDidChange:(id)arg1;
- (BOOL)hasShowRecvChannelOnceUsageTips:(int)arg1;
- (BOOL)hasShowRecvChannelOnceUsageTips:(int)arg1 bindSerial:(id)arg2;
- (void)setShowRecvChannelOnceUsageTips:(int)arg1;
- (void)setShowRecvChannelOnceUsageTips:(int)arg1 bindSerial:(id)arg2;
- (void)handleRecvChannelSubTitleRoutInfo:(id)arg1 channelType:(unsigned int)arg2 bindSerial:(id)arg3 subTitle:(id)arg4;
- (BOOL)checkIfRecvSubTitleClicked:(unsigned int)arg1 bindSerial:(id)arg2;
- (BOOL)shouldShowOptimizeStyle:(id)arg1;
- (void)preloadLiteApp;
- (void)scrollPageToEnd;
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
- (id)currentSelectedBindSerial;
- (void)setCurrentSelectedBindSerial:(id)arg1;
- (BOOL)didFromOpenRecvChannelPage;
- (void)setDidFromOpenRecvChannelPage:(BOOL)arg1;
- (id)subChannelSelectdDictionary;
- (void)setSubChannelSelectdDictionary:(id)arg1;
- (id)modalSelectedChannel;
- (void)setModalSelectedChannel:(id)arg1;
- (BOOL)isPreloadedLiteApp;
- (void)setIsPreloadedLiteApp:(BOOL)arg1;
- (BOOL)hasScrolledToEnd;
- (void)setHasScrolledToEnd:(BOOL)arg1;
- (id)channelInfoMap;
- (void)setChannelInfoMap:(id)arg1;
- (void).cxx_destruct;
@end
