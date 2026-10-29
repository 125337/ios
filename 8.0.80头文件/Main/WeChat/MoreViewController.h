@interface MoreViewController : MMTabBarBaseViewController <PayMenuRedDotHelperExt, MyFavoritesViewControllerDelegate, FavoritesAndNoteViewControllerDelegate, ISettingExtChange, IUpdateProfileMgrExt, IWCSettingRedPointMgrExt, IWCLabsMgrExt, IMsgExt, WCPayWalletLockVerifyLogicDelegate, INewSyncExt, MMNewTipsMgrExt, MMLimitedModeExt, ILinkEventExt, MMTableViewInfoDelegate, WCFacadeExt, TextStateMgrExt, WCFinderCreateCoordinatorDelegate, WCTextStateDBExt, WCFinderRedDotExt, TextStateProfileDragAnimateHelperDelegate, WCFinderCardsEntryCenterExt, WCStatusViewDelegate, IHeadImageExt, WCPayLogicMgrExt, EmoticonRecommendMgrExt, MMKernelExt, WCMallLogicMgrExt, IWCCardPkgExt, WCActionSheetDelegate, TextStateProfileCardContentViewDelegate>
{
    UpdateWechatRedDotConfig * m_oUpdateWechatRedDotConfig; // +0x70
    MyFavoritesViewController * m_favViewController; // +0x78
    FavoritesAndNoteViewController * m_favoritesAndNoteViewController; // +0x80
    MMTimer * m_favCacheTimer; // +0x88
    UIView * m_footerView; // +0x90
    WCTableViewManager * m_tableViewMgr; // +0x98
    MMUIButton * m_textStateErrorBtn; // +0xa0
    MMFlutterInstance * m_favListFlutterInstance; // +0xa8
    BOOL _bIsEnterShareCardListFromOuterJump; // +0xb0
    BOOL _hasReportedPayReddotOnMe; // +0xb1
    BOOL _hasReportedPayReddotOnWCPay; // +0xb2
    BOOL _vcAppear; // +0xb3
    BOOL _ecsCardExpose; // +0xb4
    BOOL _enterBackground; // +0xb5
    BOOL _hasReportedPhotoWorkExposure; // +0xb6
    unsigned int _patternLockLogicTag; // +0xb8
    WCBizLoadingView * _loadingView; // +0xc0
    UIView * _frontView; // +0xc8
    MMHeadImageView * _headImage; // +0xd0
    MMCPLabel * _nickNameLabel; // +0xd8
    MMUIView * _frontTableViewBackGroundView; // +0xe0
    UITableView * _frontTableView; // +0xe8
    WCFinderCreateCoordinator * _createCoordinator; // +0xf0
    TextStateSquareButton * _textStateSquareButton; // +0xf8
    TextStatePublishEntryButton * _textStatePublishButton; // +0x100
    TextStateFriendTopicButton * _textStateFriendTopicButton; // +0x108
    TextStateTopicModel * _currentMaxFriendTopic; // +0x110
    TextStateProfileCardContentView * _textStateDetailView; // +0x118
    double _textStateDetailHeight; // +0x120
    double _textStateDetailFittingHeight; // +0x128
    TextStateProfileDragAnimateHelper * _textStateAnimationUtil; // +0x130
    TextStatePrivacyMgr * _shareScopeMgr; // +0x138
    MoreViewControllerReporter * _reporter; // +0x140
    long long _curTabPageSource; // +0x148
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
- (void)reportEcRedDotExpose:(id)arg1;
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
- (CGRect)getCellAvailableRect:(id)arg1 TableView:(id)arg2 CellManager:(id)arg3;
- (void)afterCellForRowAtIndexPath:(id)arg1 TableView:(id)arg2 Cell:(id)arg3 CellInfo:(id)arg4;
- (void)beforeDidSelectRowAtIndexPath:(id)arg1 andCell:(id)arg2 andSection:(id)arg3;
- (void)addCardsIfNeededToSection:(id)arg1;
- (void)addEmoticonsIfNeededToSection:(id)arg1;
- (void)exposeFinderVideoCell;
- (id)createFinderEntranceCellConfig:(CGSize)arg1;
- (BOOL)setupFinderEntranceRedDot:(BOOL *)arg1 rightText:(id *)arg2 badge:(id *)arg3 useRedDotRenderTool:(BOOL *)arg4;
- (void)setupFinderEntranceIcon:(id *)arg1 title:(id *)arg2 iconSize:(CGSize)arg3 showFinder:(BOOL)arg4 showBrand:(BOOL)arg5 mixStyle:(BOOL)arg6 showBizPhoto:(BOOL)arg7 colorful:(BOOL)arg8;
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
- (void)showMyQRCodeInProfileViewFromAppSearch;
- (void)showMyQRCodeInProfileViewWithEntryScene:(unsigned int)arg1;
- (void)showMyPatSuffixInProfileView;
- (void)showMyWCView;
- (void)reportFinderExpose;
- (void)showFinderProfile:(id)arg1;
- (BOOL)shouldUseFavoritesAndNoteViewController;
- (void)showFavoriteView;
- (void)showFavoriteViewWithSelectType:(id)arg1;
- (void)reportNativeWCPayClick;
- (void)ShowWCPayViewFromDeeplink;
- (void)showWCPayView;
- (void)showHtml5PayView;
- (void)openWCPayView;
- (void)showOverseaNativePayView;
- (void)showWCCardView;
- (void)reportLocationAndWifi;
- (void)onCardsEntryClicked;
- (void)showShareCardViewInternalWithClickSessionId:(id)arg1;
- (void)showOldShareCardViewInternal;
- (void)showShareCardView;
- (void)tryPreloadEmoticonLiteApp;
- (void)showEmoticonStoreView:(id)arg1;
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
- (void)favoritesAndNoteViewControllerDidClose:(id)arg1;
- (unsigned int)getTotalCount;
- (void)updateTabBarBadge;
- (void)updateViewWhenSelectTab:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)setupFrontView;
- (void)setupTextStateDragAniamteHelper;
- (void)onGetUpdateInfoOk;
- (void)pluginsChanged:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
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
- (void)finderRedDotDataChangedActionType:(unsigned long long)arg1 subReasonType:(unsigned long long)arg2 fromCtrlInfo:(id)arg3 toCtrlInfo:(id)arg4 disposePath:(id)arg5;
- (void)handleMyTabRedDotReplace:(id)arg1;
- (void)reportExposeAtRedDot:(id)arg1 withPath:(id)arg2;
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
- (unsigned long long)getTabBarItemIndex;
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
- (BOOL)vcAppear;
- (void)setVcAppear:(BOOL)arg1;
- (BOOL)ecsCardExpose;
- (void)setEcsCardExpose:(BOOL)arg1;
- (BOOL)enterBackground;
- (void)setEnterBackground:(BOOL)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (BOOL)hasReportedPhotoWorkExposure;
- (void)setHasReportedPhotoWorkExposure:(BOOL)arg1;
- (long long)curTabPageSource;
- (void)setCurTabPageSource:(long long)arg1;
- (void).cxx_destruct;
@end
