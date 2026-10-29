@interface MMFinderLiveMgr : MMUserService <ForwardMessageLogicDelegate, WCImageFullScreenViewControllerNavigatingDelegate, INetworkStatusMgrExt, ICdnComMgrExt, MMServiceProtocol>
{
    BOOL _shouldCheckPaymentJoinGameLiveEnable; // +0x8
    BOOL _isWeakNetFromMars; // +0x9
    BOOL _isUseRfxPag; // +0xa
    unsigned int _comboBatchSize; // +0xc
    unsigned int _comboBatchTimeoutMs; // +0x10
    unsigned int _lastRTTFromMars; // +0x14
    unsigned int _lastNetworkQualityEvaluateTime; // +0x18
    unsigned int _lastRecordQoSTime; // +0x1c
    FinderLiveGlobalRewardLevel * _currentGlobalRewardLevel; // +0x20
    NSArray * _giftGroupLabels; // +0x28
    NSString * _popularGiftGroupLabel; // +0x30
    NSArray * _packageGiftItemList; // +0x38
    NSMutableArray * _recentLagTimeStamps; // +0x40
    NSOperationQueue * _precacheQueue; // +0x48
    NSRecursiveLock * _lock; // +0x50
    MemoryMappedKV * _mappedKV; // +0x58
    OrderedDictionary * _giftsDict; // +0x60
    NSObject<OS_dispatch_queue> * _workingQueue; // +0x68
    OrderedDictionary * _thirdAppPrefetchQueue; // +0x70
    NSString * _currentPrefetchAppId; // +0x78
    ForwardMessageLogicController * _forwardLogic; // +0x80
    WCFinderLiveAudienceComodityLogReporter * _finderComodityLogReporter; // +0x88
    NSString * _lastTeamId; // +0x90
    MMFinderLiveTaskId * _lastTaskId; // +0x98
    NSMutableDictionary * _giftGroupLabel2GiftList; // +0xa0
    NSString * _lastNetworkType; // +0xa8
    long long _lastNetworkQuality; // +0xb0
    NSMutableArray * _qosListForReport; // +0xb8
    NSMutableArray * _qosListForNetworkQuality; // +0xc0
}
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
- (id)getLiveGiftItemWithProductId:(id)arg1;
- (id)getJoinFansClubGiftItem;
- (id)getLiveGiftItemsInOrder;
- (id)getLiveGiftItemsByGroupName:(id)arg1;
- (void)clearLiveGiftItemsCache;
- (unsigned int)getRewardComboBatchSize;
- (unsigned int)getRewardComboBatchTimeoutMs;
- (void)fetchRewardGiftListWithTaskId:(id)arg1 pullScene:(long long)arg2 completeBlock:(id /* block */)arg3;
- (void)fetchRewardGiftListWithTaskId:(id)arg1 pullScene:(long long)arg2 freeGiftHandleBlock:(id /* block */)arg3 completeBlock:(id /* block */)arg4;
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
- (void)recordRecentLagTimeStamp;
- (unsigned int)getRecentLagCountFromTime:(unsigned long long)arg1;
- (void)recordLiveQoSInfo:(id)arg1 scene:(unsigned int)arg2;
- (id)getLiveQosListForReport;
- (void)evaluateLiveNetworkQuality;
- (long long)currentNetworkQuality;
- (void)onNetworkWeakChanged:(BOOL)arg1 currentRTT:(unsigned int)arg2;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)OnCdnDownload:(id)arg1;
- (id)currentGlobalRewardLevel;
- (void)setCurrentGlobalRewardLevel:(id)arg1;
- (id)giftGroupLabels;
- (void)setGiftGroupLabels:(id)arg1;
- (id)popularGiftGroupLabel;
- (void)setPopularGiftGroupLabel:(id)arg1;
- (id)packageGiftItemList;
- (void)setPackageGiftItemList:(id)arg1;
- (id)recentLagTimeStamps;
- (void)setRecentLagTimeStamps:(id)arg1;
- (id)precacheQueue;
- (void)setPrecacheQueue:(id)arg1;
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
- (BOOL)isWeakNetFromMars;
- (void)setIsWeakNetFromMars:(BOOL)arg1;
- (unsigned int)lastRTTFromMars;
- (void)setLastRTTFromMars:(unsigned int)arg1;
- (id)lastNetworkType;
- (void)setLastNetworkType:(id)arg1;
- (long long)lastNetworkQuality;
- (void)setLastNetworkQuality:(long long)arg1;
- (unsigned int)lastNetworkQualityEvaluateTime;
- (void)setLastNetworkQualityEvaluateTime:(unsigned int)arg1;
- (id)qosListForReport;
- (void)setQosListForReport:(id)arg1;
- (id)qosListForNetworkQuality;
- (void)setQosListForNetworkQuality:(id)arg1;
- (unsigned int)lastRecordQoSTime;
- (void)setLastRecordQoSTime:(unsigned int)arg1;
- (BOOL)isUseRfxPag;
- (void)setIsUseRfxPag:(BOOL)arg1;
- (void).cxx_destruct;
@end

