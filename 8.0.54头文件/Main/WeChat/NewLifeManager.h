@interface NewLifeManager : MMUserService <WCFinderSelfContactExt, WCFinderPostDataItemExt, MMServiceProtocol>
{
    MMFlutterInstance * _maasEditorInstance; // +0x8
    NewLifeUploadCdnMgr * _uploadMgr; // +0x10
    FlutterNewLifeNavigator * _flutterNavigator; // +0x18
    NSArray * _prefetchedColdStartItems; // +0x20
    NSData * _prefetchedProfileBuffer; // +0x28
    NSObject * _prefetchedColdStartItemsLock; // +0x30
    MMLRUCache * _contactCache; // +0x38
    NewLifeSyncLogic * _syncLogic; // +0x40
    NewLifeSwitchLogic * _switchLogic; // +0x48
    NewLifeThumbUpLogic * _thumbUpLogic; // +0x50
    FlutterNewLifeViewController * _flutterNewLifeController; // +0x58
    NewLifeMMKVKeyModel * _mmkvKeyModel; // +0x60
    NewLifePrefetchManager * _prefetchManager; // +0x68
    PrefetchStreamCallbackCmdIdReq * _attachedPrefetchData; // +0x70
    NewLifeProfilePrefetchLogic * _profilePrefetchLogic; // +0x78
    NewLifeCallbackProcessor * _callbackProcessor; // +0x80
    NewLifeReporter * _reporter; // +0x88
    NSMutableDictionary * _userNameToFinderMentionContactMap; // +0x90
    NewLifePostVerifyAssist * _postVerifyAssist; // +0x98
    NewLifeRegisterCmdIdHandler * _registerCmdIdHandler; // +0xa0
    NewLifeSnapShotViewController * _snapShotViewController; // +0xa8
    NewLifePagePerformanceReporter * _pageReporter; // +0xb0
}
+ (unsigned long long)finderMentionType:(unsigned int)arg1;
- (BOOL)shouldEnableNewLifeSync;
- (void)syncForEnterRelatedTab;
- (void)syncForExposeReplace;
- (void)syncWithActionNotifyData:(id)arg1;
- (void)tryToSyncAfterQuitWebSearch;
- (void)triggerDiscoveryExposeSync;
- (void)triggerEnterDiscoveryFinderSync;
- (void)triggerEnterDiscoveryTimeLineSync;
- (BOOL)isSupportLongVideo;
- (BOOL)isSupportToShowReddotInBrowseCell;
- (BOOL)shouldBrowseCellShowNewLifeEntranceReddot;
- (id)validBrowseCellEntranceTipsShowInfo;
- (int)finderTabTypeForBrowseCellReddot;
- (int)finderTabTypeForBrowseCellNumberReddot;
- (void)disposeBrowseEntryRedPoint;
- (BOOL)showDebugPageIfValidFromVC:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (void)onServiceEnterForeground;
- (BOOL)isSupportToShowNewLifeEntrance;
- (BOOL)shouldShowNewLifeEntrance;
- (void)tryUpdateNewLifeEntranceSwitchValue;
- (BOOL)hidePrivateMessageFromUserHalfScreen;
- (void)tryStartSyncLogicIfNeeded;
- (id)syncLogicIfEnabled;
- (void)continueConfigWhenSwitchIsOpen;
- (void)clearPermissions;
- (id)prefetchMgr;
- (void)setupForOpenWSLocalWebViewWithPrefetchParams:(id)arg1;
- (BOOL)isCurrentTab;
- (void)setIsCurrentTab:(BOOL)arg1;
- (void)attachPrefetchCallbackDataToVc:(id)arg1;
- (void)thumbUpFeed:(id)arg1 isThumbUp:(BOOL)arg2 scene:(int)arg3 enterScene:(int)arg4 completion:(id /* block */)arg5;
- (void)thumbUp:(BOOL)arg1 feedId:(unsigned long long)arg2 encryptId:(id)arg3 nonceId:(id)arg4 sessionBuffer:(id)arg5 scene:(int)arg6 enterScene:(int)arg7 newlifeType:(id)arg8 completion:(id /* block */)arg9;
- (void)thumbUp:(BOOL)arg1 feedId:(unsigned long long)arg2 encryptId:(id)arg3 nonceId:(id)arg4 sessionBuffer:(id)arg5 scene:(int)arg6 enterScene:(int)arg7 newlifeType:(id)arg8 newlifeReportInfo:(id)arg9 completion:(id /* block */)arg10;
- (void)unlikeFeedForFeedId:(unsigned long long)arg1 scene:(int)arg2 enterScene:(int)arg3 success:(id /* block */)arg4 failure:(id /* block */)arg5;
- (id)getLocalJumpInfoForFeedId:(id)arg1 scene:(int)arg2;
- (void)fetchExtraInfoForFeeds:(id)arg1 scene:(int)arg2;
- (void)fetchStream:(id)arg1 requestId:(unsigned long long)arg2 success:(id /* block */)arg3 failure:(id /* block */)arg4;
- (void)fetchUserpageWithParams:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (id)consumeProfilePrefetchedResponse:(id)arg1 scene:(int)arg2;
- (id)handleFinderUserPageResponse:(id)arg1 username:(id)arg2 firstPage:(BOOL)arg3 scene:(int)arg4 entryScene:(unsigned long long)arg5;
- (id)getFinderDataItemWith:(id)arg1;
- (id)getFinderDataItemWithTid:(id)arg1;
- (id)getFinderDataitemListWith:(id)arg1;
- (id)getContactWith:(id)arg1;
- (id)getCachedContactWith:(id)arg1;
- (void)updateContact:(id)arg1;
- (void)passthroughSessionBufferForDataItem:(id)arg1 scene:(int)arg2 enterScene:(int)arg3;
- (void)updateGlobalFavoriteForDataItem:(id)arg1;
- (void)updateTempThumbUpForDataItem:(id)arg1;
- (void)getFeedForFeedId:(unsigned long long)arg1 nonceId:(id)arg2 scene:(int)arg3 enterScene:(int)arg4 clientUdfKv:(id)arg5 completion:(id /* block */)arg6;
- (void)getFeedForEncryptId:(id)arg1 nonceId:(id)arg2 scene:(int)arg3 completion:(id /* block */)arg4;
- (void)privateGetFeedForFeedId:(unsigned long long)arg1 encryptId:(id)arg2 nonceId:(id)arg3 scene:(int)arg4 clientUdfKv:(id)arg5 completion:(id /* block */)arg6;
- (void)getNotificationListForType:(unsigned int)arg1 username:(id)arg2 buffer:(id)arg3 completion:(id /* block */)arg4;
- (id)sharedFlutterNavigator;
- (void)batchAddOrUpdateFeeds:(id)arg1;
- (id)getLocalFeedList;
- (id)generatePostBgmInfoWith:(id)arg1;
- (id)postNewLifeFeed:(id)arg1;
- (void)makeSureDataItemSize:(id)arg1;
- (CGSize)parseImageSize:(id)arg1;
- (id)genOriginMediaArray:(id)arg1;
- (id)genOriginImgDataItem:(id)arg1 imagePath:(id)arg2;
- (void)fillPostDataItem:(id)arg1 dataItem:(id)arg2;
- (id)generatePostSessionId;
- (void)handleGetMentionCountBuffer:(id)arg1;
- (void)clearAllMentionUnreadCount;
- (id)getNewLifeFlutterViewControllerWithParams:(id)arg1;
- (id)getNewLifeFlutterViewController;
- (void)showFlutterNewLifePersonalCenter:(id)arg1 sessionId:(id)arg2;
- (void)showFlutterNewLifeSearchPage:(id)arg1 searchResult:(id)arg2 searchContextId:(id)arg3;
- (void)showFlutterNewLifePost:(id)arg1 skipImageProcess:(BOOL)arg2 postInfo:(id)arg3 selectDefaultEnvelope:(BOOL)arg4 realEnterScene:(int)arg5 completion:(id /* block */)arg6 postEndDelegate:(id)arg7;
- (BOOL)enableNewEditor;
- (void)showFlutterNewLifeImageSelect:(id)arg1 postInfo:(id)arg2 enterScene:(int)arg3 selectDefaultEnvelope:(BOOL)arg4 postEndDelegate:(id)arg5;
- (void)showFlutterPageWithRoute:(id)arg1 arguments:(id)arg2 fromViewController:(id)arg3;
- (void)showPost:(id)arg1 fromViewController:(id)arg2;
- (id)getMentionFinderContactByUserName:(id)arg1;
- (void)updateMentionFinderContact:(id)arg1;
- (id)getSelfContact;
- (id)getSelfWxContact;
- (void)checkIsContactValid:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (BOOL)isFinderContactCreatable;
- (BOOL)isFinderContactValid;
- (void)onNewLifePostSessionUpLoadSuccessful:(id)arg1;
- (void)onNewLifePostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onChangeSelectedFinderUsername:(id)arg1;
- (void)onEnterNewLifeSquareTab;
- (void)onQuitBrowseEntry;
- (void)userPrepareWithScene:(long long)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)changeStickyTopStatus:(id)arg1 isStickTop:(BOOL)arg2 success:(id /* block */)arg3 failure:(id /* block */)arg4;
- (void)changePrivateStatus:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)deleteFeedWithTid:(id)arg1 nonceID:(id)arg2 success:(id /* block */)arg3 failure:(id /* block */)arg4;
- (void)registerCommonApi:(id)arg1 forCommandList:(id)arg2;
- (void)unregisterCommonApi:(id)arg1 forCommandList:(id)arg2;
- (void)unregisterCommonApiForAllCommands:(id)arg1;
- (void)prefetchColdStartHobbyList;
- (void)getColdStartHobbyList:(id /* block */)arg1;
- (void)changeHobbyList:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)reportNewLifeCgiEvent:(id)arg1 target:(id)arg2 params:(id)arg3 isBatchReport:(BOOL)arg4;
- (id)checkToReturnCollectMapItem:(id)arg1 andEventId:(id)arg2;
- (void)setExpFeedIdWhenScrollEnd:(id)arg1 andScene:(unsigned int)arg2;
- (id)getFirstExpFeedIdByScene:(unsigned int)arg1;
- (void)setNewLifeSdkReportParams:(id)arg1 forKey:(id)arg2;
- (void)removeNewLifeSdkReportParamsforKey:(id)arg1;
- (void)setFlutterReportSDKInfo:(id)arg1;
- (id)isTempThumbUpForFeedId:(id)arg1;
- (void)batchUpdateTempStateForFinderObjectList:(id)arg1;
- (void)updateStickyTimeForDataItem:(id)arg1;
- (void)increaseForwardCountForDataItem:(id)arg1;
- (BOOL)enableTopRecommendContentReddotInFind;
- (BOOL)enableNewlifeContentReddotInFind;
- (BOOL)enablePostToNewLifeFromSns;
- (BOOL)enableFindFriendEntryPrefetch;
- (void)submitBizPhotosMsgWithJsonStr:(id)arg1 completion:(id /* block */)arg2;
- (void)showSnapShotView:(BOOL)arg1;
- (void)finderPostWithPostSession:(id)arg1;
- (void)finderRetryPostWithDataItem:(id)arg1 commentScene:(int)arg2;
- (id)maasEditorInstance;
- (void)setMaasEditorInstance:(id)arg1;
- (id)uploadMgr;
- (void)setUploadMgr:(id)arg1;
- (id)flutterNavigator;
- (void)setFlutterNavigator:(id)arg1;
- (id)prefetchedColdStartItems;
- (void)setPrefetchedColdStartItems:(id)arg1;
- (id)prefetchedProfileBuffer;
- (void)setPrefetchedProfileBuffer:(id)arg1;
- (id)prefetchedColdStartItemsLock;
- (void)setPrefetchedColdStartItemsLock:(id)arg1;
- (id)contactCache;
- (void)setContactCache:(id)arg1;
- (id)syncLogic;
- (void)setSyncLogic:(id)arg1;
- (id)switchLogic;
- (void)setSwitchLogic:(id)arg1;
- (id)thumbUpLogic;
- (void)setThumbUpLogic:(id)arg1;
- (id)flutterNewLifeController;
- (void)setFlutterNewLifeController:(id)arg1;
- (id)mmkvKeyModel;
- (void)setMmkvKeyModel:(id)arg1;
- (id)prefetchManager;
- (void)setPrefetchManager:(id)arg1;
- (id)attachedPrefetchData;
- (void)setAttachedPrefetchData:(id)arg1;
- (id)profilePrefetchLogic;
- (void)setProfilePrefetchLogic:(id)arg1;
- (id)callbackProcessor;
- (void)setCallbackProcessor:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)userNameToFinderMentionContactMap;
- (void)setUserNameToFinderMentionContactMap:(id)arg1;
- (id)postVerifyAssist;
- (void)setPostVerifyAssist:(id)arg1;
- (id)registerCmdIdHandler;
- (void)setRegisterCmdIdHandler:(id)arg1;
- (id)snapShotViewController;
- (void)setSnapShotViewController:(id)arg1;
- (id)pageReporter;
- (void)setPageReporter:(id)arg1;
- (void).cxx_destruct;
@end

