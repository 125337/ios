@interface MoreViewController : MMTabBarBaseViewController <PayMenuRedDotHelperExt, MyFavoritesViewControllerDelegate, ISettingExtChange, IUpdateProfileMgrExt, IWCSettingRedPointMgrExt, IWCLabsMgrExt, IMsgExt, WCPayWalletLockVerifyLogicDelegate, INewSyncExt, MMNewTipsMgrExt, MMLimitedModeExt, ILinkEventExt, MMTableViewInfoDelegate, WCFacadeExt, TextStateMgrExt, WCFinderCreateCoordinatorDelegate, WCTextStateDBExt, WCFinderRedDotExt, TextStateProfileDragAnimateHelperDelegate, WCFinderCardsEntryCenterExt, WCStatusViewDelegate, IHeadImageExt, WCPayLogicMgrExt, EmoticonRecommendMgrExt, MMKernelExt, WCMallLogicMgrExt, IWCCardPkgExt, WCActionSheetDelegate, TextStateProfileCardContentViewDelegate>
{
    UpdateWechatRedDotConfig * m_oUpdateWechatRedDotConfig; // +0x68
    MyFavoritesViewController * m_favViewController; // +0x70
    MMTimer * m_favCacheTimer; // +0x78
    UIView * m_footerView; // +0x80
    WCTableViewManager * m_tableViewMgr; // +0x88
    MMUIButton * m_textStateErrorBtn; // +0x90
    BOOL _bIsEnterShareCardListFromOuterJump; // +0x98
    BOOL _hasReportedPayReddotOnMe; // +0x99
    BOOL _hasReportedPayReddotOnWCPay; // +0x9a
    unsigned int _patternLockLogicTag; // +0x9c
    WCBizLoadingView * _loadingView; // +0xa0
    UIView * _frontView; // +0xa8
    MMHeadImageView * _headImage; // +0xb0
    MMCPLabel * _nickNameLabel; // +0xb8
    MMUIView * _frontTableViewBackGroundView; // +0xc0
    UITableView * _frontTableView; // +0xc8
    WCFinderCreateCoordinator * _createCoordinator; // +0xd0
    TextStateSquareButton * _textStateSquareButton; // +0xd8
    TextStatePublishEntryButton * _textStatePublishButton; // +0xe0
    TextStateFriendTopicButton * _textStateFriendTopicButton; // +0xe8
    TextStateTopicModel * _currentMaxFriendTopic; // +0xf0
    TextStateProfileCardContentView * _textStateDetailView; // +0xf8
    double _textStateDetailHeight; // +0x100
    double _textStateDetailFittingHeight; // +0x108
    TextStateProfileDragAnimateHelper * _textStateAnimationUtil; // +0x110
    TextStatePrivacyMgr * _shareScopeMgr; // +0x118
}
- (void)initUpdateWechatRedDotConfig;
- (void)clearUpdateWechatRedDotConfig;
- (void)setUpdateWechatRedDotConfig:(id)arg1;
- (id)getUpdateWechatRedDotConfig;
- (void)dealloc;
- (id)init;
- (void)backToSplitViewEmptyViewController:(id)arg1;
- (BOOL)useTransparentNavibar;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (CGSize)rowIconSize;
- (void)initView;
- (void)willAppear;
- (void)addFooterView;
- (void)reloadMoreView;
- (id)findMainTableView;
- (void)updateTextStateLocalPublish;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)viewDidPop:(BOOL)arg1;
- (void)triggerFinderSerialEntryRedDotExpose;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)updateTextStateExpandHeight;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)initTextStateErrorBtn;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)addProfileSection;
- (id)unReadForWCMallSection;
- (BOOL)reddotForWCMallSection;
- (id)rightValueForWCMallSection;
- (void)addWCMallSection;
- (void)jumpToWalletView;
- (void)addFunctionSection;
- (void)addCardsIfNeededToSection:(id)arg1;
- (void)addEmoticonsIfNeededToSection:(id)arg1;
- (void)exposeFinderVideoCell;
- (id)createFinderEntranceCellConfig:(CGSize)arg1;
- (void)addSettingSection;
- (void)initLoadingView;
- (void)startLoading;
- (void)stopLoading;
- (void)makeHeaderView;
- (id)makeFriendTopicButton;
- (void)setSmallRedDotForTextStateProfileCardMoreButton:(BOOL)arg1;
- (void)updateUnReadMsg;
- (void)showProfileView;
- (void)onShowMyQrCode;
- (void)showMyQRCodeInProfileView;
- (void)showMyPatSuffixInProfileView;
- (void)showMyWCView;
- (void)showFinderProfile:(id)arg1;
- (void)showFavoriteView;
- (void)showFavoriteViewWithSelectType:(id)arg1;
- (void)reportNativeWCPayClick;
- (void)showWCPayView;
- (void)showHtml5PayView;
- (void)openWCPayView;
- (void)showOverseaNativePayView;
- (void)showWCCardView;
- (void)reportLocationAndWifi;
- (void)onCardsEntryClicked;
- (void)showShareCardViewInternal;
- (void)showOldShareCardViewInternal;
- (void)showShareCardView;
- (void)showEmoticonStoreView;
- (void)internalShowEmoticonStoreView;
- (void)showSettingView;
- (void)showGeneralSetting;
- (void)showPrivateSetting;
- (void)showWcRecentPrivacySetting:(long long)arg1;
- (void)showPrivateSettingWithContactVerify:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isNeedShowWCPay;
- (BOOL)isNeedShowWCPayInTabNew;
- (void)checkReload;
- (void)onFavoritesClose;
- (void)onCloseFavTimeOut;
- (unsigned int)getTotalCount;
- (void)updateTabBarBadge;
- (void)updateViewWhenSelectTab:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)setupFrontView;
- (void)setupTextStateDragAniamteHelper;
- (void)onGetUpdateInfoOk;
- (void)pluginsChanged:(id)arg1;
- (void)onLimitedModeChanged;
- (id)getSettingHeadImage;
- (void)updateHead:(id)arg1;
- (void)onHeadImageChange:(id)arg1;
- (void)onProfileChange;
- (void)onWCCardMessageEntryTipChanged:(id)arg1;
- (void)onSettingExtChanged:(long long)arg1;
- (void)OnStatusChangedOrderListCountChanged:(unsigned int)arg1;
- (void)ReloadWallet;
- (void)OnGetBankCardReddotData;
- (void)OnGetLQTReddotData;
- (void)OnEmoticonRecommendNewStateChanged:(BOOL)arg1;
- (void)OnWCMallActivityChanged;
- (void)OnWCMallShowStatusInMoreViewChanged;
- (void)onWCCardMessageUnreadCountChanged:(id)arg1;
- (void)onWCCardLayoutRedDotChanged;
- (void)onWCCardTips;
- (void)walletLockVerifySuccess:(id)arg1;
- (void)parseDeepLink:(id)arg1 animation:(BOOL)arg2;
- (void)handlePersionalEmoticonDeepLink:(id)arg1 animation:(BOOL)arg2;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)cardDeeplink;
- (void)setupDeepLinkConfig;
- (void)onWCSettingRedPointChange;
- (void)onWechatEntranceRedPointChange;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)onPayMenuRedDotHelperSync;
- (void)onTogetherBadgesChanged;
- (void)onFinderCardsEntryShouldShowChange;
- (void)onFinderCardsEntryStyleChange;
- (void)preloadWeAppIfNeeded;
- (void)onTapTextStateSquareButton;
- (void)onTapTextStatePublishButton;
- (void)onTapTextStateFriendTopicButton;
- (id)genPublishUseCase;
- (void)onTextStateErrorBtnClick;
- (void)onTextStateUpdateForUserName:(id)arg1;
- (void)onTextStateDataLoaded;
- (void)onTextStateDataUpdated;
- (void)onTextStateNearbyExperimentChange;
- (void)updateTextState;
- (void)onTapExpandButton:(id)arg1;
- (void)onTapBackground:(id)arg1;
- (void)onTapMoreButton:(id)arg1;
- (void)hideMultiRedDot:(id)arg1;
- (void)onTapIconButton:(id)arg1;
- (void)onTapSelfFavoriteButton:(id)arg1;
- (void)onTapCommentButton:(id)arg1;
- (void)onTapResendButton:(id)arg1;
- (void)doSourceAction:(id)arg1;
- (id)associateViewController;
- (void)onTapAtIconButton;
- (void)onTapAtTextStateDetailButtonWithHandler:(id)arg1;
- (void)onTapAtTextStateHeadButton;
- (void)onTapLikeListButtonForTextState:(id)arg1;
- (void)onTapCommentListButtonForCardView:(id)arg1;
- (void)jumpToTextStateTopic:(id)arg1 reporter:(id)arg2 hasRedDot:(BOOL)arg3;
- (BOOL)shouldShowTextStateStyle;
- (void)exposeTextStateCard;
- (void)reportTextStateMixButtonAction:(unsigned int)arg1;
- (void)onReceiveInteractionCount:(unsigned int)arg1 withTextStateId:(id)arg2;
- (void)onTextStateNotifyRead;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)registerYReportSdk;
- (id)shareScopeMgr;
- (void)onWCStatusViewShowGroup:(id)arg1 view:(id)arg2;
- (unsigned int)patternLockLogicTag;
- (void)setPatternLockLogicTag:(unsigned int)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (BOOL)bIsEnterShareCardListFromOuterJump;
- (void)setBIsEnterShareCardListFromOuterJump:(BOOL)arg1;
- (id)frontView;
- (void)setFrontView:(id)arg1;
- (id)headImage;
- (void)setHeadImage:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)frontTableViewBackGroundView;
- (void)setFrontTableViewBackGroundView:(id)arg1;
- (id)frontTableView;
- (void)setFrontTableView:(id)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (BOOL)hasReportedPayReddotOnMe;
- (void)setHasReportedPayReddotOnMe:(BOOL)arg1;
- (BOOL)hasReportedPayReddotOnWCPay;
- (void)setHasReportedPayReddotOnWCPay:(BOOL)arg1;
- (id)textStateSquareButton;
- (void)setTextStateSquareButton:(id)arg1;
- (id)textStatePublishButton;
- (void)setTextStatePublishButton:(id)arg1;
- (id)textStateFriendTopicButton;
- (void)setTextStateFriendTopicButton:(id)arg1;
- (id)currentMaxFriendTopic;
- (void)setCurrentMaxFriendTopic:(id)arg1;
- (id)textStateDetailView;
- (void)setTextStateDetailView:(id)arg1;
- (double)textStateDetailHeight;
- (void)setTextStateDetailHeight:(double)arg1;
- (double)textStateDetailFittingHeight;
- (void)setTextStateDetailFittingHeight:(double)arg1;
- (id)textStateAnimationUtil;
- (void)setTextStateAnimationUtil:(id)arg1;
- (void)setShareScopeMgr:(id)arg1;
- (void).cxx_destruct;
@end

