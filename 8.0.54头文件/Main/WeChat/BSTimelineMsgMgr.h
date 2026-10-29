@interface BSTimelineMsgMgr : MMUserService <IMMNewSessionMgrFilterExt, WXGImportMessageNotification, MMSessionRefreshExt, IMsgExt, IMMNewSessionMgrExt, IContactMgrExt, PBMessageObserverDelegate, MMTipsViewControllerDelegate, MMServiceProtocol, MMImageLoaderObserver>
{
    BOOL _isMigratingData; // +0x8
    BOOL _needUpdateMainSession; // +0x9
    BOOL _isTimelinePageActive; // +0xa
    BOOL _hasShowFirstGuideLine; // +0xb
    BOOL _isTlPicPreloadCgiRequesting; // +0xc
    BOOL _hasMainBizCellExposed; // +0xd
    BOOL _msgExposedNeedReloadTableView; // +0xe
    BOOL _isCurFlutterAffEnable; // +0xf
    BOOL _isLastFlutterAffEnable; // +0x10
    BOOL _isAffHasInit; // +0x11
    BOOL _isInDelayPreload; // +0x12
    BOOL _isCurrentResorting; // +0x13
    BOOL _mainSessionExposed; // +0x14
    unsigned int _serviceInitTs; // +0x18
    unsigned int _tlPicPreloadSyncGapTimerLoopCount; // +0x1c
    unsigned int _tlPicPreloadUnreadCountBeforeSync; // +0x20
    unsigned int _tlPicPreloadDownloadPicTimerLoopCount; // +0x24
    unsigned int _tlPicPreloadDownloadStartTimeSec; // +0x28
    unsigned int _tlPicPreloadDownloadPicCount; // +0x2c
    unsigned int _lastMemoryWarningTs; // +0x30
    unsigned int _curResortCgiEvenId; // +0x34
    unsigned int _validExposeUpgradeTime; // +0x38
    MemoryMappedKV * _mappedKV; // +0x40
    MMBaseSessionStorage * _sessionStorage; // +0x48
    BrandSessionCache * _mainSessionCache; // +0x50
    NSData * _oldSessionCacheData; // +0x58
    NSObject<OS_dispatch_queue> * _m_workerThread; // +0x60
    NSMutableArray * _arrTmpToAddMsg; // +0x68
    unsigned long long _lastDeleteTooOldTLRecordTime; // +0x70
    BSTOftenReadBizCache * _oftenReadBizCache; // +0x78
    NSData * _oldOftenReadBizCacheData; // +0x80
    unsigned long long _currentTLMinExposedSeqId; // +0x88
    NSDate * _lastExpandMoreSubscribedMsgDate; // +0x90
    NSMutableSet * _recoFlowFeedbackCardIdHistory; // +0x98
    NSString * _brandSessionFullFormattedMessage; // +0xa0
    MMTimer * _tlPicPreloadSyncGapTimer; // +0xa8
    MMTimer * _tlPicPreloadDownloadPicTimer; // +0xb0
    NSMutableArray * _tlPicPreloadDownloadPicUrlArr; // +0xb8
    BSTLMainSessionExposeItem * _exposeItemInMainSession; // +0xc0
    MemoryMappedKV * _digestExposeMMKV; // +0xc8
    NSMutableArray * _arrRedDotReportItems; // +0xd0
    unsigned long long _lastRedDotReportTime; // +0xd8
    unsigned long long _lastInsertRecCardFakeSvrId; // +0xe0
    NSMutableDictionary * _cacheBrandFlowListModelFromSvrSupply; // +0xe8
    BSTLExptConfig * _exptConfig; // +0xf0
    MMFlutterInstance * _preloadFlutterInstance; // +0xf8
    BSTLExptConfig * _preloadExptConfig; // +0x100
    BEFlutterBrandNavigator * _flutterNavigator; // +0x108
    MMTimer * _checkReleaseInstanceTimer; // +0x110
    unsigned long long _curResortScene; // +0x118
    BrandMsgResortContext * _curResortContext; // +0x120
    BrandResortConfig * _curResortConfig; // +0x128
    BTResortPerformanceItem * _resortPerformance; // +0x130
    id /* block */ _tlResortCompleteBlock; // +0x138
    NSDictionary * _lastMainSessionExposeParams; // +0x140
    WCEliminatedSlotMMKV * _exposeCountSlotKV; // +0x148
    WCEliminatedSlotMMKV * _exposeRatioSlotKV; // +0x150
}
+ (id)bizUserNameForMsgWrap:(id)arg1;
+ (BOOL)isBrandNotifyNoPrefixNameWithWrapMsg:(id)arg1;
+ (id)getMainSessionNoPrefixContentByMsg:(id)arg1;
+ (BOOL)enableTLMagicBrushAd;
+ (BOOL)enableTLMagicBrushBrand;
+ (BOOL)enableTLMagicBrushBrandRec;
+ (BOOL)enableTLMagicBrushBrandRecAd;
+ (id)setOnlySubsFilterBizMsgType;
+ (int)genAffTaskId;
+ (id)getAffBizManagerShareInstance;
+ (BOOL)isBrandTimelineOpen;
- (void)syncCreationCenterInfoIfNeeded;
- (void)syncCreationCenterInfo:(id)arg1 scene:(unsigned int)arg2;
- (void)updateCreationCenterInfoWithRedDotCount:(long long)arg1 buffer:(id)arg2;
- (long long)getCreationCenterNotifyCount;
- (id)getCreationCenterBuffer;
- (id)getLastLiveNotifyMsg;
- (id)getMsgByMsgSvrId:(unsigned long long)arg1 userName:(id)arg2;
- (id)getLastTimelineMsgByCreateTime;
- (id)getLastTimelineMsgByCreateTime:(id)arg1 changeForDisplay:(BOOL)arg2;
- (id)getLastTimelineMsgByCreateTime:(id)arg1;
- (id)getTopTimelineMsg:(unsigned int)arg1;
- (void)deleteBrandSession:(id)arg1;
- (void)deleteBrandMsg:(id)arg1 msgWrap:(id)arg2;
- (void)asyncDeleteMsg:(id)arg1 shouldUpdateMainSession:(BOOL)arg2;
- (BOOL)deleteMsg:(id)arg1;
- (BOOL)deleteMsgWithMsgId:(unsigned int)arg1;
- (void)notifyAddBrandTimelineMsg:(id)arg1;
- (void)clearMsgExposeSlotKV;
- (void)updateMainSessionExposeOnSlotKv:(id)arg1 pos:(unsigned int)arg2;
- (void)updateMainSessionExposeTimeOnSlotKv:(id)arg1 pos:(unsigned int)arg2 exposeTimeMs:(unsigned int)arg3;
- (id)getDigestExposeInfoByAffMsgId:(unsigned long long)arg1;
- (void)setTimelinePageActive:(BOOL)arg1;
- (unsigned int)getTimelineUnreadMsgCount;
- (void)clearAllTimelineMsgUnreadStatus;
- (void)setListMsgClearUnread:(BOOL)arg1;
- (BOOL)isListMsgClearUnread;
- (void)handleNewMsgByTimeline:(id)arg1;
- (void)tryDeleteTooOldRecordIfNeed;
- (BOOL)isTopItemShowLargeCover:(id)arg1;
- (unsigned long long)preloadPicCountWithMsg:(id)arg1;
- (unsigned long long)sectionShowCount:(id)arg1;
- (BOOL)sectionIsFold:(id)arg1;
- (long long)brandTLCardHeaderJumpAction;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)OnUnReadCountChange:(id)arg1;
- (BOOL)isCurrentOutsideResortScene;
- (void)checkIfCancelResortCGI;
- (void)updateResortStrategyConfig:(id)arg1;
- (id)getResortStrategyConfig;
- (BOOL)isResortDebugForceOpen;
- (BOOL)isOpenRedDotSample;
- (void)reportResortIdKey:(unsigned int)arg1;
- (void)reportResortIdKey:(unsigned int)arg1 value:(unsigned int)arg2;
- (void)reportTryResortFromScene:(unsigned long long)arg1;
- (void)tryRefreshTLPicPreloadStrategyIfNeed;
- (void)handleRefreshTLPicPreloadStrategyRsp:(id)arg1;
- (void)onRefreshStrategyFinish:(BOOL)arg1;
- (void)tryPreloadTLPicIfNeed:(unsigned int)arg1;
- (void)onAfterSyncGap;
- (void)startDownloadPicTask;
- (void)onAfterDownloadPicGap;
- (void)onPreloadFinish;
- (BOOL)isPicPreloadSwitchOpen:(unsigned int)arg1;
- (void)resetPicPreloadState;
- (void)reportWithScene:(unsigned int)arg1;
- (BOOL)canShowPersonalCenter;
- (BOOL)useSimulatedNativePersonalCenter;
- (id)getNotificationBySvrId:(unsigned long long)arg1 chatName:(id)arg2;
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
- (void)onUpdateMainSessionByModMsg:(id)arg1 msgWrap:(id)arg2;
- (void)onUpdateMainSessionByFinishMigration;
- (BOOL)hasDeleteSessionBox;
- (void)markHasDeleteSessionBox:(BOOL)arg1;
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
- (id)genMainFrameSessionInfo;
- (BOOL)shouldShowNewNotifyMsgCount:(id)arg1;
- (void)addBrandSessionHolderToSessionList;
- (void)onMainSessionExpose:(id)arg1 isExpose:(BOOL)arg2 rowIndex:(unsigned int)arg3;
- (void)onMainSessionClick:(id)arg1 rowIndex:(unsigned int)arg2;
- (void)onMainSessionTabSelect;
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
- (void)reportMainSessionMsgExpose:(id)arg1 exposeItem:(id)arg2 isExposed:(BOOL)arg3;
- (id)fullFillMainSessionMsg:(id)arg1 sessionInfoNotifyType:(unsigned int)arg2;
- (void)reportRedDotExposeIfNeeded:(id)arg1 exposeItem:(id)arg2;
- (void)aggregateRedDotSessionInfo:(id)arg1 actType:(unsigned int)arg2;
- (id)makeRedDotReportItem:(id)arg1 actType:(unsigned int)arg2;
- (id)getExptConfig;
- (BOOL)isExptNotShowFinderLiveBar;
- (BOOL)isExptNotShowAd;
- (BOOL)isFlutterAff;
- (BOOL)isFlutterAffSupportAd;
- (BOOL)isFlutterAffSupportRecCard;
- (BOOL)resortBandwidthOptSwitch;
- (void)onFlutterExptStrategyRespUpdate;
- (id)genExptConfig;
- (BOOL)__getShowDynamicCard;
- (BOOL)__getShowDynamicCardToast;
- (unsigned int)__getTLRenderMode;
- (unsigned int)__getTLDataMode;
- (BOOL)__getIsInControlGroup;
- (unsigned int)__getExptShowCardOption:(unsigned int)arg1 dataMode:(unsigned int)arg2;
- (BOOL)__getCanUseDiffList;
- (unsigned long long)__getResortSceneBitSwitch;
- (void)onServiceInitInCategoryFlutter;
- (void)checkInitAffEnvironment;
- (unsigned int)configAbstractType;
- (void)onServiceClearDataInCategoryFlutter;
- (void)onServiceEnterForegroundInCategoryFlutter;
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
- (id)affConfigString;
- (unsigned int)flutterVCCacheTime;
- (unsigned int)getAffMsgUnreadCount;
- (id)getAffLastMsg;
- (unsigned int)getAffLastMsgTime;
- (id)getAffMsgByMsgId:(unsigned long long)arg1;
- (id)getTopAffMsgByCount:(unsigned int)arg1;
- (void)onNotifyAffTLPageInit;
- (void)onNotifyAffTLPageDealloc;
- (void)onNotifyAffEnterTLWithDigestMsgId:(unsigned long long)arg1;
- (void)onNotifyAffExitTL;
- (void)onNotifyAffInsertNewMsg:(id)arg1;
- (void)onNotifyAffDeleteMsg:(id)arg1;
- (void)onNotiftyAffDeleteUserName:(id)arg1;
- (void)onNotifyMagicBrushMainSessionExpose;
- (BOOL)isXmlPushRecommendMsgForAff:(id)arg1;
- (void)onXmlPushReceiveWithType:(id)arg1 content:(id)arg2;
- (void)onDataChangeEvent:(int)arg1;
- (void)onInitDoneEvent:(BOOL)arg1;
- (void)onIDKeyEvent:(int)arg1 key:(int)arg2 value:(int)arg3;
- (void)onKVEvent:(int)arg1 value:(id)arg2;
- (void)onFirstScreenResortStartEvent:(unsigned long long)arg1;
- (void)onFirstScreenResortEndEvent:(unsigned long long)arg1;
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceEnterForeground;
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
- (unsigned int)timeGapOfRecDataRequest;
- (BOOL)finderLiveAutoPlayEnable;
- (BOOL)hideSearchBarWhenEnter;
- (BOOL)shouldHideSearchEntrance;
- (BOOL)showRedPacketCover;
- (BOOL)canEnterBrandFlowList;
- (BOOL)canBrandTimelineVideoItemAutoPlay;
- (BOOL)canBrandTimelineVideoItemAutoPlayByNetworkStatus;
- (BOOL)enableFinderLiveDualCardAutoPlay;
- (BOOL)isProductEvaluationCardJumpFakeNativeWeApp;
- (unsigned int)getShouldShowFollowBarType;
- (unsigned int)getShouldShowRemainArticleType;
- (unsigned int)getDisplayMode;
- (void)setDisplayMode:(unsigned int)arg1;
- (void)sendBizStrategyRequest:(BOOL)arg1;
- (void)handleStrategyResp:(id)arg1;
- (void)markCurTLMinExposeSequenceId:(unsigned long long)arg1;
- (void)resetCurTLMinExposeSequenceId;
- (BOOL)canMsgTopRightUseRecReason;
- (void)onMsgDBInitFinish;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;
- (void)handleNewMsg:(id)arg1 msgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)onFinishMigrate;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)onSessionChanged:(id)arg1;
- (void)onSessionUnreadCountChanged:(id)arg1 prevUnreadCount:(long long)arg2;
- (void)onBrandLivingStatusChange:(id)arg1 isLiving:(BOOL)arg2 finderFeedExportId:(id)arg3;
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
- (BOOL)hasShowFirstGuideLine;
- (void)setHasShowFirstGuideLine:(BOOL)arg1;
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
- (BOOL)isCurrentResorting;
- (void)setIsCurrentResorting:(BOOL)arg1;
- (unsigned long long)curResortScene;
- (void)setCurResortScene:(unsigned long long)arg1;
- (unsigned int)curResortCgiEvenId;
- (void)setCurResortCgiEvenId:(unsigned int)arg1;
- (id)curResortContext;
- (void)setCurResortContext:(id)arg1;
- (id)curResortConfig;
- (void)setCurResortConfig:(id)arg1;
- (id)resortPerformance;
- (void)setResortPerformance:(id)arg1;
- (id /* block */)tlResortCompleteBlock;
- (void)setTlResortCompleteBlock:(id /* block */)arg1;
- (BOOL)mainSessionExposed;
- (void)setMainSessionExposed:(BOOL)arg1;
- (id)lastMainSessionExposeParams;
- (void)setLastMainSessionExposeParams:(id)arg1;
- (id)exposeCountSlotKV;
- (void)setExposeCountSlotKV:(id)arg1;
- (id)exposeRatioSlotKV;
- (void)setExposeRatioSlotKV:(id)arg1;
- (unsigned int)validExposeUpgradeTime;
- (void)setValidExposeUpgradeTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

