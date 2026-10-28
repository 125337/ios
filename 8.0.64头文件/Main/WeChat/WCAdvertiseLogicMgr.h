@interface WCAdvertiseLogicMgr : MMObject <MMLiteAppExt, PBMessageObserverDelegate, WCCanvasDynamicDataLoaderDelegate, TextStatePublishViewControllerDelegate>
{
    NSMutableArray * arrUpdateItemList; // +0x8
    BOOL bUpdating; // +0x10
    unsigned int updateTime; // +0x14
    id <WCLogicMgrDelegate> m_delegate; // +0x18
    NSMutableDictionary * adOperationLogicCache; // +0x20
    NSString * _adDeviceInfo; // +0x28
    WCCanvasDynamicDataLoader * _dynamicDataLoader; // +0x30
    NSMutableDictionary * _expressionCanvasJumpInfoDic; // +0x38
    NSMutableDictionary * _feedMediaHeightCache; // +0x40
    WCAdDynamicUpdateLogic * _adDynamicUpdateLogic; // +0x48
    WCAdInfoProxyLogic * _adInfoProxyLogic; // +0x50
    NSMutableSet * _weAppContactLoadedSet; // +0x58
    NSMutableSet * _weAppPkgLoadedSet; // +0x60
    WCAdGamePlayablePrerenderInfo * _lastPrerenderedGamePlayableInfo; // +0x68
    NSMutableSet * _consecutiveAdReportedSet; // +0x70
    NSMutableSet * _onlyContainAdReportedSet; // +0x78
    MemoryMappedKV * _finderEncryptedIdCache; // +0x80
    NSMutableDictionary * _adDetailUpdateTimeDic; // +0x88
    NSMutableDictionary * _adAppointmentQueryTimeDic; // +0x90
    WCAdLoadCanvasLogic * _adLoadCanvasLogic; // +0x98
    WCAdDB * _adDb; // +0xa0
    WCAdStatePublishReportData * _statePublishReportData; // +0xa8
    WCAdQrCodeScanLogic * _adQrCodeScanLogic; // +0xb0
    WWKFContactOpLogic * _kfContactOpLogic; // +0xb8
    WCAdDynamicCanvasLogic * _adDynamicCanvasLogic; // +0xc0
}
- (id)init;
- (void)dealloc;
- (void)updateAdvertiseDataList:(id)arg1 reportScene:(int)arg2;
- (void)updateAdvertiseDataItemDetail:(id)arg1 source:(int)arg2;
- (void)updateDataItemDetail:(id)arg1 source:(int)arg2 RemindFriendsInfoData:(id)arg3;
- (BOOL)deleteCommentWithAdvertiseItemID:(id)arg1 commentID:(id)arg2 source:(int)arg3 context:(id)arg4;
- (BOOL)unLikeAdvertiseDataItem:(id)arg1 source:(int)arg2;
- (void)unInterestAdvertiseDataItem:(id)arg1 dislikeReasonIdList:(id)arg2;
- (void)unInterestOpenIMTimeLineDataItem:(id)arg1;
- (void)spanUnInterestAdvertiseReasonListForData:(id)arg1;
- (BOOL)requestForSnsADObjectOpRequest:(id)arg1;
- (BOOL)requestForSnsADObjectOpRequest:(id)arg1 context:(id)arg2;
- (BOOL)responseForSnsADObjectOpResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)onOperation:(id)arg1 finished:(long long)arg2 context:(id)arg3;
- (id)fetchDataItemForTimelineWithADObject:(id)arg1;
- (id)fetchDataItemForDetailWithSnsADObject:(id)arg1 snsObject:(id)arg2;
- (id)fetchDataItemForDetailWithOriginSnsObject:(id)arg1;
- (id)fetchDataItemWithDynamicSnsADObject:(id)arg1 snsObject:(id)arg2;
- (id)fetchDataItemForAtFriendWithADObject:(id)arg1;
- (id)fetchDataItemForAtFriendWithDynamicSnsADObject:(id)arg1 remindFriendsInfo:(id)arg2;
- (id)feedMediaHeightCache;
- (double)fetchFeedMediaHeightWithItem:(id)arg1 forWidth:(double)arg2;
- (void)setFeedMediaHeightWithItem:(id)arg1 height:(double)arg2 forWidth:(double)arg3;
- (void)clearFeedMediaHeightCacheWithItemID:(id)arg1;
- (void)clearFeedMediaHeightCache;
- (void)requestForSnsADObjectDetailRequest:(id)arg1 FromScene:(unsigned int)arg2 source:(int)arg3 syncBuffer:(id)arg4 RemindFriendsInfoData:(id)arg5 reportScene:(int)arg6;
- (unsigned int)getNetworkType;
- (BOOL)responseForSnsADObjectDetailResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)checkAdUpdateDetailWaitingList;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)doChannelMsgReport:(id)arg1 channelId:(id)arg2;
- (void)doChannelMsgReportContent:(id)arg1 channelId:(id)arg2;
- (void)handleDoChannelMsgReportResponse:(id)arg1 Event:(unsigned int)arg2;
- (id)genAdOperationLogicKeyBySnsId:(id)arg1 scene:(unsigned long long)arg2;
- (void)addAdOperationLogic:(id)arg1 withKey:(id)arg2 type:(long long)arg3;
- (void)deleteAdOperationLogic:(id)arg1;
- (void)deleteAdOperationLogic:(id)arg1 type:(long long)arg2;
- (void)deleteAllAdOperationLogics;
- (void)closePrerenderWeAppIfNeed;
- (void)filterAdOperationLogicsByVisibleSnsIdList:(id)arg1 scene:(unsigned long long)arg2;
- (id)getAdOperationLogic:(id)arg1 type:(long long)arg2;
- (void)sendSubscriptionMsg:(id)arg1 aid:(unsigned long long)arg2 appType:(int)arg3 waUsername:(id)arg4;
- (void)sendSubscriptionMsgResp:(id)arg1 Event:(unsigned int)arg2;
- (void)preloadAdResAfterRecvAtFriendMention:(id)arg1;
- (void)sendAdAppointmentReqWithUxInfo:(id)arg1 opType:(int)arg2 appointmentId:(unsigned long long)arg3 phoneNumber:(id)arg4 limitQueryFrequency:(BOOL)arg5 completionHandler:(id /* block */)arg6;
- (void)handleAdAppointmentResp:(id)arg1 Event:(unsigned int)arg2;
- (void)updateAdChainInfo:(id)arg1;
- (void)handleUpdateAdChainWordingResponse:(id)arg1 dataItem:(id)arg2;
- (void)commonDynamicUpdateWithType:(unsigned int)arg1 params:(id)arg2 dataItem:(id)arg3 aid:(id)arg4 uxinfo:(id)arg5 needSpeedy:(BOOL)arg6;
- (void)handleCommonDynamicUpdateResponse:(id)arg1;
- (void)tryToPreloadCanvasResourceOnAdExposure:(id)arg1;
- (void)preloadH5OnAdExposure:(id)arg1;
- (void)updateWeAppRelievedBuy:(id)arg1;
- (void)jumpCanvasFromExpression:(id)arg1;
- (void)showLoadingFromVC:(id)arg1;
- (void)showLoadingAutoHideAfter:(double)arg1 fromVC:(id)arg2;
- (void)hideLoadingFromVC:(id)arg1;
- (void)stopLoadingWithFailText:(id)arg1 fromVC:(id)arg2;
- (id)dynamicDataLoader;
- (void)onCanvasServerDataReturn:(id)arg1 errorCode:(int)arg2 forLoadParams:(id)arg3;
- (id)adDynamicUpdateLogic;
- (void)adDynamicUpdate:(id)arg1;
- (void)forceUpdateWeAppLiveInfo:(id)arg1;
- (void)forceUpdateFinderTopicInfo:(id)arg1;
- (void)forceUpdateRandomPickCardInfoWithItem:(id)arg1;
- (void)clearLogicCacheForItem:(id)arg1;
- (id)adInfoProxyLogic;
- (void)updateAsyncAvatarInfoWithItem:(id)arg1;
- (id)fetchAsyncAvatarUrlForUsername:(id)arg1;
- (id)fetchAsyncAvatarImageForUsername:(id)arg1;
- (void)tryToPreloadWeAppForAdResource:(id)arg1;
- (void)tryToPrerenderGamePlayableInfo:(id)arg1;
- (BOOL)shouldStartWeappPrerender:(id)arg1 dataItem:(id)arg2;
- (void)startWeappPrerender:(id)arg1 dataItem:(id)arg2;
- (void)tryToPreloadWeAppForAdCanvas:(id)arg1;
- (void)tryToPreloadWeApp:(id)arg1 preloadWeAppPkg:(BOOL)arg2;
- (BOOL)checkExistAndSetIfNotExist:(id)arg1 inDataSet:(id)arg2;
- (void)updateFinderLiveInfo:(id)arg1;
- (id)checkAdMinGap:(id)arg1;
- (id)removeConsecutiveAd:(id)arg1;
- (void)clearAdOperationLogicForTidList:(id)arg1;
- (void)clearAdOperationLogicForTid:(id)arg1;
- (void)openCustomerService:(id)arg1 uxInfo:(id)arg2 inCanvas:(BOOL)arg3 viewController:(id)arg4 showLoading:(BOOL)arg5;
- (void)openCustomerService:(id)arg1 uxInfo:(id)arg2 inCanvas:(BOOL)arg3 viewController:(id)arg4 showLoading:(BOOL)arg5 completeBlock:(id /* block */)arg6;
- (void)handleCustomerServiceSignResponse:(id)arg1;
- (void)tryToPrefetchFinderObjectId:(id)arg1;
- (void)tryToPreloadFinderFeed:(id)arg1;
- (id)fetchFinderFeedInfoList:(id)arg1;
- (void)addFinderFeedInfo:(id)arg1 toDic:(id)arg2;
- (void)prefetchFinderObjectId:(id)arg1 nonceId:(id)arg2 finderAdData:(id)arg3;
- (void)preloadFinderFeed:(id)arg1;
- (id)getFinderFeedObjectIdFromCache:(id)arg1;
- (void)tryToPreloadFinderLive:(id)arg1;
- (id)fetchFinderLiveInfoList:(id)arg1;
- (void)addFinderLiveInfo:(id)arg1 toDic:(id)arg2;
- (id)adLoadCanvasLogic;
- (void)loadCanvas:(id)arg1 uxInfo:(id)arg2 canvasScene:(unsigned int)arg3 canvasDynamicInfo:(id)arg4 compatibleMode:(BOOL)arg5 completeBlock:(id /* block */)arg6;
- (void)tryToPreloadPullCanvas:(id)arg1 fromDetail:(BOOL)arg2;
- (void)tryToPreloadShareCanvasWhenReceiveShare:(id)arg1 canvasScene:(unsigned int)arg2 shouldPreloadRes:(BOOL)arg3;
- (void)savePullRecordInfo:(id)arg1 sessionKey:(id)arg2 isAsync:(BOOL)arg3;
- (void)setPullRecordInvalid:(id)arg1 isAsync:(BOOL)arg2 snsId:(id)arg3;
- (id)fetchPullRecordList:(unsigned int)arg1;
- (void)cleanPullRecordInfo;
- (id)fetchLocalTimelineAdInfoList:(unsigned int)arg1;
- (id)fetchLocalTimelineTopAdInfoList:(unsigned int)arg1;
- (void)reportAdGap:(int)arg1;
- (void)cleanAdDatabase;
- (void)jumpStatePublish:(id)arg1 adInfo:(id)arg2 snsId:(id)arg3 scene:(int)arg4;
- (void)onTextStatePublishedWithIconId:(id)arg1 iconDescription:(id)arg2;
- (void)onTextStatePublishCancelled;
- (id)adQrCodeScanLogic;
- (void)tryToScanQrCode:(id)arg1 adInfo:(id)arg2 snsId:(id)arg3 scene:(int)arg4 subScene:(int)arg5 showLoading:(BOOL)arg6 scanResultBlock:(id /* block */)arg7;
- (void)tryToGetContactInfoWithJumpParams:(id)arg1 searchScene:(unsigned long long)arg2 subScene:(int)arg3;
- (void)onGetWeWorkContactDoneWithContact:(id)arg1 jumpParams:(id)arg2;
- (id)kfContactOpLogic;
- (void)fetchCustomerServiceContactWithUrl:(id)arg1 scene:(int)arg2 entityId:(id)arg3 completeBlock:(id /* block */)arg4;
- (void)notifyAdDataItemChanged:(id)arg1;
- (void)tryToUpdateAdDetailOnAdExposure:(id)arg1;
- (id)getAdDynamicCanvasLogic;
- (void)prepareAdDynamicCanvasOnExposure:(id)arg1;
- (void)onLiteAppUpdateFinish:(unsigned long long)arg1 appId:(id)arg2 appInfo:(id)arg3;
- (BOOL)checkAdDetailUpdateInterval:(id)arg1;
- (void)reportUpdateAdDetail:(id)arg1 reportScene:(int)arg2 beforeFilter:(BOOL)arg3;
- (void)updateOnTimeLineExposure:(id)arg1;
- (void)updateOnTimeLineDetailExposure:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)adDeviceInfo;
- (void)setAdDeviceInfo:(id)arg1;
- (void)setDynamicDataLoader:(id)arg1;
- (id)expressionCanvasJumpInfoDic;
- (void)setExpressionCanvasJumpInfoDic:(id)arg1;
- (void)setFeedMediaHeightCache:(id)arg1;
- (void)setAdDynamicUpdateLogic:(id)arg1;
- (void)setAdInfoProxyLogic:(id)arg1;
- (id)weAppContactLoadedSet;
- (void)setWeAppContactLoadedSet:(id)arg1;
- (id)weAppPkgLoadedSet;
- (void)setWeAppPkgLoadedSet:(id)arg1;
- (id)lastPrerenderedGamePlayableInfo;
- (void)setLastPrerenderedGamePlayableInfo:(id)arg1;
- (id)consecutiveAdReportedSet;
- (void)setConsecutiveAdReportedSet:(id)arg1;
- (id)onlyContainAdReportedSet;
- (void)setOnlyContainAdReportedSet:(id)arg1;
- (id)finderEncryptedIdCache;
- (void)setFinderEncryptedIdCache:(id)arg1;
- (id)adDetailUpdateTimeDic;
- (void)setAdDetailUpdateTimeDic:(id)arg1;
- (id)adAppointmentQueryTimeDic;
- (void)setAdAppointmentQueryTimeDic:(id)arg1;
- (void)setAdLoadCanvasLogic:(id)arg1;
- (id)adDb;
- (void)setAdDb:(id)arg1;
- (id)statePublishReportData;
- (void)setStatePublishReportData:(id)arg1;
- (void)setAdQrCodeScanLogic:(id)arg1;
- (void)setKfContactOpLogic:(id)arg1;
- (id)adDynamicCanvasLogic;
- (void)setAdDynamicCanvasLogic:(id)arg1;
- (void).cxx_destruct;
@end
