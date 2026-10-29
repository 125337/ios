@interface MMFinderLiveMgr : MMUserService <ForwardMessageLogicDelegate, WCImageFullScreenViewControllerNavigatingDelegate, MMServiceProtocol>
{
    BOOL _isGiftCollectEnabled; // +0x8
    BOOL _hasShownSwitchToCellularToast; // +0x9
    BOOL _enableGiftSearch; // +0xa
    BOOL _shouldCheckPaymentJoinGameLiveEnable; // +0xb
    BOOL _isUseRfxPag; // +0xc
    unsigned int _comboBatchSize; // +0x10
    unsigned int _comboBatchTimeoutMs; // +0x14
    FinderLiveGlobalRewardLevel * _currentGlobalRewardLevel; // +0x18
    NSArray * _giftGroupLabels; // +0x20
    NSString * _popularGiftGroupLabel; // +0x28
    NSArray * _packageGiftItemList; // +0x30
    NSArray * _collectGiftItemList; // +0x38
    NSMutableArray * _recentLagTimeStamps; // +0x40
    NSOperationQueue * _precacheQueue; // +0x48
    MMFinderLiveNetQualityMonitor * _netQualityMonitor; // +0x50
    MMFinderLiveStatsReportLogic * _statsReportLogic; // +0x58
    NSRecursiveLock * _lock; // +0x60
    MemoryMappedKV * _mappedKV; // +0x68
    OrderedDictionary * _giftsDict; // +0x70
    NSObject<OS_dispatch_queue> * _workingQueue; // +0x78
    OrderedDictionary * _thirdAppPrefetchQueue; // +0x80
    NSString * _currentPrefetchAppId; // +0x88
    ForwardMessageLogicController * _forwardLogic; // +0x90
    WCFinderLiveAudienceComodityLogReporter * _finderComodityLogReporter; // +0x98
    NSString * _lastTeamId; // +0xa0
    MMFinderLiveTaskId * _lastTaskId; // +0xa8
    NSMutableDictionary * _giftGroupLabel2GiftList; // +0xb0
    NSMutableDictionary * _giftGroupHasMoreDict; // +0xb8
    NSMutableDictionary * _giftGroupLastBufferDict; // +0xc0
    NSMutableDictionary * _giftGroupIdDict; // +0xc8
    NSMutableArray * _qosListForReport; // +0xd0
}
+ (id)collectGiftGroupName;
- (id)init;
- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)loadRfxPAGSwitch;
- (void)tryStartJoinLiveQualityPredict;
- (void)stopJoinLiveQualityPredict;
- (void)tryPrefetchThirdApp:(id)arg1 liveId:(id)arg2;
- (void)batchPrefetchThirdApp:(id)arg1 liveId:(id)arg2;
- (BOOL)checkThirdAppPrefetchQueue;
- (void)loadLiveRewardGiftsAsync;
- (void)deleteAllLiveRewardGiftItemsAsync;
- (void)checkAndClearInvalidRewardGiftsFiles:(id)arg1;
- (void)saveLiveRewardGiftsAsync:(id)arg1;
- (void)loadLiveRewardGiftsResIfNeedAsync:(id)arg1 isPreload:(BOOL)arg2;
- (void)loadLiveRewardGiftsResIfNeed:(id)arg1;
- (void)loadLiveRewardGiftsResIfNeed:(id)arg1 isPreload:(BOOL)arg2;
- (void)loadGiftForegroundPagResource:(id)arg1 isPreload:(BOOL)arg2;
- (void)loadMultiAnimationGiftItemForPagGift:(id)arg1 rewardItem:(id)arg2 isPreload:(BOOL)arg3;
- (void)loadMultiAnimationGiftItemForAttackGift:(id)arg1 rewardItem:(id)arg2 isPreload:(BOOL)arg3;
- (void)loadResourcesForAudienceCustomizableGiftsWithinItems:(id)arg1 isPreload:(BOOL)arg2;
- (void)loadResourcesForAudienceNewCustomizableGiftsWithItems:(id)arg1 isPreload:(BOOL)arg2;
- (void)loadNewCustomizableMagicRewardResourceWithItems:(id)arg1;
- (void)loadNewCustomizableSelectStyleThumbnailWithItems:(id)arg1 isPreload:(BOOL)arg2;
- (void)loadNewCustomizableSelectStylePreviewPagWithItems:(id)arg1 isPreload:(BOOL)arg2;
- (void)loadNewCustomizableComponentValueResourcesWithItems:(id)arg1 isPreload:(BOOL)arg2;
- (void)loadNewCustomizableBackupResourcesWithItems:(id)arg1 isPreload:(BOOL)arg2;
- (void)upsertLiveRewardGiftItemIfNeed:(id)arg1;
- (id)getLiveGiftItemWithProductId:(id)arg1;
- (id)getJoinFansClubGiftItem;
- (id)getLiveGiftItemsInOrder;
- (id)getLiveGiftItemsByGroupName:(id)arg1;
- (void)clearLiveGiftItemsCache;
- (unsigned int)getRewardComboBatchSize;
- (unsigned int)getRewardComboBatchTimeoutMs;
- (BOOL)isGiftSearchEnabled;
- (void)fetchRewardGiftListWithTaskId:(id)arg1 pullScene:(long long)arg2 chooseGift:(BOOL)arg3 completeBlock:(id /* block */)arg4;
- (void)fetchRewardGiftListWithTaskId:(id)arg1 pullScene:(long long)arg2 chooseGift:(BOOL)arg3 freeGiftHandleBlock:(id /* block */)arg4 completeBlock:(id /* block */)arg5;
- (void)printPackageResourceInfo:(id)arg1;
- (void)printGiftList:(id)arg1;
- (BOOL)needCheckMd5ForRewardResource;
- (BOOL)useCdnComMgrToDownloadRewardRes;
- (unsigned int)getRewardReceivingQueueMaxSize;
- (unsigned int)getRewardNotificationTimeout;
- (unsigned int)getRewardComboTimeout;
- (id)getLiveRewardQuotaInfo;
- (void)saveLiveRewardQuotaInfo:(id)arg1;
- (void)updateCurrentGlobalRewardLevel:(id)arg1;
- (BOOL)shouldUserQuickSendAnimation:(id)arg1;
- (id)finderDataItemTryCurrentLiveWithAnchor:(id)arg1;
- (id)widgetParametersForInitParams:(id)arg1 entranceMessageInfo:(id)arg2;
- (id)widgetParametersForAnchor:(id)arg1 ecSource:(id)arg2 entranceMessageInfo:(id)arg3;
- (id)widgetParametersForPanelBuilder:(id /* block */)arg1;
- (void)viewImageWithURLString:(id)arg1 downloadedImage:(id)arg2 fromView:(id)arg3;
- (id)getCurrentViewController;
- (id)finderComodityLogReporter;
- (id)getGameFrameSetLayoutConfigs;
- (id)getGameFrameSetXLabConfig:(BOOL *)arg1;
- (void)setDebugGameFrameSetXLabConfigStr:(id)arg1;
- (id)getDebugGameFrameSetXLabConfigStr;
- (id)mappedKV;
- (void)saveLastJoinPaymentGameStatus:(id)arg1 taskId:(id)arg2;
- (void)checkPaymentGameStatus;
- (BOOL)shouldEnableAutoResumeNavigationBarForTranslateImage;
- (id)getTopViewControllerForWCImageFullScreenViewController;
- (id)getTopNavigationControllerForWCImageFullScreenViewController;
- (id)getVisibleViewControllerForWCImageFullScreenViewController;
- (BOOL)useRfxPag;
- (void)showDisclaimerAlertIfPlatFormShouldShowForProduct:(id)arg1 key:(id)arg2 completion:(id /* block */)arg3;
- (void)showDisclaimerAlertIfPlatFormShouldShow:(BOOL)arg1 platFormName:(id)arg2 key:(id)arg3 completion:(id /* block */)arg4;
- (id)statsReportLogic;
- (void)recordLiveQoSInfo:(id)arg1 scene:(unsigned int)arg2;
- (id)getLiveQosListForReport;
- (long long)currentNetworkQuality;
- (BOOL)isNetworkSwitchingToCellular;
- (id)currentCellularStateString;
- (void)fetchMoreGiftItemsForGroup:(id)arg1 withTaskId:(id)arg2 completeBlock:(id /* block */)arg3;
- (BOOL)hasMoreGiftItemsForGroup:(id)arg1;
- (id)getLastBufferForGroup:(id)arg1;
- (BOOL)isGiftCollected:(id)arg1;
- (void)collectGiftWithTaskId:(id)arg1 giftItem:(id)arg2 opType:(unsigned int)arg3 completeBlock:(id /* block */)arg4;
- (void)applyCollectGiftMutationLocally:(id)arg1 opType:(unsigned int)arg2;
- (id)currentGlobalRewardLevel;
- (void)setCurrentGlobalRewardLevel:(id)arg1;
- (id)giftGroupLabels;
- (void)setGiftGroupLabels:(id)arg1;
- (id)popularGiftGroupLabel;
- (void)setPopularGiftGroupLabel:(id)arg1;
- (id)packageGiftItemList;
- (void)setPackageGiftItemList:(id)arg1;
- (id)collectGiftItemList;
- (void)setCollectGiftItemList:(id)arg1;
- (BOOL)isGiftCollectEnabled;
- (void)setIsGiftCollectEnabled:(BOOL)arg1;
- (id)recentLagTimeStamps;
- (void)setRecentLagTimeStamps:(id)arg1;
- (id)precacheQueue;
- (void)setPrecacheQueue:(id)arg1;
- (id)netQualityMonitor;
- (void)setNetQualityMonitor:(id)arg1;
- (void)setStatsReportLogic:(id)arg1;
- (BOOL)hasShownSwitchToCellularToast;
- (void)setHasShownSwitchToCellularToast:(BOOL)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void)setMappedKV:(id)arg1;
- (id)giftsDict;
- (void)setGiftsDict:(id)arg1;
- (id)workingQueue;
- (void)setWorkingQueue:(id)arg1;
- (unsigned int)comboBatchSize;
- (void)setComboBatchSize:(unsigned int)arg1;
- (unsigned int)comboBatchTimeoutMs;
- (void)setComboBatchTimeoutMs:(unsigned int)arg1;
- (BOOL)enableGiftSearch;
- (void)setEnableGiftSearch:(BOOL)arg1;
- (id)thirdAppPrefetchQueue;
- (void)setThirdAppPrefetchQueue:(id)arg1;
- (id)currentPrefetchAppId;
- (void)setCurrentPrefetchAppId:(id)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (void)setFinderComodityLogReporter:(id)arg1;
- (BOOL)shouldCheckPaymentJoinGameLiveEnable;
- (void)setShouldCheckPaymentJoinGameLiveEnable:(BOOL)arg1;
- (id)lastTeamId;
- (void)setLastTeamId:(id)arg1;
- (id)lastTaskId;
- (void)setLastTaskId:(id)arg1;
- (id)giftGroupLabel2GiftList;
- (void)setGiftGroupLabel2GiftList:(id)arg1;
- (id)giftGroupHasMoreDict;
- (void)setGiftGroupHasMoreDict:(id)arg1;
- (id)giftGroupLastBufferDict;
- (void)setGiftGroupLastBufferDict:(id)arg1;
- (id)giftGroupIdDict;
- (void)setGiftGroupIdDict:(id)arg1;
- (id)qosListForReport;
- (void)setQosListForReport:(id)arg1;
- (BOOL)isUseRfxPag;
- (void)setIsUseRfxPag:(BOOL)arg1;
- (void).cxx_destruct;
@end
