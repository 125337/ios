@interface BSTimelineMsgMgr : MMUserService <IMMNewSessionMgrFilterExt, WXGImportMessageNotification, MMSessionRefreshExt, IMsgExt, IMMNewSessionMgrExt, IContactMgrExt, PBMessageObserverDelegate, MMTipsViewControllerDelegate, MMActionNotifyCommBizExt, MMServiceProtocol, MMImageLoaderObserver>
{
    BOOL _isMigratingData; // +0x8
    BOOL _needUpdateMainSession; // +0x9
    BOOL _isTimelinePageActive; // +0xa
    BOOL _isBSNotifyCacheInited; // +0xb
    BOOL _isBSNotifyCacheInitializing; // +0xc
    BOOL _shouldCancelRedDotSessionReport; // +0xd
    BOOL _hasShowFirstGuideLine; // +0xe
    BOOL _isTlPicPreloadCgiRequesting; // +0xf
    BOOL _hasMainBizCellExposed; // +0x10
    BOOL _msgExposedNeedReloadTableView; // +0x11
    BOOL _isCurFlutterAffEnable; // +0x12
    BOOL _isLastFlutterAffEnable; // +0x13
    BOOL _isAffHasInit; // +0x14
    BOOL _isInDelayPreload; // +0x15
    BOOL _shouldPrelayoutMagicCardWhenMainSessionExpose; // +0x16
    BOOL _mainSessionExposed; // +0x17
    BOOL _isMainTabOnStackTop; // +0x18
    BOOL _isBSSessionVisibleInMainSession; // +0x19
    BOOL _isBrandSessionVisibleInMainSession; // +0x1a
    BOOL _hasSwitchedTab; // +0x1b
    BOOL _reportCgiConfig; // +0x1c
    unsigned int _serviceInitTs; // +0x20
    unsigned int _tlPicPreloadSyncGapTimerLoopCount; // +0x24
    unsigned int _tlPicPreloadUnreadCountBeforeSync; // +0x28
    unsigned int _tlPicPreloadDownloadPicTimerLoopCount; // +0x2c
    unsigned int _tlPicPreloadDownloadStartTimeSec; // +0x30
    unsigned int _tlPicPreloadDownloadPicCount; // +0x34
    unsigned int _lastMemoryWarningTs; // +0x38
    unsigned int _notifyCount; // +0x3c
    unsigned int _validExposeUpgradeTime; // +0x40
    MemoryMappedKV * _mappedKV; // +0x48
    MMBaseSessionStorage * _sessionStorage; // +0x50
    BrandSessionCache * _mainSessionCache; // +0x58
    NSData * _oldSessionCacheData; // +0x60
    NSObject<OS_dispatch_queue> * _m_workerThread; // +0x68
    NSMutableArray * _arrTmpToAddMsg; // +0x70
    unsigned long long _lastDeleteTooOldTLRecordTime; // +0x78
    BSTOftenReadBizCache * _oftenReadBizCache; // +0x80
    NSData * _oldOftenReadBizCacheData; // +0x88
    unsigned long long _currentTLMinExposedSeqId; // +0x90
    NSDate * _lastExpandMoreSubscribedMsgDate; // +0x98
    NSMutableSet * _recoFlowFeedbackCardIdHistory; // +0xa0
    NSString * _brandSessionFullFormattedMessage; // +0xa8
    NSObject<OS_dispatch_queue> * _aff_queue; // +0xb0
    BSTimelineFlutterViewController * _timelineViewController; // +0xb8
    MMTimer * _timelineViewControllerCacheTimer; // +0xc0
    NSMutableDictionary * _dictExportId2FinderDataItem; // +0xc8
    MMTimer * _tlPicPreloadSyncGapTimer; // +0xd0
    MMTimer * _tlPicPreloadDownloadPicTimer; // +0xd8
    NSMutableArray * _tlPicPreloadDownloadPicUrlArr; // +0xe0
    BSTLMainSessionExposeItem * _exposeItemInMainSession; // +0xe8
    MemoryMappedKV * _digestExposeMMKV; // +0xf0
    NSMutableArray * _arrRedDotReportItems; // +0xf8
    unsigned long long _lastRedDotReportTime; // +0x100
    unsigned long long _lastInsertRecCardFakeSvrId; // +0x108
    NSMutableDictionary * _cacheBrandFlowListModelFromSvrSupply; // +0x110
    BSTLExptConfig * _exptConfig; // +0x118
    MMFlutterInstance * _preloadFlutterInstance; // +0x120
    BSTLExptConfig * _preloadExptConfig; // +0x128
    BEFlutterBrandNavigator * _flutterNavigator; // +0x130
    MMTimer * _checkReleaseInstanceTimer; // +0x138
    MMUIViewController * _lastWillAppearVC; // +0x140
    MMUIViewController * _lastWillDisappearVC; // +0x148
    NSDictionary * _lastMainSessionExposeParams; // +0x150
    MemoryMappedKV * _exposeCountSlotKV; // +0x158
    MemoryMappedKV * _exposeRatioSlotKV; // +0x160
}
+ (id)bizUserNameForMsgWrap:(id)arg1;
+ (BOOL)isBrandNotifyNoPrefixNameWithWrapMsg:(id)arg1;
+ (id)getMainSessionNoPrefixContentByMsg:(id)arg1;
+ (BOOL)enableTLMagicBrushAd;
+ (BOOL)enableTLMagicBrushBrand;
+ (BOOL)enableTLMagicBrushBrandRecAd;
+ (id)setOnlySubsFilterBizMsgType;
+ (id)getAffBizManagerShareInstance;
+ (BOOL)isBrandTimelineOpen;
- (void)syncCreationCenterInfoIfNeeded;
- (void)syncCreationCenterInfo:(id)arg1 scene:(unsigned int)arg2;
- (void)updateCreationCenterInfoWithRedDotCount:(long long)arg1 buffer:(id)arg2;
- (long long)getCreationCenterNotifyCount;
- (id)getCreationCenterBuffer;
- (id)getLastLiveNotifyMsg;
- (void)deleteBrandSession:(id)arg1;
- (void)deleteBrandMsg:(id)arg1 msgWrap:(id)arg2;
- (BOOL)deleteMsg:(id)arg1;
- (BOOL)deleteMsgWithMsgId:(unsigned int)arg1;
- (void)notifyAddBrandTimelineMsg:(id)arg1;
- (void)clearMsgExposeSlotKV;
- (void)updateMainSessionExposeOnSlotKv:(id)arg1 pos:(unsigned int)arg2;
- (void)updateMainSessionExposeTimeOnSlotKv:(id)arg1 pos:(unsigned int)arg2 exposeTimeMs:(unsigned int)arg3;
- (id)getDigestExposeInfoByAffMsgId:(unsigned long long)arg1;
- (void)setTimelinePageActive:(BOOL)arg1;
- (BOOL)isTimelinePageActiveNow;
- (void)clearAllTimelineMsgUnreadStatus;
- (void)setListMsgClearUnread:(BOOL)arg1;
- (BOOL)isListMsgClearUnread;
- (void)handleNewMsgByTimeline:(id)arg1;
- (BOOL)isTopItemShowLargeCover:(id)arg1;
- (unsigned long long)preloadPicCountWithMsg:(id)arg1;
- (unsigned long long)sectionShowCount:(id)arg1;
- (BOOL)sectionIsFold:(id)arg1;
- (long long)brandTLCardHeaderJumpAction;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)getNotificationBySvrId:(unsigned long long)arg1 chatName:(id)arg2;
- (void)initBSNotifyCacheDataForFlutter;
- (void)doInitBSNotifyCacheDataForFlutter;
- (id)extractUniqueUserNamesFromNotifyData:(id)arg1;
- (id)getContactByUsername:(id)arg1;
- (void)fillBSContactInfo:(void *)arg1 fromCContact:(id)arg2;
- (BOOL)hasMainSessionRedDot;
- (void)clearMainSessionRedDot;
- (id)lastMessageFromMainSessionCache;
- (id)affSessionBoxInfoFromMainSessionCache;
- (unsigned int)unreadCountFromMainSessionCache;
- (id)getMainSessionExposeItem;
- (void)innerNotifyDeletedMainSessionCache;
- (void)onUpdateMainSession;
- (void)onUpdateMainSessionImmediately;
- (void)onUpdateMainSessionByModifyContactIfNeed:(id)arg1;
- (void)onUpdateMainSessionByDelBrandSession:(id)arg1;
- (void)onUpdateMainSessionByDelMsg:(id)arg1 msgWrap:(id)arg2;
- (void)onUpdateMainSessionByFinishMigration;
- (BOOL)hasDeleteSessionBox;
- (void)markHasDeleteSessionBox:(BOOL)arg1;
- (unsigned int)getBoxLastDeleteTime;
- (BOOL)isMainSessionCacheValid;
- (id)pathForMainSessionCache;
- (void)saveMainSessionCache;
- (void)tryLoadMainSessionCache;
- (void)rebuildMainSessionCacheFromDB;
- (void)updateMainSessionCache;
- (void)updateMainSessionLatestMsgWithSessionBoxInfo:(id)arg1;
- (void)clearMainSessionCacheRedDot;
- (BOOL)needShowUnreadCountOnMainSession;
- (unsigned int)getUnreadArticleCnt;
- (unsigned int)getLastBoxTime;
- (id)genMainFrameSessionInfo;
- (id)genDefaultMainFrameSessionInfo;
- (BOOL)shouldShowNewNotifyMsgCount:(id)arg1;
- (void)addBrandSessionHolderToSessionList;
- (void)onMainSessionExpose:(id)arg1 isExpose:(BOOL)arg2 rowIndex:(unsigned int)arg3;
- (id)buildClientReddotStatusJsonWithSessionInfo:(id)arg1 boxPos:(unsigned int)arg2;
- (void)onMainSessionClick:(id)arg1 rowIndex:(unsigned int)arg2;
- (void)reportBoxPlacedTop:(BOOL)arg1;
- (void)onMainSessionTabSelect;
- (void)onServiceEnterBackgroundInCategoryMainSession;
- (void)onServiceEnterForegroundInCategoryMainSession;
- (void)onNotifyMainTabExposed;
- (void)onNotifyMainTabDisappeared;
- (void)onServiceInitInCategoryMainSession;
- (void)onServiceClearDataInCategoryMainSession;
- (void)MMUIViewControllerWillAppear:(id)arg1;
- (void)notifyPageChangeWithNewVC:(id)arg1;
- (void)notifyPageChangeBackToMain;
- (void)onMinimizeTaskUserTapFloatingView:(id)arg1;
- (void)handleMainSessionExposeWithMsg:(id)arg1 rowIndex:(unsigned int)arg2 sessionInfo:(id)arg3;
- (void)handleMainSessionDisappearWithMsg:(id)arg1 rowIndex:(unsigned int)arg2 sessionInfo:(id)arg3;
- (void)workThread_reportAndUpdateExposeItem:(id)arg1 isExpose:(BOOL)arg2;
- (id)genKeyForSessionInfo:(id)arg1;
- (void)onRebuildSessionStorage;
- (void)onHideSessionWithUserName:(id)arg1;
- (void)onImportMessageSuccess;
- (BOOL)isUserShouldHandled:(id)arg1;
- (BOOL)isMessageShouldHandled:(id)arg1;
- (id)isUserHasSpecalSessionInfo:(id)arg1;
- (void)refreshServiceTriggerToRefresh:(id)arg1;
- (void)__innerAddOrUpdateMainSession:(BOOL)arg1;
- (void)updateExposeTime:(unsigned long long)arg1 currentTime:(unsigned long long)arg2;
- (void)reportMainSessionMsgExpose:(id)arg1 exposeItem:(id)arg2 isExposed:(BOOL)arg3;
- (id)fullFillMainSessionMsg:(id)arg1 sessionInfoNotifyType:(unsigned int)arg2;
- (void)openBrandServiceSessionViewFromSource:(unsigned long long)arg1 curViewController:(id)arg2;
- (void)openBrandServiceSessionViewFromSource:(unsigned long long)arg1 curViewController:(id)arg2 sessionInfo:(id)arg3 extParams:(id)arg4 completion:(id /* block */)arg5;
- (BOOL)isBrandServiceTimelineCacheExist;
- (void)onBrandServiceTimelineEnterWithSessionInfo:(id)arg1 extParams:(id)arg2;
- (void)onBrandServiceTimelineReturn;
- (void)onBrandServiceTimelineCacheTimeOut;
- (void)checkReleaseBrandServiceTLWithNewExptConfig:(id)arg1;
- (void)cleanBrandServiceTimelineViewController;
- (void)createAndSetTimelineViewControllerWithExptConfig:(id)arg1;
- (void)createAndSetTimelineViewController;
- (void)onServiceEnterBackgroundInCategoryMainPage;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (id)getExptConfig;
- (BOOL)isFlutterAff;
- (BOOL)isFlutterAffSupportAd;
- (BOOL)openEcsTLMagicCard;
- (BOOL)openEcsTLSubscribeMagicCard;
- (void)onFlutterExptStrategyRespUpdate;
- (id)genExptConfig;
- (BOOL)__getShowDynamicCard;
- (BOOL)__getShowDynamicCardToast;
- (unsigned int)__getExptShowCardOption;
- (BOOL)__getCanUseDiffList;
- (void)onServiceInitInCategoryFlutter;
- (void)checkInitAffEnvironment;
- (void)initPersonalCenterRedDot;
- (void)scheduleNotification;
- (unsigned int)configAbstractType;
- (void)subscribeEvent;
- (void)unsubscribeEvent;
- (void)onServiceClearDataInCategoryFlutter;
- (void)onServiceEnterForegroundInCategoryFlutter;
- (void)onNotifyAffMainTabExposed:(int)arg1;
- (void)onNotifyAffMainTabDisappeared:(int)arg1;
- (void)onRedDotInfoUpdated:(id)arg1;
- (BOOL)isPreloadFlutterInstanceEnable;
- (void)preloadFlutterInstanceIfNeed;
- (void)__realPreloadFlutterInstanceIfNeed:(id)arg1;
- (id)createFlutterInstanceWithExptConfig:(id)arg1;
- (id)createFlutterInstanceWithExptConfig:(id)arg1 route:(id)arg2;
- (id)__innerCreateFlutterInstanceWithExptConfig:(id)arg1 route:(id)arg2;
- (void)onTimeUpReleasePreloadFlutterInstance;
- (void)releasePreloadFlutterInstance:(unsigned int)arg1;
- (void)__initAffSwitch;
- (BOOL)__getCurAffSwitch;
- (void)resetAffData;
- (unsigned int)flutterVCCacheTime;
- (void)onNotifyAffTLPageInit;
- (void)onNotifyAffTLPageDealloc;
- (void)onNotifyAffEnterTLWithDigestMsgId:(unsigned long long)arg1;
- (void)onNotifyAffExitTL;
- (void)onNotifyAffInsertNewMsg:(id)arg1;
- (void)onNotifyAffDeleteMsg:(id)arg1;
- (void)onNotiftyAffDeleteUserName:(id)arg1;
- (void)preloadMBCardWhenMainSessionExpose;
- (void)onNotifyMagicBrushMainSessionExpose;
- (BOOL)isXmlPushRecommendMsgForAff:(id)arg1;
- (void)onXmlPushReceiveWithType:(id)arg1 content:(id)arg2;
- (void)onIDKeyEvent:(int)arg1 key:(int)arg2 value:(int)arg3;
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceMemoryWarning;
- (void)onMainControllStart;
- (void)onServiceClearData;
- (void)checkIfNeedHandleMsg;
- (id)recoFlowFeedbackCardIdHistory;
- (void)resetMappedKv;
- (id)mappedKV;
- (BOOL)checkCGIBaseRespSuccess:(id)arg1;
- (BOOL)isABTestOpen;
- (BOOL)isRecoFlowDisable;
- (unsigned int)sectionGapToPreload;
- (BOOL)showRecReplaceButton;
- (BOOL)recReasonAboveTitle;
- (unsigned int)loveReasonStyleVersion;
- (BOOL)hideSearchBarWhenEnter;
- (BOOL)shouldHideSearchEntrance;
- (BOOL)showRedPacketCover;
- (unsigned int)getShouldShowFollowBarType;
- (unsigned int)getShouldShowRemainArticleType;
- (unsigned int)getShowNotifyTimelineDisplayType;
- (unsigned int)getShowNotifyTimelineDisplayCount;
- (BOOL)getIsFoldNotificationByContactEnabled;
- (BOOL)getIsFoldWeakNotificationByContactEnabled;
- (BOOL)getIsFoldV2NotificationByContactEnabled;
- (BOOL)getShowSaArticleEntrance;
- (id)getPersonalCenterCellListBuffer;
- (void)sendEcsStrategyRequestIfNeeded;
- (void)onEcsStrategyCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (unsigned int)getShowSubscribeTimelineDisplayCount;
- (unsigned int)getUnreadNotifyExpireSpecifiedTime;
- (id)getEcsNewUiStrategyBuffer;
- (unsigned int)getRequestFrequencyTime;
- (unsigned int)getPoiReportFrequencyTime;
- (unsigned int)getReliableNotifyFrequencyTime;
- (unsigned int)getMasonryPreloadMoreCnt;
- (BOOL)getCanAutoPlayLive;
- (unsigned int)getShowNotifyMsgKeepTime;
- (unsigned int)getRequestMassMsgCount;
- (unsigned int)getNotifyRequestFrequencyTime;
- (unsigned int)getNotifyMsgRequestFrequencyTime;
- (unsigned int)getMainTabRequestFrequencyTime;
- (unsigned int)getRequestCgiBufferMaxSize;
- (id)getLocalEcsTimelineUiStrategyJsonString;
- (unsigned int)getKeepPosEndResortSwitch;
- (BOOL)getSerialResortReqSwitch;
- (BOOL)getFirstPageBufferRefactorSwitch;
- (BOOL)getCloseNewMsgResortSwitch;
- (unsigned int)getNegativeFeedbackUiVersion;
- (BOOL)getEnablePullToRefresh;
- (BOOL)getOutBoxNoWaterfallBufferSwitch;
- (BOOL)getOutBoxPreloadWaterfallNewCgiSwitch;
- (BOOL)getFloatBoxFieldRefactorSwitch;
- (BOOL)getAddMainTabReqSwitch;
- (BOOL)getDisablePhotoContentInBrand;
- (BOOL)getAcceptPhotoContentInBrandService;
- (unsigned int)getDisplayMode;
- (void)setDisplayMode:(unsigned int)arg1;
- (void)updateBrandEcsStrategy:(id)arg1;
- (BOOL)checkHasUiStrategyChanged:(id)arg1;
- (void)handleStrategyResp:(id)arg1;
- (void)updateBSConfig;
- (void)handleUnfocusUser:(id)arg1;
- (void)markCurTLMinExposeSequenceId:(unsigned long long)arg1;
- (void)resetCurTLMinExposeSequenceId;
- (void)onMsgDBInitFinish;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;
- (void)handleNewMsg:(id)arg1 msgWrap:(id)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)onFinishMigrate;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)clearNotifyCache;
- (void)onSessionChanged:(id)arg1;
- (void)onSessionUnreadCountChanged:(id)arg1 prevUnreadCount:(long long)arg2;
- (void)onBrandLivingStatusChange:(id)arg1 isLiving:(BOOL)arg2 finderFeedExportId:(id)arg3;
- (id)getFinderDataItemWithExportId:(id)arg1;
- (void)registerFinderDataItemWithExportId:(id)arg1 finderDataItem:(id)arg2;
- (void)unregisterExportId:(id)arg1;
- (void)onGetBizId1:(long long)arg1 data:(id)arg2;
- (void)setMappedKV:(id)arg1;
- (id)sessionStorage;
- (void)setSessionStorage:(id)arg1;
- (id)mainSessionCache;
- (void)setMainSessionCache:(id)arg1;
- (id)oldSessionCacheData;
- (void)setOldSessionCacheData:(id)arg1;
- (id)m_workerThread;
- (void)setM_workerThread:(id)arg1;
- (BOOL)isMigratingData;
- (void)setIsMigratingData:(BOOL)arg1;
- (BOOL)needUpdateMainSession;
- (void)setNeedUpdateMainSession:(BOOL)arg1;
- (id)arrTmpToAddMsg;
- (void)setArrTmpToAddMsg:(id)arg1;
- (unsigned long long)lastDeleteTooOldTLRecordTime;
- (void)setLastDeleteTooOldTLRecordTime:(unsigned long long)arg1;
- (id)oftenReadBizCache;
- (void)setOftenReadBizCache:(id)arg1;
- (id)oldOftenReadBizCacheData;
- (void)setOldOftenReadBizCacheData:(id)arg1;
- (BOOL)isTimelinePageActive;
- (void)setIsTimelinePageActive:(BOOL)arg1;
- (unsigned long long)currentTLMinExposedSeqId;
- (void)setCurrentTLMinExposedSeqId:(unsigned long long)arg1;
- (id)lastExpandMoreSubscribedMsgDate;
- (void)setLastExpandMoreSubscribedMsgDate:(id)arg1;
- (void)setRecoFlowFeedbackCardIdHistory:(id)arg1;
- (id)brandSessionFullFormattedMessage;
- (void)setBrandSessionFullFormattedMessage:(id)arg1;
- (id)aff_queue;
- (void)setAff_queue:(id)arg1;
- (BOOL)isBSNotifyCacheInited;
- (void)setIsBSNotifyCacheInited:(BOOL)arg1;
- (BOOL)isBSNotifyCacheInitializing;
- (void)setIsBSNotifyCacheInitializing:(BOOL)arg1;
- (id)timelineViewController;
- (void)setTimelineViewController:(id)arg1;
- (id)timelineViewControllerCacheTimer;
- (void)setTimelineViewControllerCacheTimer:(id)arg1;
- (BOOL)shouldCancelRedDotSessionReport;
- (void)setShouldCancelRedDotSessionReport:(BOOL)arg1;
- (BOOL)hasShowFirstGuideLine;
- (void)setHasShowFirstGuideLine:(BOOL)arg1;
- (id)dictExportId2FinderDataItem;
- (void)setDictExportId2FinderDataItem:(id)arg1;
- (unsigned int)serviceInitTs;
- (void)setServiceInitTs:(unsigned int)arg1;
- (BOOL)isTlPicPreloadCgiRequesting;
- (void)setIsTlPicPreloadCgiRequesting:(BOOL)arg1;
- (id)tlPicPreloadSyncGapTimer;
- (void)setTlPicPreloadSyncGapTimer:(id)arg1;
- (unsigned int)tlPicPreloadSyncGapTimerLoopCount;
- (void)setTlPicPreloadSyncGapTimerLoopCount:(unsigned int)arg1;
- (unsigned int)tlPicPreloadUnreadCountBeforeSync;
- (void)setTlPicPreloadUnreadCountBeforeSync:(unsigned int)arg1;
- (id)tlPicPreloadDownloadPicTimer;
- (void)setTlPicPreloadDownloadPicTimer:(id)arg1;
- (unsigned int)tlPicPreloadDownloadPicTimerLoopCount;
- (void)setTlPicPreloadDownloadPicTimerLoopCount:(unsigned int)arg1;
- (id)tlPicPreloadDownloadPicUrlArr;
- (void)setTlPicPreloadDownloadPicUrlArr:(id)arg1;
- (unsigned int)tlPicPreloadDownloadStartTimeSec;
- (void)setTlPicPreloadDownloadStartTimeSec:(unsigned int)arg1;
- (unsigned int)tlPicPreloadDownloadPicCount;
- (void)setTlPicPreloadDownloadPicCount:(unsigned int)arg1;
- (id)exposeItemInMainSession;
- (void)setExposeItemInMainSession:(id)arg1;
- (id)digestExposeMMKV;
- (void)setDigestExposeMMKV:(id)arg1;
- (id)arrRedDotReportItems;
- (void)setArrRedDotReportItems:(id)arg1;
- (unsigned long long)lastRedDotReportTime;
- (void)setLastRedDotReportTime:(unsigned long long)arg1;
- (unsigned long long)lastInsertRecCardFakeSvrId;
- (void)setLastInsertRecCardFakeSvrId:(unsigned long long)arg1;
- (BOOL)hasMainBizCellExposed;
- (void)setHasMainBizCellExposed:(BOOL)arg1;
- (BOOL)msgExposedNeedReloadTableView;
- (void)setMsgExposedNeedReloadTableView:(BOOL)arg1;
- (id)cacheBrandFlowListModelFromSvrSupply;
- (void)setCacheBrandFlowListModelFromSvrSupply:(id)arg1;
- (BOOL)isCurFlutterAffEnable;
- (void)setIsCurFlutterAffEnable:(BOOL)arg1;
- (BOOL)isLastFlutterAffEnable;
- (void)setIsLastFlutterAffEnable:(BOOL)arg1;
- (BOOL)isAffHasInit;
- (void)setIsAffHasInit:(BOOL)arg1;
- (id)exptConfig;
- (void)setExptConfig:(id)arg1;
- (id)preloadFlutterInstance;
- (void)setPreloadFlutterInstance:(id)arg1;
- (id)preloadExptConfig;
- (void)setPreloadExptConfig:(id)arg1;
- (id)flutterNavigator;
- (void)setFlutterNavigator:(id)arg1;
- (id)checkReleaseInstanceTimer;
- (void)setCheckReleaseInstanceTimer:(id)arg1;
- (unsigned int)lastMemoryWarningTs;
- (void)setLastMemoryWarningTs:(unsigned int)arg1;
- (BOOL)isInDelayPreload;
- (void)setIsInDelayPreload:(BOOL)arg1;
- (BOOL)shouldPrelayoutMagicCardWhenMainSessionExpose;
- (void)setShouldPrelayoutMagicCardWhenMainSessionExpose:(BOOL)arg1;
- (unsigned int)notifyCount;
- (void)setNotifyCount:(unsigned int)arg1;
- (BOOL)mainSessionExposed;
- (void)setMainSessionExposed:(BOOL)arg1;
- (BOOL)isMainTabOnStackTop;
- (void)setIsMainTabOnStackTop:(BOOL)arg1;
- (BOOL)isBSSessionVisibleInMainSession;
- (void)setIsBSSessionVisibleInMainSession:(BOOL)arg1;
- (BOOL)isBrandSessionVisibleInMainSession;
- (void)setIsBrandSessionVisibleInMainSession:(BOOL)arg1;
- (id)lastWillAppearVC;
- (void)setLastWillAppearVC:(id)arg1;
- (id)lastWillDisappearVC;
- (void)setLastWillDisappearVC:(id)arg1;
- (BOOL)hasSwitchedTab;
- (void)setHasSwitchedTab:(BOOL)arg1;
- (id)lastMainSessionExposeParams;
- (void)setLastMainSessionExposeParams:(id)arg1;
- (BOOL)reportCgiConfig;
- (void)setReportCgiConfig:(BOOL)arg1;
- (id)exposeCountSlotKV;
- (void)setExposeCountSlotKV:(id)arg1;
- (id)exposeRatioSlotKV;
- (void)setExposeRatioSlotKV:(id)arg1;
- (unsigned int)validExposeUpgradeTime;
- (void)setValidExposeUpgradeTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
