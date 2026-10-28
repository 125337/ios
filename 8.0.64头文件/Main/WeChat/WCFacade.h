@interface WCFacade : MMUserService <IContactMgrExt, MMConfigMgrExt, INewABTestMgrExt, PBMessageObserverDelegate, IExptServiceExt, MMConfigMgrExt, WCTimelineDelegate, MMCleanCacheMgrExt, WCImageFullScreeViewMgrExt, WCPassSecurityVerificationMgrExt, MMServiceProtocol, WCBGImgLogicNotity, WCDownloadMgrDelegate, WCCommentUploadMgrDelegate, WCUploadMgrDelegate, WCNotificationCenterMgrDelegate, WCHomepageDelegate, WCLogicMgrDelegate, WCFacadeExt, WCBGRecommendMgrDelegate, WCGroupMgrExt, WCAdvertiseCommentUploadMgrDelegate, IMMFontMgrExt, WCPreloadLogicDelegate, IMsgExt, WCCdnDownloadImageDelegate>
{
    MyWCDB * m_database; // +0x8
    WCAdvertiseDataHelper * m_adDataHelper; // +0x10
    NSMutableArray * m_timelineWithLocalDatas; // +0x18
    NSMutableDictionary * m_dicTimelineDataItem; // +0x20
    NSMutableDictionary * m_dicTimeLineDataUICache; // +0x28
    NSMutableDictionary * m_dicUserCommentsUICache; // +0x30
    NSMutableDictionary * m_dicDynamicLenImageUICache; // +0x38
    NSMutableDictionary * m_postedItemLocalIdToServerIdMap; // +0x40
    WCUploadMgr * m_uploadMgr; // +0x48
    WCBGImgLogic * m_bgImgLogic; // +0x50
    WCTimelineMgr * m_timelineMgr; // +0x58
    WCPreloadLogicMgr * m_preloadLogicMgr; // +0x60
    WCDownloadMgr * m_downloadMgr; // +0x68
    NSMutableDictionary * m_imageDownloadCdnMgrDictionary; // +0x70
    NSMutableDictionary * m_videoDownloadCdnMgrDictionary; // +0x78
    WCMomentsForwardMgr * m_forwardMgr; // +0x80
    WCMicroMerchantFoldMgr * m_microMerchantFoldMgr; // +0x88
    WCMomentsStarManager * m_starManager; // +0x90
    WCMomentsFinderShareManager * m_finderShareManager; // +0x98
    WCMomentsFinderRecommendationManager * m_finderRecommendationManager; // +0xa0
    WCCommentUploadMgr * m_commentUploadMgr; // +0xa8
    WCAdvertiseCommentUploadMgr * m_advertiseCommentUploadMgr; // +0xb0
    WCNotificationCenterMgr * m_messageMgr; // +0xb8
    WCLogicMgr * m_logicMgr; // +0xc0
    WCAdvertiseLogicMgr * m_advertiseLogicMgr; // +0xc8
    WCBGRecommendMgr * m_bgMaster; // +0xd0
    WCStrangerCommentMgr * m_strangerCommentMgr; // +0xd8
    WCMomentsContentDiscoverer * m_contentDiscoverer; // +0xe0
    NSMutableDictionary * m_togetherManagerDictionary; // +0xe8
    WCGroupMgr * m_groupMgr; // +0xf0
    WCPatternCacheMgr * m_patternCacheMgr; // +0xf8
    WCInputTextCacheMgr * m_inputTextCacheMgr; // +0x100
    WCSnsABTestMgr * m_snsABTestMgr; // +0x108
    WCSnsLocalCacheMgr * m_snsLocalCacheMgr; // +0x110
    WCCanvasTypeMgr * m_canvasTypeMgr; // +0x118
    WCCanvasCommonFileLoader * m_canvasCommonFileLoader; // +0x120
    NSMutableDictionary * m_homepageMgrDic; // +0x128
    NSMutableSet * m_deletedItemSet; // +0x130
    NSMutableSet * m_notShowImgTypeSet; // +0x138
    NSMutableDictionary * m_dicSightStatusCache; // +0x140
    NSMutableDictionary * m_dicSightDownloadProgressCache; // +0x148
    NSMutableDictionary * m_dicSightViewCache; // +0x150
    NSMutableSet * m_setAddedIDForClickedRatio; // +0x158
    NSMutableSet * m_setAddedIDForThumbLoadedEfficency; // +0x160
    WCBrowseInfo * m_browseInfo; // +0x168
    NSMutableDictionary * m_dicStatExposureFeedId; // +0x170
    NSMutableDictionary * m_originalArticleClickInfo; // +0x178
    int m_currentPage; // +0x180
    WCDataItem * m_latestSeenDataItem; // +0x188
    WCOperationSetting * m_operSetting; // +0x190
    unsigned long long startEnterBackGroundTime; // +0x198
    unsigned int m_clickCameraTime; // +0x1a0
    WCDataItem * m_dataItemForHotVideo; // +0x1a8
    WCDataItem * m_dataItemForHotImage; // +0x1b0
    WCRealFeedExposureItem * realFeedExposureItem; // +0x1b8
    MemoryMappedKV * realFeedExposureItemMMkv; // +0x1c0
    NSMutableSet * m_exopureFeedSet; // +0x1c8
    NSString * m_lastExitSnsLastFeedId; // +0x1d0
    NSString * m_currExposeFeedId; // +0x1d8
    BOOL m_hadPushExposeLastSnsFeed; // +0x1e0
    unsigned int m_finderControllerNFeed; // +0x1e4
    unsigned long long m_hadPushEventFeedCount; // +0x1e8
    WCAccessSecurityVerificationSessionMgr * m_accessSecurityVerificationSessionMgr; // +0x1f0
    WCMomentsPostStateMgr * m_postStateMgr; // +0x1f8
    WCTimelineEmoticonManager * m_emoticonMgr; // +0x200
    NSMutableDictionary * _homepageYearMonthsDict; // +0x208
    NSRecursiveLock * _lock; // +0x210
    WCFacadeDynamicConfig * _dynamicConfig; // +0x218
    WCDataItem * _badgeDataItemThatEnteredTimeline; // +0x220
    long long _lastReadMessageCreateTime; // +0x228
    NSString * _timelineListLogIdentifier; // +0x230
    WCAdDynamicCanvasDeeplinkUtil * _adCanvasDeeplinkUtil; // +0x238
}
+ (void)reportSnsPostDragPic:(int)arg1 snsPostSave:(int)arg2 draftSaveType:(unsigned long long)arg3 sessionType:(long long)arg4;
+ (id)genReportStrOfSnsPostDragPic:(int)arg1 snsPostSave:(int)arg2 draftSaveType:(unsigned long long)arg3 sessionType:(long long)arg4;
+ (BOOL)saveReportStrOfSnsPostDragPic:(int)arg1 snsPostSave:(int)arg2 draftSaveType:(unsigned long long)arg3 sessionType:(long long)arg4;
+ (void)cleanSavedReportStr;
+ (void)reportSaveStr;
+ (void)markHadShownTogetherHistoryEntranceForUsername:(id)arg1;
+ (BOOL)hadShownTogetherHistoryEntranceForUsername:(id)arg1;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;
- (void)LLUpload_onBeforeAddUploadTask:(id)arg1;
- (void)LLUpload_onAfterUploadPendingTask:(id)arg1;
- (void)LLUpload_onAfterAddUploadTask:(id)arg1;
- (void)LLUpload_onAfterUploadTaskFinished:(id)arg1;
- (void)LLUpload_onAfterUploadTaskFailed:(id)arg1;
- (void)LLUpload_onAfterUploadTaskRestarted:(id)arg1;
- (void)LLDelete_onDeleteDataItem:(id)arg1;
- (void)LLDelete_onSyncMessageDeleteFeed:(id)arg1 itemID:(id)arg2;
- (void)LLDelete_onDeleteDataItem:(id)arg1 itemID:(id)arg2;
- (id)makeDeleteHolder:(id)arg1 itemID:(id)arg2;
- (void)LLComment_onBeforeReturnDataItem:(id)arg1;
- (void)LLComment_onBeforeReturnStrangerDataItem:(id)arg1 partner:(id)arg2;
- (void)LLComment_onBeforeReturnUnCommentDataItem:(id)arg1 comment:(id)arg2;
- (void)LLComment_onPrepareCancelLikeWithDataItem:(id)arg1 removedLikeItem:(id *)arg2;
- (void)LLComment_onFailCancelLikeWithDataItem:(id)arg1 removedLikeItem:(id)arg2;
- (void)logEnterTimeline:(BOOL)arg1 unreadMessageCount:(unsigned int)arg2;
- (void)logExitTimeline:(BOOL)arg1 hasNewFeedInServer:(BOOL)arg2 startReadId:(id)arg3 endReadId:(id)arg4 waitLoadedFeedId:(id)arg5 browseFeedCount:(unsigned int)arg6 browseNewFeedCount:(unsigned int)arg7;
- (id)asyncLogOpInfoForNormalPostFeed;
- (id)asyncLogOpInfoForForwardPostFeed:(id)arg1;
- (void)logLikeFeed:(id)arg1;
- (void)logCommentFeed:(id)arg1;
- (void)logRefCommentFeed:(id)arg1 refComment:(id)arg2;
- (id)asyncLogForwardToGroup:(id)arg1 groupName:(id)arg2 url:(id)arg3;
- (id)asyncLogForwardToFriend:(id)arg1 friendName:(id)arg2 url:(id)arg3;
- (id)asyncLogFavFeed:(id)arg1 url:(id)arg2;
- (void)logTranslateFeedContent:(id)arg1;
- (void)logTranslateFeedComment:(id)arg1 comment:(id)arg2;
- (void)logClickToViewBigImage:(id)arg1 mediaId:(id)arg2 pictureIndex:(int)arg3;
- (void)logClickToViewSight:(id)arg1 mediaId:(id)arg2;
- (void)logClickToViewUrl:(id)arg1;
- (void)logClickNickNameToProfile:(id)arg1 userName:(id)arg2;
- (void)logClickHeadImageToProfile:(id)arg1 userName:(id)arg2;
- (void)logChangeAlbumBkgImage:(id)arg1;
- (void)logClickPoiInfo:(id)arg1;
- (void)logClickAdPoiInfo:(id)arg1;
- (void)logClickUnreadMessage:(unsigned int)arg1;
- (void)logClickFailFeed:(id)arg1 index:(unsigned int)arg2 failCount:(unsigned int)arg3;
- (void)logRefreshHead:(unsigned int)arg1;
- (void)logRefreshNextPage:(unsigned int)arg1 hasEnoughLocalData:(BOOL)arg2;
- (void)logClickToPlayMusic:(id)arg1 musicInfo:(id)arg2;
- (void)logDeleteFeed:(id)arg1;
- (void)logShowFloatView:(id)arg1;
- (void)logStartCommentFeed:(id)arg1;
- (void)logStartRefCommentFeed:(id)arg1 refComment:(id)arg2;
- (id)asyncLogEndViewUrl:(id)arg1;
- (void)logEndViewBigImage:(id)arg1 downloadedPictureCount:(unsigned int)arg2;
- (void)logEndViewSight:(id)arg1;
- (id)asyncLogEndViewAlbum:(id)arg1;
- (id)asyncLogOpInfoForForwardAttachVideo:(id)arg1;
- (void)logDataListChanged:(unsigned int)arg1 startFeed:(id)arg2 endFeed:(id)arg3;
- (void)logAdContext:(id)arg1 adPreFeedList:(id)arg2 adNextFeedList:(id)arg3;
- (void)logSimpleScreenShot;
- (BOOL)isDataItemShowDetail:(id)arg1;
- (void)setDataItem:(id)arg1 showDetail:(BOOL)arg2;
- (void)removeTipData:(id)arg1 layerId:(id)arg2;
- (void)replaceTipData:(id)arg1 dataItem:(id)arg2 layerId:(id)arg3;
- (id)getLayerIdForDataItem:(id)arg1;
- (id)getShowTip:(id)arg1 layerId:(id)arg2;
- (BOOL)isFirstTip:(id)arg1 layerId:(id)arg2;
- (BOOL)hitActionListShowTip:(id)arg1 layerId:(id)arg2;
- (BOOL)hiddenTip:(id)arg1 dataItem:(id)arg2;
- (id)getTipData:(id)arg1 layerId:(id)arg2;
- (double)contentDescHeightForWidth:(double)arg1 withDataItem:(id)arg2 isSpringStyle:(BOOL)arg3;
- (double)contentDescHeightForWidth:(double)arg1 withDataItem:(id)arg2 isShowDetail:(BOOL)arg3 isSpringStyle:(BOOL)arg4;
- (void)setContentDescHeight:(double)arg1 forWidth:(double)arg2 withDataItem:(id)arg3 isSpringStyle:(BOOL)arg4;
- (void)setContentDescHeight:(double)arg1 forWidth:(double)arg2 withDataItem:(id)arg3 isShowDetail:(BOOL)arg4 isSpringStyle:(BOOL)arg5;
- (void)removeContentDescHeightForWidth:(double)arg1 withDataItem:(id)arg2;
- (id)layoutStylesOfContentDescWithDataItem:(id)arg1 width:(double)arg2 isShowDetail:(BOOL)arg3 scene:(int)arg4 isSpringStyle:(BOOL)arg5;
- (void)setLayoutStylesOfContentDesc:(id)arg1 withDataItem:(id)arg2 width:(double)arg3 isShowDetail:(BOOL)arg4 scene:(int)arg5 isSpringStyle:(BOOL)arg6;
- (void)prepareCalculateLayoutContentDescWithDataItem:(id)arg1;
- (void)removeUICacheWithDataItem:(id)arg1;
- (void)removeUICacheWithDataItemID:(id)arg1;
- (void)removeUICacheForAllDataItems;
- (double)likeUserHeightForWidth:(double)arg1 withDataItem:(id)arg2 isSpringStyle:(BOOL)arg3;
- (void)setlikeUserHeight:(double)arg1 forWidth:(double)arg2 withDataItem:(id)arg3 isSpringStyle:(BOOL)arg4;
- (id)layoutStylesOfLikeUserWithDataItem:(id)arg1 width:(double)arg2 isSpringStyle:(BOOL)arg3;
- (void)setLayoutStylesOfLikeUser:(id)arg1 withDataItem:(id)arg2 width:(double)arg3 isSpringStyle:(BOOL)arg4;
- (void)removeCachesOfLikeUserWithDataItemId:(id)arg1;
- (void)removeCachesOfContentWithDataItemId:(id)arg1;
- (id)genUserCommentKey:(id)arg1;
- (id)getUserCommentsUICacheFor:(id)arg1 addIfNotHave:(BOOL)arg2;
- (BOOL)isAdSpecialCommentStyles:(id)arg1 inDataItem:(id)arg2;
- (double)contentHeightWithUserComment:(id)arg1 width:(double)arg2 isTiger:(BOOL)arg3 inDataItem:(id)arg4 isSpringIcon:(BOOL)arg5;
- (void)setContentHeight:(double)arg1 withUserComment:(id)arg2 width:(double)arg3 isTiger:(BOOL)arg4 inDataItem:(id)arg5 isSpringIcon:(BOOL)arg6;
- (void)removeContentHeightForWidth:(double)arg1 withDataItem:(id)arg2 isTiger:(BOOL)arg3 inDataItem:(id)arg4 isSpringIcon:(BOOL)arg5;
- (id)layoutStylesOfContentWithUserComment:(id)arg1 width:(double)arg2 isTiger:(BOOL)arg3 inDataItem:(id)arg4 isSpringIcon:(BOOL)arg5;
- (void)setLayoutStylesOfContent:(id)arg1 withUserComment:(id)arg2 width:(double)arg3 isTiger:(BOOL)arg4 inDataItem:(id)arg5 isSpringIcon:(BOOL)arg6;
- (void)prepareCalculateLayoutContentWithUserComment:(id)arg1 fromDataItem:(id)arg2;
- (void)removeCachesOfContentWithUserComment:(id)arg1;
- (void)removeUICacheWithUserComment:(id)arg1;
- (void)removeUICacheForAllUserComments;
- (double)transContentHeightWithUserComment:(id)arg1 width:(double)arg2;
- (void)setTransContentHeight:(double)arg1 withUserComment:(id)arg2 width:(double)arg3;
- (void)removeTransContentHeightForWidth:(double)arg1 withDataItem:(id)arg2;
- (id)layoutStylesOfTransContentWithUserComment:(id)arg1 width:(double)arg2;
- (void)setLayoutStylesOfTransContent:(id)arg1 withUserComment:(id)arg2 width:(double)arg3;
- (void)removeCachesOfTransContentWithUserComment:(id)arg1;
- (void)removeCachesByContact:(id)arg1;
- (void)setDynamicImage:(id)arg1 name:(id)arg2 dynamicLen:(long long)arg3;
- (id)dynamicImageForName:(id)arg1 dynamicLen:(long long)arg2;
- (id)dynamicImageKey:(id)arg1 dynamicLen:(long long)arg2;
- (void)onModifyContact:(id)arg1;
- (void)onMMDynamicConfigUpdated;
- (long long)getPostPrivacy;
- (id)getLastPostGroups;
- (void)setPostPrivacy:(long long)arg1;
- (void)setPostPrivacy:(long long)arg1 withLabelNames:(id)arg2;
- (id)groupMgr;
- (id)getGroupByID:(id)arg1;
- (BOOL)isUserInGroup:(id)arg1 GroupID:(id)arg2;
- (void)updateAllGroups;
- (BOOL)canUpdateAllGroups;
- (id)getAllGroups;
- (id)getCustomGroups;
- (void)localDeleteAllGroups;
- (void)addMembers:(id)arg1 toGroup:(id)arg2 withScene:(long long)arg3;
- (void)removeMembers:(id)arg1 fromGroup:(id)arg2 withScene:(long long)arg3;
- (void)deleteGroup:(id)arg1;
- (void)onWCGroupUpdated;
- (void)onWCGroupUpdatedReturn:(BOOL)arg1;
- (void)onWCGroupAddMemberReturn:(BOOL)arg1 group:(id)arg2;
- (void)onWCGroupRemoveMemberReturn:(BOOL)arg1 group:(id)arg2;
- (void)onWCDeleteGroupReturn:(BOOL)arg1 groupID:(id)arg2;
- (id)loadLastPostPrivacySetting;
- (id)filterInvalidLastPostPrivacySetting:(id)arg1;
- (void)saveLastPostPrivacySetting:(id)arg1;
- (id)getLastPostPrivacySettingPath;
- (id)loadLastStatusPostPrivacySetting;
- (id)filterInvalidLastStatusPostPrivacySetting:(id)arg1;
- (void)saveLastStatusPostPrivacySetting:(id)arg1;
- (id)getLastStatusPostPrivacySettingPath;
- (void)doMomentsPostReport:(id)arg1 finishAction:(long long)arg2;
- (void)logPreviewBigImageCount:(unsigned int)arg1 totalCount:(unsigned int)arg2;
- (void)tryLogClickBigImage:(id)arg1 clickIndex:(unsigned int)arg2 clickCount:(unsigned int)arg3 downloadCount:(unsigned int)arg4 scanIndexArrayStr:(id)arg5 scaleOutIndexArrayStr:(id)arg6 scaleInIndexArrayStr:(id)arg7 IsCollapsed:(unsigned int)arg8;
- (void)removeItemForClickBigImage:(id)arg1;
- (BOOL)shouldLogSmallImageLoadedEfficency:(id)arg1;
- (void)tryLogSmallImageLoadedEfficency:(id)arg1 loadedResult:(unsigned int)arg2 costTime:(unsigned int)arg3 loadedCount:(unsigned int)arg4;
- (void)tryLogPreloadSucForSmallImageLoadedEfficency:(id)arg1;
- (void)tryLogBigImageLoadedEfficency:(id)arg1 mediaItem:(id)arg2 loadedResult:(unsigned int)arg3 costTime:(unsigned int)arg4 loadReason:(int)arg5 type:(long long)arg6;
- (void)tryLogPreloadImageResult;
- (void)removePreloadItemForBigImage:(id)arg1;
- (void)onClickCameraButtonForStat;
- (void)onClickPostButtonForStat:(BOOL)arg1 contentType:(unsigned int)arg2;
- (BOOL)hasFirstClickDataItemForPreloadBigImage:(id)arg1;
- (void)removeFirstClickDataItemForPreloadBigImage:(id)arg1;
- (void)addFirstClickDataItemForPreloadBigImage:(id)arg1;
- (void)removeSucPreloadInfoForItemId:(id)arg1;
- (void)tryReportABTestResult;
- (void)logABTestResult:(id)arg1 dataItemId:(id)arg2 tipActionResult:(id)arg3;
- (void)tryLogABTestResultTime:(id)arg1 dataItemId:(id)arg2 startTime:(BOOL)arg3 endTime:(BOOL)arg4;
- (void)logSnsSightClick:(id)arg1 sightVideoExist:(BOOL)arg2 autoPlay:(BOOL)arg3;
- (void)reportSightPlayWithURL:(id)arg1 AndSnsPublishId:(id)arg2 AndIsCollapsed:(int)arg3;
- (void)reportWeishiItem:(id)arg1;
- (void)reportIfForwardByWeishi:(id)arg1;
- (void)reportUploadResult:(BOOL)arg1 dataItem:(id)arg2;
- (void)reportForShowLongVideoSelectActionSheet;
- (void)reportForLongVideoSelectActionSheet:(id)arg1 clickedAtIndex:(long long)arg2;
- (void)reportForLongVideoSelectWithTitle:(id)arg1;
- (void)reportForWCTimeLineEditVideoPageExpose:(unsigned int)arg1;
- (void)processHomePage:(id)arg1 snsYearMonthInfos:(id)arg2;
- (id)hompePageYearMonthDatas:(id)arg1;
- (id)hompePageFirstItemIdInDB:(id)arg1;
- (BOOL)hompePage:(id)arg1 fetchDataBeforeJumpToItemId:(unsigned long long)arg2;
- (BOOL)hompePageJumpState:(id)arg1;
- (BOOL)hompePageUpdatePrePage:(id)arg1;
- (void)hompePageClearJumpState:(id)arg1;
- (BOOL)hompePagePrePageDayEnd:(id)arg1;
- (id)homepageYearMonthsDict;
- (id)pathForExposureDicCache;
- (BOOL)saveExposureFeedIdDict:(id)arg1;
- (id)getExposureFeedIdDic;
- (BOOL)hadExposuredWithFeedId:(id)arg1;
- (void)recordFeedExposureWithFeedId:(id)arg1 appId:(id)arg2 isFold:(BOOL)arg3;
- (void)tryReportData;
- (void)reportData;
- (void)exposurStatExitTimeLine;
- (BOOL)needUploadData;
- (unsigned int)getMaxCacheTime;
- (unsigned int)getMaxCacheLogCount;
- (void)recordRealFeedExposureWithFeedId:(id)arg1;
- (BOOL)saveRealFeedExposureItem;
- (id)loadRealFeedExposureItem;
- (void)exposeSnsFeed:(id)arg1;
- (void)notifyFinderExposeFirstSnsFeed;
- (void)notifyFinderExitSnsTimeline;
- (void)checkIsExposeLastSnsFeedEvent:(id)arg1;
- (void)checkIsPushExposeSnsFeedEvent:(unsigned long long)arg1;
- (int)switchInfo;
- (void)setSwitchInfo:(int)arg1;
- (void)WCFacadeBrowseInfoReportOnRegisterExt;
- (void)WCFacadeBrowseInfoReportOnUnRegisterExt;
- (void)WCFacadeBrowseInfoReportOnTerminate;
- (void)WCFacadeBrowseInfoReportOnBackground;
- (void)WCFacadeBrowseInfoReportOnForeground;
- (id)getBrowseInfo;
- (void)onTimeLineViewStateChange:(int)arg1;
- (void)onAlbumViewForMySelfStateChange:(int)arg1;
- (void)onAlbumViewForOthersStateChange:(int)arg1;
- (void)onMessageListViewStateChange:(int)arg1;
- (void)onNewPostViewStateChange:(int)arg1;
- (void)onFullScreenImageViewStateChange:(int)arg1;
- (void)onFullScreenSightViewStateChange:(int)arg1;
- (void)onWebViewForURL:(id)arg1 Ad:(BOOL)arg2 StreamVideo:(BOOL)arg3 StateChange:(int)arg4;
- (void)onMusicPlayerViewStateChange:(int)arg1;
- (void)onFinderFeedViewStateChange:(int)arg1;
- (void)onMPArticleViewStateChange:(int)arg1;
- (void)onExternalArticleViewStateChange:(int)arg1;
- (void)onPOIDetailForDataItem:(id)arg1 StateChange:(int)arg2;
- (void)onAdFullScreenImageViewStateChange:(int)arg1;
- (void)onAdDetailPageStateChange:(int)arg1;
- (void)onAdFullScreenSightStateChange:(int)arg1;
- (void)onAdForwardSteamVideoStateChange:(int)arg1;
- (void)onAdLongVideoViewStateChange:(int)arg1;
- (void)onAdCanvasViewStateChange:(int)arg1;
- (void)onAdForwardCanvasViewStateChange:(int)arg1;
- (void)logUserAction:(int)arg1 onScene:(int)arg2 forFeed:(id)arg3;
- (void)reportBrowseInfo;
- (id)getTimeLineWebViewExtraInfo:(id)arg1;
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (id)database;
- (id)adDataHelper;
- (id)adCanvasDeeplinkUtil;
- (id)downloadMgr;
- (id)imageDownloadCdnMgrForCategory:(long long)arg1;
- (void)enumerateLoadedImageDownloadCdnMgrsUsingBlock:(id /* block */)arg1;
- (id)videoDownloadCdnMgrForCategory:(long long)arg1;
- (void)enumerateLoadedVideoDownloadCdnMgrsUsingBlock:(id /* block */)arg1;
- (id)forwardMgr;
- (id)starManager;
- (id)finderShareManager;
- (id)finderRecommendationManager;
- (id)timelineMgr;
- (id)getTimelineMgr;
- (id)uploadMgr;
- (id)postStateMgr;
- (id)emoticonMgr;
- (id)accessSecurityVerificationSessionMgr;
- (id)commentMgr;
- (id)messageMgrWithDB;
- (id)strangerCommentMgrWithDB;
- (id)logicMgr;
- (id)advertiseLogicMgr;
- (id)homepageMgr:(id)arg1 type:(long long)arg2;
- (id)bgImgLogic;
- (id)preloadLogic;
- (id)bgMaster;
- (id)canvasTypeMgr;
- (id)patternCacheMgr;
- (id)inputTextCacheMgr;
- (id)snsABTestMgr;
- (id)snsLocalCacheMgr;
- (id)canvasCommonFileLoader;
- (id)deletedItemSet;
- (void)markDataItemDeleted:(id)arg1;
- (BOOL)isDataItemDeleted:(id)arg1;
- (BOOL)isShowThumbForType:(long long)arg1;
- (BOOL)LL_onBeforeReturnDataItem:(id)arg1;
- (void)modifyDataItem:(id)arg1 notify:(BOOL)arg2;
- (void)modifyLocalDataItem:(id)arg1 function:(long long)arg2 notify:(BOOL)arg3;
- (id)findDataItemInCacheByItemID:(id)arg1;
- (BOOL)isValidRecommendUsr:(id)arg1;
- (void)beginHomepage:(id)arg1;
- (void)endHomepage:(id)arg1;
- (id)getHomepageData:(id)arg1;
- (BOOL)updateHomePageHead:(id)arg1;
- (BOOL)updateHomePageHead:(id)arg1 source:(long long)arg2;
- (BOOL)updateHomePageTail:(id)arg1;
- (void)beginHomepage:(id)arg1 type:(long long)arg2;
- (void)endHomepage:(id)arg1 type:(long long)arg2;
- (BOOL)updateHomepageHead:(id)arg1 type:(long long)arg2;
- (BOOL)updateHomepageHead:(id)arg1 type:(long long)arg2 source:(long long)arg3;
- (BOOL)updateHomepageTail:(id)arg1 type:(long long)arg2;
- (id)innerGetHomepage:(id)arg1 type:(long long)arg2;
- (id)getCurrentUserHomepage:(long long)arg1;
- (id)getHomepageVisibleData:(id)arg1 type:(long long)arg2;
- (id)getHomepageData:(id)arg1 type:(long long)arg2;
- (void)beginMediaHomepage:(id)arg1 type:(long long)arg2;
- (void)endMediaHomepage:(id)arg1 type:(long long)arg2;
- (id)getMediaHomepageData:(id)arg1 type:(long long)arg2;
- (BOOL)updateMediaHomepageHead:(id)arg1 type:(long long)arg2;
- (BOOL)updateMediaHomepageTail:(id)arg1 type:(long long)arg2;
- (void)onHomepageMgr:(id)arg1 updateWithResult:(long long)arg2 tips:(id)arg3 withAdded:(id)arg4 andChanged:(id)arg5 andDeleted:(id)arg6;
- (void)onHomepageMgr:(id)arg1 fetchDataBeforeJumpWithNewItems:(id)arg2 success:(BOOL)arg3;
- (void)onHomepageMgr:(id)arg1 prePageUpdate:(id)arg2;
- (void)onHomepageMgrClearJumpState:(id)arg1;
- (void)onHomepageMgr:(id)arg1 limitFeedIdChanged:(unsigned long long)arg2;
- (void)onHomepageMgr:(id)arg1 yearMonthInfosUpdated:(id)arg2;
- (void)onHomepageMgr:(id)arg1 BGImgChanged:(id)arg2;
- (void)onPrePageUpdate:(BOOL)arg1;
- (void)onTimelineDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)onNoMoreTimelineData;
- (void)onNormalTimelineData;
- (void)onTimelineServerError;
- (void)onRemoveCachesOfLikeUserWithDataItemId:(id)arg1;
- (void)onRemoveCachesOfContentWithDataItemId:(id)arg1;
- (void)beginTimeline;
- (void)endTimeline;
- (void)deduplicateTimelineDataItems;
- (BOOL)filterTimelineItem:(id)arg1;
- (id)makeTimelineListLogIdentifier:(id)arg1;
- (void)reloadTimelineDataItems;
- (void)reinitTimelineDataItems;
- (void)updateTemporaryPropertiesForTimelineDataItems;
- (id)getTimelineDataItem;
- (long long)countOfTimelineDataItem;
- (id)getTimelineDataItemOfIndex:(long long)arg1;
- (id)getTimelineDataInCacheByItemID:(id)arg1;
- (id)getLatestDataItem;
- (id)getRedDotDataItem;
- (BOOL)updateTimelineHead;
- (BOOL)updateTimelinePrePage;
- (BOOL)updateTimelineTail;
- (BOOL)preUpdateTimeline:(unsigned long long)arg1;
- (BOOL)isTimeLineJumpState;
- (void)clearJumpState;
- (void)onDataDeleted:(id)arg1;
- (void)setUploadTaskProgressBlockWithDataItem:(id)arg1 progressBlock:(id /* block */)arg2 postTipsViewType:(double)arg3;
- (void)uncacheText:(id)arg1 refCommentItem:(id)arg2;
- (void)cacheText:(id)arg1 image:(id)arg2 emoji:(id)arg3 refDataItem:(id)arg4 refCommentItem:(id)arg5 PasteLogic:(id)arg6 ExtBean:(id)arg7;
- (id)getCacheText:(id)arg1 refCommentItem:(id)arg2 PasteLogic:(id)arg3 ExtBean:(id)arg4;
- (void)cacheRewardStatus:(id)arg1;
- (void)cacheFreeStatus:(id)arg1;
- (id)getRedEnvelopesInfoByDataItem:(id)arg1;
- (id)uploadDataItem:(id)arg1;
- (void)restartUploadDataItem:(id)arg1;
- (void)addFailDataItem:(id)arg1;
- (void)retryUploadDataItems;
- (void)deleteDataItem:(id)arg1;
- (void)deleteDataItem:(id)arg1 trashable:(BOOL)arg2;
- (void)deleteDataItem:(id)arg1 trashable:(BOOL)arg2 noMark:(BOOL)arg3;
- (BOOL)_deleteDataItemFromUploadMgr:(id)arg1 andNotify:(BOOL)arg2;
- (void)_deleteDataItemFromServer:(id)arg1 noMark:(BOOL)arg2;
- (void)deleteDataItemLocal:(id)arg1;
- (void)deleteDataItemServer:(id)arg1;
- (void)deleteFailedDataItem:(id)arg1 trashable:(BOOL)arg2;
- (id)getQueuingUploads;
- (id)getFailedUploads;
- (id)getFailedComment;
- (id)getFailedLike;
- (void)deleteFailedComment:(id)arg1;
- (id)getFailureCancelLikeItems;
- (void)addFailureCancelLikeItem:(id)arg1;
- (void)removeFailureCancelLikeItem:(id)arg1;
- (void)bindLocalItemId:(id)arg1 withUploadedItemId:(id)arg2;
- (id)findUploadedItemIdForLocalId:(id)arg1;
- (id)getHotVideoItem;
- (void)setHotVideoItem:(id)arg1;
- (void)setHasReadHotVideoTip;
- (id)getHotImageItem;
- (void)setHotImageItem:(id)arg1;
- (void)setHasReadHotImageTip;
- (void)extracted:(id)arg1;
- (void)uploadMgr:(id)arg1 uploadTaskDidFail:(id)arg2;
- (void)onUploadFinished:(id)arg1;
- (void)uploadMgr:(id)arg1 didRemoveFailedTask:(id)arg2;
- (void)onUploadRestarted:(id)arg1;
- (void)onPendingTaskStartUpload:(id)arg1;
- (BOOL)cleanFailDataItemForSpam:(id)arg1;
- (id)getDataItemByID:(id)arg1 addLocal:(BOOL)arg2;
- (id)getDataItemByID:(id)arg1;
- (id)getStrangerDataItemByID:(id)arg1 ofPartner:(id)arg2;
- (void)tryGetWCDataItemPattern:(id)arg1;
- (unsigned long long)getHomepageLimitFeedIdForUsername:(id)arg1 type:(long long)arg2;
- (void)setDownloadScene:(long long)arg1;
- (long long)getCdnDownloadType:(long long)arg1;
- (long long)getWcDownloadType:(long long)arg1;
- (BOOL)checkTypeValid:(long long)arg1;
- (void)pullDownloadMediaToFront:(id)arg1 downloadType:(long long)arg2;
- (void)downloadMedia:(id)arg1 downloadType:(long long)arg2;
- (void)downloadMediaWithProcessNotify:(id)arg1 downloadType:(long long)arg2;
- (void)forceDownloadMedia:(id)arg1 downloadType:(long long)arg2;
- (void)forceDownloadMediaWithProcessNotify:(id)arg1 downloadType:(long long)arg2;
- (void)cancelDownloadMedia:(id)arg1 downloadType:(long long)arg2;
- (void)updateDownloadConcurrentCount;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(long long)arg2 current:(int)arg3 total:(int)arg4;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onCancelDownloadSuccess:(id)arg1 downloadType:(long long)arg2;
- (void)onBeginDownload:(id)arg1 downloadType:(long long)arg2;
- (void)onAddDownloadQueue:(id)arg1 downloadType:(long long)arg2;
- (BOOL)videoCoverEnabled;
- (id)coverDataItemByContact:(id)arg1;
- (BOOL)canLikeCoverForContact:(id)arg1;
- (id)backgroundImageByContact:(id)arg1;
- (id)signatureForContact:(id)arg1;
- (void)SetBGImgByMedia:(id)arg1;
- (void)SetBGImgByImg:(id)arg1;
- (void)SetBGBySightDraft:(id)arg1;
- (void)setCoverWithFinderDataItem:(id)arg1 image:(id)arg2 options:(id)arg3;
- (BOOL)hasBGImg:(id)arg1;
- (BOOL)isBGImgLikedForUser:(id)arg1;
- (void)setBGImgLikedForUser:(id)arg1 source:(long long)arg2;
- (void)setBGImgUnlikedForUser:(id)arg1 source:(long long)arg2;
- (void)requestCoverDataItemWithContact:(id)arg1;
- (void)requestCoverDataItemIfNeededWithContact:(id)arg1;
- (id)getBGStorage;
- (void)updateBGStorage;
- (void)onBGStorageUpdated;
- (void)NotifyToUploadWithTask:(id)arg1;
- (void)NotifyToDownloadMedia:(id)arg1 downloadType:(long long)arg2;
- (id)getUploadingDataItems;
- (void)NotifyBackgroundChanged;
- (void)likeObject:(id)arg1 ofUser:(id)arg2 source:(long long)arg3;
- (void)likeObject:(id)arg1 ofUser:(id)arg2 source:(long long)arg3 extraInfo:(id)arg4;
- (void)likeObjectByID:(id)arg1 ofUser:(id)arg2 source:(long long)arg3;
- (void)likeObjectBack:(id)arg1 ofUser:(id)arg2 source:(long long)arg3 ref:(id)arg4 extraInfo:(id)arg5;
- (void)commentObject:(id)arg1 ForAd:(id)arg2;
- (void)commentObject:(id)arg1 ForAd:(id)arg2 extraInfo:(id)arg3;
- (BOOL)cancelLikeWithDataItem:(id)arg1;
- (BOOL)cancelLikeWithDataItem:(id)arg1 extraInfo:(id)arg2;
- (BOOL)deleteCommentWithDataItem:(id)arg1 comment:(id)arg2;
- (void)likeObjectByID:(id)arg1 toStranger:(id)arg2 source:(long long)arg3;
- (void)commentObject:(id)arg1 toStranger:(id)arg2 content:(id)arg3 ref:(id)arg4 source:(long long)arg5;
- (void)ww_likeDataItem:(id)arg1 ofUser:(id)arg2 source:(long long)arg3;
- (void)ww_likeDataItem:(id)arg1 toStranger:(id)arg2 source:(long long)arg3;
- (long long)browseSceneFromExtraInfo:(id)arg1;
- (void)onCommentReturn:(id)arg1 comment:(id)arg2;
- (void)onCommentOrLikeFailQueueChange;
- (BOOL)couldRunSightPreload:(id)arg1;
- (BOOL)hitTheDelayShowExp:(id)arg1;
- (void)exposureDelayShowFeed:(id)arg1;
- (void)clickDelayShowFeed:(id)arg1;
- (void)onAdvertiseCommentReturn:(id)arg1 comment:(id)arg2;
- (void)onLatestWCObjectChanged:(id)arg1;
- (void)onRedDotDataItemChanged:(id)arg1;
- (void)onReveiceWCMessages:(id)arg1;
- (void)onReveiceStrangerMessage:(id)arg1;
- (void)onMessageUnReadCountChanged;
- (unsigned int)getUnReadMessageCount;
- (unsigned int)getUnReadMessageCountForMutualFriends;
- (unsigned int)getUnReadMessageCountReleatedToMe;
- (id)getLastUnReadMessage;
- (id)getLatestReadMessage;
- (id)getUnReadMessages;
- (id)getUnReadMessagesLimit:(int)arg1;
- (id)getAllMessages;
- (id)getMessageFrom:(id)arg1 maxCount:(unsigned int)arg2;
- (BOOL)addNewRawMessage:(id)arg1;
- (void)markMessageRead:(id)arg1;
- (void)markMessageListRead:(id)arg1;
- (void)markMessageAllReadWithSyncMessage:(id)arg1;
- (void)deleteAllMessages;
- (void)deleteMessage:(id)arg1;
- (void)deleteMessageByFeedId:(id)arg1;
- (void)markMessageSpringWished:(id)arg1 springWishFlag:(long long)arg2;
- (id)contentDiscoverer;
- (void)discoverInTextContentForTimelineDataItems;
- (BOOL)togetherPostEnabled;
- (BOOL)canShowTogetherHistoryEntrance;
- (BOOL)showsTogetherHistoryEntranceForUsername:(id)arg1;
- (BOOL)showsTogetherBadgeInPostPage;
- (void)setShowsTogetherBadgeInPostPage:(BOOL)arg1;
- (BOOL)showsTogetherBadgeInHistoryEntrance;
- (void)setShowsTogetherBadgeInHistoryEntrance:(BOOL)arg1;
- (id)togetherManagerForUsername:(id)arg1;
- (id)getTogetherCachedDataItemsForUsername:(id)arg1 maxCount:(unsigned long long)arg2;
- (BOOL)updateTogetherCachedForDataItems:(id)arg1 forUsername:(id)arg2;
- (BOOL)deleteAllTogetherCachedDataItemsForUsername:(id)arg1;
- (void)modifyTogetherListByRemovingCurrentUserInDataItem:(id)arg1;
- (void)onSetDataItemTogetherFinished:(long long)arg1 dataItemID:(id)arg2 dataItem:(id)arg3 originalDataItem:(id)arg4;
- (BOOL)canModifyStarStatusForDataItem:(id)arg1;
- (BOOL)modifyDataItem:(id)arg1 isStarred:(BOOL)arg2;
- (void)onModifyDataItem:(id)arg1 isStarred:(BOOL)arg2 result:(long long)arg3;
- (void)onUpdateDataItemDetailFinished:(long long)arg1 itemId:(id)arg2 dataItem:(id)arg3;
- (void)onDataItemDeleteFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onDataItemDeleteWhthHomepageYearMonthInfosUpdated:(id)arg1;
- (void)onCommentItemDeleteFinished:(long long)arg1 commentItemID:(id)arg2 dataItemID:(id)arg3 context:(id)arg4;
- (void)onCancelLikeWithResult:(long long)arg1 commentID:(id)arg2 dataItemID:(id)arg3 context:(id)arg4;
- (void)onSetDataItemPrivateFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onSetDataItemPublicFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)deleteAdvertiseList:(id)arg1;
- (void)deleteAdvertiseList:(id)arg1 extInfo:(id)arg2;
- (void)onAdvertiseItemDeleted:(id)arg1;
- (void)onSetWCMessageNotifyFinished:(long long)arg1 dataItemID:(id)arg2 opFlag:(BOOL)arg3;
- (void)onModifyDataItemShareScopeFinished:(long long)arg1 dataItemID:(id)arg2 visibilityChangeOp:(id)arg3;
- (void)setDataItemPrivate:(id)arg1;
- (void)setDataItemPublic:(id)arg1;
- (void)modifyDataItem:(id)arg1 visibilityOp:(id)arg2;
- (void)setDataItemHate:(id)arg1;
- (void)updateDataItemDetailByItem:(id)arg1;
- (void)updateDataItemDetailWithGroupDetail:(id)arg1;
- (void)updateDataItemDetail:(id)arg1;
- (void)updateDataItemDetail:(id)arg1 source:(int)arg2 RemindFriendsInfoData:(id)arg3;
- (BOOL)isShowNewTimelineEventNotification;
- (id)getDataItemsByIds:(id)arg1;
- (void)restartAllFailUploadFromLocalNotification;
- (void)handleSyncForMessageListWithCreateTime:(long long)arg1;
- (void)timelineListStatusSync;
- (unsigned long long)getLatestReadMessageCreateTime;
- (void)notifyStatusForLastReadItem;
- (void)notifyStatusForLastReadItemWithCreateTime:(unsigned long long)arg1;
- (BOOL)couldShowRepeatUrlMenuItem:(id)arg1;
- (BOOL)isOnRepeatUrlExperiment:(id)arg1;
- (void)operateUrlFeed:(int)arg1 dataItem:(id)arg2;
- (void)cacheRepeatUrlAfterConfirmWithDocId:(id)arg1 snsOperationWrap:(id)arg2;
- (void)MergeWCAdvertiseDataComments:(id)arg1;
- (void)MergeWCAdvertiseDataAdInfo:(id)arg1;
- (id)getAdvertiseData:(id)arg1;
- (id)getCachedAdvertiseData:(id)arg1;
- (void)UnInterestOpenIMTimeLineData:(id)arg1;
- (void)UnInterestWCAdvertiseData:(id)arg1 dislikeReasonIdList:(id)arg2;
- (void)SpanUnInterestWCAdvertiseReasonListForData:(id)arg1;
- (void)SetWCAdvertiseDataIgnoreTip:(BOOL)arg1 ignoreCommengMsg:(BOOL)arg2 DataItem:(id)arg3;
- (void)increaseWCAdvertiseDataExposureCnt:(id)arg1;
- (void)updateAdvertiseInfo:(id)arg1;
- (long long)fetchAdPositionInTimeline:(id)arg1;
- (long long)fetchNormalFeedPositionInTimeline:(id)arg1;
- (BOOL)checkInvalidAdData;
- (id)fetchCanvasCommonFilePathWithUrl:(id)arg1 fileMD5:(id)arg2;
- (void)pausePreloadImage;
- (void)resumePreloadImage;
- (void)pausePreloadVideo;
- (void)resumePreloadVideo;
- (BOOL)hasPreloadDataItemForSmallImage:(id)arg1;
- (BOOL)hasPreloadDataItemForBigImage:(id)arg1;
- (BOOL)isInPreloadAroundImgLimitTime;
- (id)timelineMgrForPreloadLogicMgr:(id)arg1;
- (id)downloadMgrForPreloadLogicMgr:(id)arg1;
- (id)preloadLogicMgr:(id)arg1 imageDownloadCdnMgrForCategory:(long long)arg2;
- (BOOL)preloadLogicMgr:(id)arg1 canPreloadBigImageForUsername:(id)arg2 clickRatio:(int)arg3;
- (void)preloadLogicMgr:(id)arg1 preloadSightForDataItem:(id)arg2;
- (id)getSnsOperationsWithFeedId:(id)arg1;
- (id)getSnsOperationWrapWithFeedId:(id)arg1;
- (void)mergeSnsOperationsWithFeedId:(id)arg1 feedCreateTime:(unsigned int)arg2 snsOperationsData:(id)arg3;
- (void)saveSnsLocalCache;
- (void)setDelayShowInfoNeedDelay:(id)arg1;
- (void)setShowTime:(unsigned int)arg1 WithFeedId:(id)arg2;
- (void)clearDelayShowInfoCache;
- (id)getLastSeenItemForClickRatio;
- (void)updateLastSeenItemForClickRatio:(id)arg1;
- (BOOL)haveSeenItemForClickRatio:(id)arg1;
- (id)pathForWCOperationSetting;
- (void)trySaveWCOperSetting;
- (id)getWCOperSetting;
- (void)onFontSizeChange;
- (unsigned long long)cleanFacadeCache;
- (unsigned long long)preGetFacadeCacheSize;
- (void)clearAllPatternCacheCache;
- (void)onModifyABTestItem:(id)arg1 bizId:(id)arg2 abTestItem:(id)arg3;
- (void)setSightPlayStatus:(BOOL)arg1 andItemID:(id)arg2;
- (id)getSightPlayStatusByItemID:(id)arg1;
- (void)setSightDownloadProgress:(float)arg1 andItemID:(id)arg2;
- (id)getSightDownloadProgressByItemID:(id)arg1;
- (void)deleteSightDownloadProgressByItemID:(id)arg1;
- (id)genSightViewCacheKeyWithDataItem:(id)arg1 mediaItem:(id)arg2 scene:(unsigned long long)arg3;
- (id)genSightViewCacheKeyByMid:(id)arg1 scene:(unsigned long long)arg2;
- (void)setSightViewCache:(id)arg1 forKey:(id)arg2;
- (id)getSightViewCacheForKey:(id)arg1;
- (void)deleteSightViewCacheForKey:(id)arg1;
- (void)clearAllSightPlayStatusCache;
- (void)clearSightViewCache;
- (void)stopSightMgrHolding;
- (void)cleanUpWebStoreCache;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)updateCurrentPage:(int)arg1;
- (int)getCurrentPage;
- (void)logEnterForeground;
- (void)logEnterBackground;
- (void)logUploadFinished:(id)arg1;
- (void)setStartEnterBackGroundTime;
- (void)updateBackGroundTime;
- (void)updateSightThumbToMatchVideoIfNeededWithMediaItem:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)isCanvasInfoValid:(id)arg1;
- (unsigned long long)GetWCVideoDownloadMode:(id)arg1;
- (unsigned long long)GetWCAlbumVideoDownloadMode:(id)arg1;
- (unsigned long long)startDownloadSightMedia:(id)arg1;
- (unsigned long long)startDownloadSightMedia:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)startPreloadSnsVideoForDataItem:(id)arg1;
- (void)startPreloadVideoForMediaItem:(id)arg1 preloadItem:(id)arg2;
- (void)clearAllCurrentVideoPreload;
- (BOOL)stopPreloadVideoWithMediaItem:(id)arg1 downloadTaskInfo:(id *)arg2;
- (BOOL)StopDownloadVideoWithMediaItem:(id)arg1 downloadTaskInfo:(id *)arg2;
- (BOOL)IsMediaItemInDownloadQueue:(id)arg1;
- (BOOL)IsMediaItemInDownloadQueue:(id)arg1 isIncludePlayerDownload:(BOOL)arg2;
- (void)delayDownloadVideoRemainPart:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (BOOL)shouldShowSnsCommitDragTip;
- (void)markHasShowSnsCommitDragTip;
- (void)setMessageNotificationForDataItem:(id)arg1 ignored:(BOOL)arg2;
- (void)StartDownloadImage:(id)arg1 DownloadType:(long long)arg2;
- (void)StartDownloadMultiImage:(id)arg1 targetMedias:(id)arg2;
- (void)onCdnDownloadImageBegin:(id)arg1 downloadType:(long long)arg2;
- (void)onCdnDownloadImageAddedQueue:(id)arg1 downloadType:(long long)arg2;
- (void)onCdnDownloadImageCancel:(id)arg1 downloadType:(long long)arg2;
- (void)onCdnDownloadImageProcessChanged:(id)arg1 downloadType:(long long)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)onCdnDownloadImageFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onCdnDownloadImageFail:(id)arg1 downloadType:(long long)arg2;
- (id)cdnGetSnsOperationsWithFeedId:(id)arg1;
- (id)dataItemWithId:(id)arg1;
- (void)notifyTimelineVcWillAppear;
- (void)notifyTimelineVcWillPop;
- (id)getRealFeedExposureFeedIds;
- (BOOL)isTimeLineViewControllerActuallyAppearing;
- (BOOL)isUserNameInDontSeeList:(id)arg1;
- (BOOL)isTimelineVideoSightAutoPlayEnable;
- (BOOL)isImageDownloading:(id)arg1 downloadType:(long long)arg2;
- (unsigned int)getImageDownloadStatus:(id)arg1 downloadType:(long long)arg2;
- (BOOL)isImportTagFromGroupEnable;
- (BOOL)isShowLatestSnsPostPrivacy;
- (void)onExptItemListChange;
- (void)onCacheMgrCleanCacheWarning;
- (void)onMediaDidClickOriginalArticle:(id)arg1;
- (void)onSecurityVerificationFinished:(BOOL)arg1 type:(unsigned long long)arg2;
- (void)setCurrentSecurityVerificationDataItem:(id)arg1;
- (id)getCurrentSecurityVerificationDataItem;
- (void)updateSecurityVerificationDataItem;
- (BOOL)isSecurityVerifiedInSessionForDataItem:(id)arg1;
- (void)updateServerConfig:(id)arg1;
- (int)getTimelineDbFeedsCount:(id)arg1 minItemId:(id)arg2;
- (void)bindModelWithLocalItem:(id)arg1 andSvrItem:(id)arg2;
- (void)optimizeTimelineTableIfNeeded;
- (void)cleanupTimelineTableWithCompletionHandler:(id /* block */)arg1;
- (void)createIndexesForTimelineTableWithCompletionHandler:(id /* block */)arg1;
- (void)markTimelineTableHasCleanUpFinish;
- (BOOL)exceedMaxCleanCheckInterval;
- (id)getPendingTask:(id)arg1 forBusiness:(int)arg2;
- (id)getPendingTempDirForBusiness:(int)arg1;
- (id)findMicroMerchantDataItemInCacheByItemID:(id)arg1;
- (id)debugDescription;
- (id)microMerchantFoldMgr;
- (void)asyncRecordWSInteractionWithDataItem:(id)arg1 interactionType:(unsigned long long)arg2 scene:(unsigned long long)arg3;
- (void)asyncRecordWSInteractionWithDataItem:(id)arg1 interactionType:(unsigned long long)arg2 isFolded:(BOOL)arg3 scene:(unsigned long long)arg4;
- (void)asyncRegenerateWSFoldSettings;
- (BOOL)clearAllWSInteractionRecords;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)dynamicConfig;
- (void)setDynamicConfig:(id)arg1;
- (id)badgeDataItemThatEnteredTimeline;
- (void)setBadgeDataItemThatEnteredTimeline:(id)arg1;
- (long long)lastReadMessageCreateTime;
- (void)setLastReadMessageCreateTime:(long long)arg1;
- (id)timelineListLogIdentifier;
- (void)setTimelineListLogIdentifier:(id)arg1;
- (void)setAdCanvasDeeplinkUtil:(id)arg1;
- (void).cxx_destruct;
@end
