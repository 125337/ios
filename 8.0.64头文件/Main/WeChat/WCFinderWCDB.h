@interface WCFinderWCDB : NSObject
{
    BOOL _replaceFinderObjectByVersion; // +0x8
    WCTDatabase * _dataBase; // +0x10
    WCTTable * _contactTable; // +0x18
    WCTTable * _finderTable; // +0x20
    WCTTable * _objectMonoDataTable; // +0x28
    WCTTable * _userStickyPageTable; // +0x30
    WCTTable * _mentionTable; // +0x38
    WCTTable * _streamFirstPageTable; // +0x40
    WCTTable * _followingTable; // +0x48
    WCTTable * _likeFirstPageTable; // +0x50
    WCTTable * _mentionedFirstPageTable; // +0x58
    WCTTable * _searchHistoryTable; // +0x60
    WCTTable * _postingCommentTable; // +0x68
    WCTTable * _dataItemRecommendTable; // +0x70
    WCTTable * _historyFirstPageTable; // +0x78
    WCTTable * _contactExtInfoTable; // +0x80
    WCTTable * _feedPreloadObjectTable; // +0x88
    WCTTable * _feedSessionTable; // +0x90
    WCTTable * _refuseLikeListTable; // +0x98
    WCTTable * _shieldLikeListTable; // +0xa0
    WCTTable * _feedVideoPreloadTable; // +0xa8
    WCTTable * _timelineTabFeedInfo; // +0xb0
    WCTTable * _localBackupFeedInfoTable; // +0xb8
    WCTTable * _likeBufferInfoTable; // +0xc0
    WCTTable * _finderParseContentInfoTable; // +0xc8
    WCTTable * _finderPlayInfoTable; // +0xd0
    WCTTable * _playStatusTable; // +0xd8
    WCTTable * _exposeDataTable; // +0xe0
    WCTTable * _postingFeedTable; // +0xe8
    WCTTable * _userpageCacheModel; // +0xf0
    WCTTable * _globalPlaybackInfoTable; // +0xf8
    WCTTable * _feedCommentListTable; // +0x100
    WCTTable * _finderMegaVideoTable; // +0x108
    WCTTable * _finderMegaVideoFirstPageCacheTable; // +0x110
    WCTTable * _finderMegaVideoBulletCommentTable; // +0x118
    WCTTable * _finderEventInfoTable; // +0x120
    WCTTable * _finderBindEventInfoTable; // +0x128
    WCTDatabase * _finderAuthorDataBase; // +0x130
    NSMutableDictionary * _authorTableUnitDict; // +0x138
    WCTTable * _feedTopicInfoTable; // +0x140
    WCTTable * _recommendCategoryStringTable; // +0x148
    WCTTable * _finderShareLiveInfoTable; // +0x150
    WCTTable * _finderWechatExtDatasTable; // +0x158
    WCTTable * _finderFeedDraftTable; // +0x160
    WCTTable * _finderLocalDraftTable; // +0x168
    WCTTable * _finderBrandMapTable; // +0x170
    WCTTable * _finderObjectContainerInfoTable; // +0x178
    WCTTable * _poiBasicInfoTable; // +0x180
    WCTTable * _poiRecommendDishesInfoTable; // +0x188
    WCTTable * _finderContactOneTimeInfoTable; // +0x190
    WCTTable * _finderKeywordConfigTable; // +0x198
    WCTTable * _finderJumpInfoContainerTable; // +0x1a0
    WCTTable * _finderMPInterestDataTable; // +0x1a8
    WCTTable * _finderCommentMentionContactTable; // +0x1b0
    WCTTable * _finderJumpInfoTable; // +0x1b8
    WCTTable * _finderClubChatroomMapInfoTable; // +0x1c0
    WCTTable * _finderLiveShopWindowShareInfoTable; // +0x1c8
    WCTTable * _finderMembershipFollowInfoTable; // +0x1d0
    WCTTable * _finderMembershipDetailInfoTable; // +0x1d8
    WCTTable * _finderMembershipFeedFirstPageCacheTable; // +0x1e0
    WCTTable * _finderMembershipContactFirstPageCacheTable; // +0x1e8
    WCTTable * _finderCourseInfoTable; // +0x1f0
    WCTTable * _finderDramaInfoTable; // +0x1f8
    WCTTable * _finderSceneRelatedInfoTable; // +0x200
    NSDateFormatter * _exposeDateFormatter; // +0x208
    NSObject<OS_dispatch_queue> * _operationQueue; // +0x210
    NSObject<OS_dispatch_queue> * _cleanQueue; // +0x218
    WCFinderThreadSafeLRUCache * _jumpInfoContainerSafeCache; // +0x220
    WCFinderThreadSafeLRUCache * _jumpInfoContainerLastSafeCache; // +0x228
    WCTTable * _finderPrefetchFeatureTable; // +0x230
}
+ (BOOL)isLowEnd;
+ (BOOL)deleteDBFileWithPath:(id)arg1;
+ (void)destoryAllDBFileByReInit;
+ (void)deleteDBDirPath;
+ (unsigned long long)getFinderDBSize;
+ (BOOL)isDBExist;
+ (double)_finderCacheValidDate;
+ (double)_contactCacheValidDate;
+ (long long)finderTimeLineDBCachedDefaultLimitCount;
- (void)updateKeywordList:(id)arg1;
- (id)validKeywordConfigListWithCurrentTime:(unsigned long long)arg1 limitCount:(long long)arg2;
- (id)configWithKeyword:(id)arg1;
- (BOOL)addPrefetchFeature:(id)arg1;
- (BOOL)addPrefetchFeatureArray:(id)arg1;
- (BOOL)deletePrefechFeature:(id)arg1;
- (id)getPrefetchFeatureArrayWithTimeInterval:(unsigned long long)arg1 scene:(unsigned long long)arg2;
- (id)fetchAllDraft:(long long)arg1 username:(id)arg2 draftSource:(unsigned long long)arg3;
- (id)fetchLocalDraftListStartTime:(double)arg1 endTime:(double)arg2 draftSource:(unsigned long long)arg3;
- (id)fetchLowerVersionDraft;
- (id)fetchOneLowerVersionDraft;
- (void)saveDraftList:(id)arg1;
- (id)getFeedDraftForId:(id)arg1;
- (id)checkExistsDrafts:(id)arg1;
- (BOOL)deleteDraft:(id)arg1;
- (BOOL)deleteDrafts:(id)arg1;
- (void)updateFirstPageDraft:(id)arg1 finderUsername:(id)arg2;
- (BOOL)saveLocalDraft:(id)arg1;
- (id)getLocalDraftById:(id)arg1;
- (BOOL)deleteLocalDraftById:(id)arg1;
- (id)getLocalDraftBeforeTime:(double)arg1;
- (id)getLocalDraftAfterTime:(double)arg1;
- (id)getLocalDraftBeforeTime:(double)arg1 afterTime:(double)arg2;
- (id)getAllLocalDraft;
- (BOOL)deleteLocalDraft:(id)arg1;
- (BOOL)deleteOneWeekAgoAigcDraft;
- (id)init;
- (BOOL)moveFinderDBFileToWechatPath;
- (id)exposeDateFormatter;
- (BOOL)setupWechatDataBase;
- (BOOL)setUpFinderAuthorDataBase;
- (BOOL)setupDataBase;
- (void)setupFinderDataBase;
- (void)deleteAuthorOldMention;
- (void)createTable;
- (void)createWechatTable;
- (void)createAuthorTable;
- (void)closeDB;
- (void)dealloc;
- (id)cleanQueue;
- (id)operationQueue;
- (BOOL)createFinderContactTable;
- (BOOL)createFinderTable;
- (BOOL)createObjectMonoDataTable;
- (BOOL)createuserStickyPageTable;
- (BOOL)createMentionTable;
- (BOOL)createStreamFirstPageTable;
- (BOOL)createLikeFirstPageTable;
- (BOOL)createMentionedFirstPageTable;
- (BOOL)createrecommendCategoryStringTable;
- (BOOL)createSearchHistoryTable;
- (BOOL)createPostingCommentTable;
- (BOOL)createDataRecommendTable;
- (BOOL)createFollowingListTable;
- (BOOL)createFirstHistoryPageTable;
- (BOOL)createContactExtInfoTable;
- (BOOL)createFeedPreloadInfoTable;
- (BOOL)createFeedSessionTable;
- (BOOL)createWeChatRefuseLikeTable;
- (BOOL)createWeChatShieldLikeTable;
- (BOOL)createFeedTopicInfoTable;
- (BOOL)createFeedPreloadVideoInfoTable;
- (BOOL)createTimelineTabFeedInfoTable;
- (BOOL)createLocalBackupFeedInfoTable;
- (BOOL)createLikeBufferTable;
- (BOOL)dropFinderAttachmentListTable;
- (BOOL)createFinderMegaVideoTable;
- (BOOL)createFinderMegaVideoFirstPageCacheTable;
- (BOOL)createFinderMegaVideoBulletCommentTable;
- (BOOL)createFinderFeedParseContentInfoTable;
- (BOOL)createFinderEventInfoTable;
- (BOOL)createFeedEventInfoTable;
- (BOOL)createFinderPlayInfoTable;
- (id)createTableWithTableName:(id)arg1 objectClass:(Class)arg2;
- (id)createFansListTableWithFinderUsername:(id)arg1;
- (id)createBlackListTableWithFinderUsername:(id)arg1;
- (id)createFinderMentionTableWithFinderUsername:(id)arg1;
- (id)createFinderLikeListWithFinderUsername:(id)arg1;
- (id)createAuthorTableWithTableName:(id)arg1 objectClass:(Class)arg2 finderUsername:(id)arg3;
- (BOOL)dropAuthorTableWithTableName:(id)arg1 finderUsername:(id)arg2;
- (BOOL)createFinderShareLiveInfoTable;
- (void)createFinderWechatExtDatasTable;
- (void)createFinderFeedDraftTable;
- (void)createFinderLocalDraftTable;
- (void)createBrandFollowInfoTable;
- (void)createObjectContainerInfoTable;
- (void)createPoiBasicInfoTable;
- (void)createPoiRecommendDishesInfoTable;
- (void)createClubChatroomMapInfoTable;
- (void)createContactOneTimeInfoTable;
- (void)createPrefetchFeatureTable;
- (void)createFinderJumpInfoContainerTable;
- (void)createFinderJumpInfoTable;
- (void)createFinderMPInterestDataTable;
- (void)createKeywordConfigTable;
- (void)createPostingFeedTable;
- (void)createUserpageFirstCache;
- (id)hashStringWithUsername:(id)arg1;
- (void)createFinderCommentMentionContactTable;
- (void)createFinderPlayStatusTable;
- (void)createFinderExposeDataTable;
- (void)createGlobalPlaybackInfoTable;
- (void)createFeedCommentListTable;
- (void)createFinderLiveShopWindowShareInfoTable;
- (void)createFinderMembershipFollowInfoTable;
- (void)createFinderMembershipDetailInfoTable;
- (void)createFinderMembershipFeedFirstPageCacheTable;
- (void)createFinderMembershipContactFirstPageCacheTable;
- (void)createFinderCourseInfoTable;
- (void)createFinderDramaInfoTable;
- (void)createFinderSceneRelatedInfoTable;
- (void)willRecoverDatabase;
- (void)didRecoverDatabase;
- (BOOL)addFinderDataItem:(id)arg1;
- (BOOL)addTimelineDataItemWithDataItemArray:(id)arg1;
- (BOOL)addTimelineDataItemWithDataItemArrayByVersion:(id)arg1;
- (BOOL)_addTimelineDataItemWithDataItemArray:(id)arg1;
- (void)mergeLightDataItemWithDataItemArray:(id)arg1;
- (void)insertOrIgnoreTimelineDataItems:(id)arg1;
- (BOOL)deleteTimelineDataItem:(id)arg1;
- (BOOL)updateTimelineDataItem:(id)arg1;
- (BOOL)updateTimelineDataItem:(id)arg1 likeFlag:(int)arg2;
- (BOOL)updateTimelineDataItem:(id)arg1 likeFlag:(int)arg2 comboLikeCount:(unsigned long long)arg3;
- (void)_updateReComboLikeWithDataItem:(id)arg1 comboLikeCount:(unsigned long long)arg2;
- (void)_fixFriendLikeListWithDataItem:(id)arg1 update:(BOOL)arg2;
- (BOOL)updateLiveFeedMonoDataInfoWithTid:(id)arg1 likeFlag:(id)arg2 likeCount:(id)arg3 friendLikeCount:(id)arg4 likeList:(id)arg5 forwardCount:(id)arg6;
- (BOOL)updatePrivateFlag:(BOOL)arg1 forDataItemId:(id)arg2;
- (BOOL)updateDataItemPrivateFlag:(id)arg1;
- (BOOL)updateDataItemStickyTopFlag:(id)arg1 type:(long long)arg2;
- (BOOL)updateTimelineDataItem:(id)arg1 isFav:(BOOL)arg2;
- (BOOL)updateTimelineDataItem:(id)arg1 isFav:(BOOL)arg2 isMemberAuthor:(BOOL)arg3;
- (id)getLocalDataItemWithTid:(id)arg1;
- (id)localDataItemWithTmpLocalTid:(id)arg1;
- (id)getLocalDataItemsWithTidArray:(id)arg1;
- (BOOL)cleanAuthorDataItemStickyStateWithUsername:(id)arg1;
- (id)getDataItemsWithUsername:(id)arg1 beforeMinTid:(id)arg2 afterMaxTid:(id)arg3;
- (BOOL)deleteAllDataItemWithUsername:(id)arg1 betweenMinTid:(id)arg2 andMaxTid:(id)arg3;
- (id)getAllDataItemWithUsername:(id)arg1 beforeMaxTid:(id)arg2;
- (id)getFinderTableTidsByCondition:(Expression)arg1;
- (BOOL)deleteAllDataItemWithUsername:(id)arg1 beforeMaxTid:(id)arg2;
- (void)asyncDeleteDataItemInTidList:(id)arg1 completion:(id /* block */)arg2;
- (id)getDiskCleanMgr;
- (BOOL)deleteDataItemInTidList:(id)arg1;
- (BOOL)cleanDataItemWithDataItems:(id)arg1;
- (BOOL)markDataItemWasDeletedWithTid:(id)arg1;
- (BOOL)changeDataItemCloseCommentFlagWithTid:(id)arg1 closeCommentFlag:(BOOL)arg2;
- (BOOL)updateDataItemAllLikeCountWithTid:(id)arg1 likeCount:(long long)arg2;
- (BOOL)updateDataItemThankStateWithLikeInfo:(id)arg1;
- (BOOL)updateShopWindowShareItem:(id)arg1;
- (id)getLocalShopWindowShareItemModel:(id)arg1;
- (BOOL)updateDataItemFavCountWithTid:(id)arg1 favCount:(long long)arg2;
- (id)getLocalCommentListWithTid:(id)arg1;
- (BOOL)mergeDataItemFirstCommentPageWithTid:(id)arg1 commentArray:(id)arg2 isFirstPage:(BOOL)arg3;
- (id)commentReduplictionRemoving:(id)arg1;
- (BOOL)updateMonoDataWithTid:(id)arg1 monoData:(id)arg2 monoDataSourceType:(unsigned long long)arg3;
- (BOOL)_updateCommentList:(id)arg1 tid:(id)arg2 commentAddCount:(long long)arg3;
- (BOOL)postDataItemCommentSuccessWithComment:(id)arg1 tid:(id)arg2;
- (BOOL)setTopComment:(id)arg1 dataItemTid:(id)arg2;
- (BOOL)deleteCommentWithComment:(id)arg1 dataItemTid:(id)arg2;
- (BOOL)deleteRootCommentWithComment:(unsigned long long)arg1 dataItemTid:(id)arg2;
- (BOOL)mergeDataItemSubCommentPageWithTid:(id)arg1 rootCommentID:(unsigned long long)arg2 subCommentArray:(id)arg3 addToBottom:(BOOL)arg4;
- (BOOL)deleteSubCommentWithComment:(id)arg1 rootCommentID:(unsigned long long)arg2 dataItem:(id)arg3;
- (BOOL)addDataItemPostSubCommentSuccessWithComment:(id)arg1 dataItemTid:(id)arg2;
- (BOOL)addDataItemPostSubCommentWithCommentFail:(id)arg1 rootCommentID:(unsigned long long)arg2 dataItemTid:(id)arg3;
- (BOOL)clearAllFeedComments;
- (BOOL)changeCommentLikeStatusWithTid:(id)arg1 likeComment:(id)arg2 likeStatus:(BOOL)arg3 isAuthor:(BOOL)arg4;
- (BOOL)modifyCommentWithComment:(id)arg1 tid:(id)arg2;
- (BOOL)updateDataItemLivingStatusWithTid:(id)arg1 livingStatus:(unsigned long long)arg2;
- (BOOL)updateDataItemLiveInfoWithTid:(id)arg1 liveInfo:(id)arg2;
- (BOOL)addContact:(id)arg1;
- (BOOL)totalReplaceContact:(id)arg1;
- (BOOL)addStrangerContactArray:(id)arg1;
- (BOOL)deleteContact:(id)arg1;
- (BOOL)updateContact:(id)arg1;
- (id)contactWithUsername:(id)arg1;
- (BOOL)updateContactFollowingWithUsername:(id)arg1 followState:(unsigned long long)arg2;
- (id)getFollowingContactsWithoutUsename:(id)arg1;
- (BOOL)updateFirstFollowingContactPageWithContacts:(id)arg1;
- (BOOL)reloadContactListWithContacts:(id)arg1;
- (BOOL)addContacts:(id)arg1;
- (BOOL)updateContactAuthInfo:(id)arg1 username:(id)arg2;
- (BOOL)changeContactFollowingStatusWithContacts:(id)arg1;
- (id)mergeContactFollowingStatusWithContacts:(id)arg1;
- (BOOL)updateContactInfoBySyncAction:(id)arg1;
- (BOOL)updateContactSpamStatus:(id)arg1;
- (id)contactWithUserNameList:(id)arg1;
- (id)getAllFollowingContacts;
- (BOOL)updateBrandsMap:(id)arg1;
- (BOOL)updateBrandMap:(id)arg1;
- (id)getBrandMapInfoWithBizUsername:(id)arg1;
- (BOOL)updateContactOneTimeInfo:(id)arg1;
- (id)getContactOneTimeInfoWithUsername:(id)arg1 entryScene:(int)arg2 commentScene:(int)arg3;
- (BOOL)updateObjectContainerInfo:(id)arg1;
- (id)localDataDataItemWithContainerId:(id)arg1;
- (void)cleanExpiredFinderObjectContainerInfo;
- (void)_cleanExpiredFinderObjectContainerInfo;
- (BOOL)updateFirstFollowedContactPage:(id)arg1 finderUsername:(id)arg2;
- (id)getFansContactListWithUsername:(id)arg1;
- (BOOL)updateFirstBlackListContactPage:(id)arg1 currentAuthorUsername:(id)arg2;
- (id)getBlackContactListWithCurrentAuthorUsername:(id)arg1;
- (BOOL)updateRefuseLikeContact:(id)arg1;
- (BOOL)updateFirstRefuseLikeListContactPage:(id)arg1;
- (id)getRefuseLikeContactList;
- (BOOL)addRefuseLikeContact:(id)arg1;
- (BOOL)deleteRefuseLikeContact:(id)arg1;
- (BOOL)updateFirstShieldLikeListContactPage:(id)arg1;
- (id)getShieldLikeContactList;
- (BOOL)addShieldLikeContact:(id)arg1;
- (BOOL)deleteShieldLikeContact:(id)arg1;
- (BOOL)updateUserStickyPage:(id)arg1 type:(long long)arg2 firstPageArray:(id)arg3;
- (BOOL)updateStickyPageWithStickyDataItem:(id)arg1 type:(long long)arg2;
- (unsigned long long)getUserStickFeedTimeWtihUsername:(id)arg1 tid:(id)arg2;
- (id)getUserStickFeedsWithUsername:(id)arg1 type:(long long)arg2;
- (id)userPageFromLocalWithUsername:(id)arg1 needMergeUpload:(BOOL)arg2 maxTid:(id)arg3 limit:(unsigned long long)arg4;
- (id)getMentionTableWithScene:(unsigned long long)arg1 finderUsername:(id)arg2;
- (BOOL)addFinderMentions:(id)arg1 scene:(unsigned long long)arg2 finderUsername:(id)arg3;
- (BOOL)deleteDuplicatedFollowApplyMentions:(id)arg1 finderUsername:(id)arg2;
- (BOOL)deleteDuplicatedFollowAcceptedMentions:(id)arg1;
- (BOOL)deleteFinderMentionsWithMentionType:(unsigned long long)arg1;
- (BOOL)updateDBSystemMentionsReadStatusWith:(id)arg1 finderUsername:(id)arg2;
- (BOOL)updateFollowApplyMentionWithType:(unsigned long long)arg1 andFollowId:(unsigned long long)arg2 finderUsername:(id)arg3;
- (id)getLastestMentionWithType:(unsigned long long)arg1 scene:(unsigned long long)arg2 finderUsername:(id)arg3;
- (id)getMentionWithSvrID:(id)arg1 scene:(unsigned long long)arg2 finderUsername:(id)arg3;
- (id)getMentionWithType:(long long)arg1 scene:(unsigned long long)arg2 maxMentionID:(unsigned long long)arg3 limit:(unsigned long long)arg4 finderUsername:(id)arg5;
- (id)getAuthorNotifyMentionWithSelectType:(unsigned long long)arg1 finderUsername:(id)arg2 maxMentionID:(unsigned long long)arg3 limit:(unsigned long long)arg4;
- (id)getMemberNotifyMentionWithSelectType:(unsigned long long)arg1 finderUsername:(id)arg2 maxMentionID:(unsigned long long)arg3 limit:(unsigned long long)arg4;
- (id)getWechatMentionWithmaxMentionID:(unsigned long long)arg1 limit:(unsigned long long)arg2 type:(unsigned long long)arg3;
- (BOOL)deleteFinderMention:(id)arg1 finderUsername:(id)arg2;
- (BOOL)makeUploadingFinderDataItemFailWithTid:(id)arg1 errorType:(long long)arg2;
- (id)getPostUploadingDataItemBeforeCreateTime:(double)arg1 afterCreateTime:(double)arg2;
- (id)getAllDataItemInUploadQueue;
- (id)getAllDataItemInUploadQueueWithUsername:(id)arg1;
- (void)cleanAllUploadingDataItem;
- (id)getLocalLikeListWithLastDisplayId:(id)arg1;
- (BOOL)refreshLikeFirstPageObjects:(id)arg1;
- (id)getLocalMentionedListWithLastDisplayId:(id)arg1;
- (BOOL)refreshMentionedFirstpageObjects:(id)arg1;
- (BOOL)insertOrUpdateCommentMentionedContracts:(id)arg1;
- (id)getLatestCommentMentionedContactsWithValidTime:(unsigned long long)arg1;
- (BOOL)cleanCommentMentiondContactWithInvalidMentionedTimes:(id)arg1;
- (void)updateDataItemsCacheTime:(id)arg1;
- (void)updateContactCacheTime:(id)arg1;
- (id)flowSceneMapDictionay;
- (void)setFinderFlowSceneMapToFeedListSceneWithSceneMap:(id)arg1;
- (id)commentSceneFlowArrayWithScene:(int)arg1;
- (void)cleanExpiredData;
- (void)cleanOthersTableRunPauseableTransaction;
- (void)_cleanOthersTableRunPauseableTransaction;
- (void)cleanTableOperationBlock:(id /* block */)arg1 commitThreshold:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (BOOL)runCleanTaskOperationBlock:(id /* block */)arg1 commitThreshold:(unsigned long long)arg2 deleteEndPtr:(BOOL *)arg3;
- (void)_cleanExpiredDataItems;
- (void)cleanExpiredDataItems;
- (void)_cleanExpiredContacts;
- (void)cleanExpiredContacts;
- (void)_cleanExpiredSearchHistory;
- (void)cleanExpiredSearchHistory;
- (void)cleanExpiredSessionBuffer;
- (void)_cleanExpiredSessionBuffer;
- (void)cleanExpiredFinderMegaVideos;
- (void)_cleanExpiredFinderMegaVideos;
- (void)cleanExpiredFinderShareLiveInfo;
- (void)_cleanExpiredFinderShareLiveInfo;
- (void)cleanExpiredFinderShareShopWindowInfo;
- (void)_cleanExpiredFinderShareShopWindowInfo;
- (void)cleanExpiredFinderPrefetchFeature;
- (void)_cleanExpiredFinderPrefetchFeature;
- (void)setUpMemoryCache;
- (BOOL)deleteStreamFirstPage;
- (BOOL)addSearchContent:(id)arg1;
- (id)getLocalSearchHistory;
- (BOOL)deleteAllSearchRecord;
- (BOOL)deleteSearchRecord:(id)arg1;
- (BOOL)addPostingComment:(id)arg1;
- (BOOL)deletePostingComment:(id)arg1;
- (BOOL)deleteAllPostingSubCommentWithComment:(id)arg1;
- (BOOL)postingCommentSuccessful:(id)arg1;
- (BOOL)markPostingCommentFail:(id)arg1;
- (id)getPostingFailComment;
- (BOOL)hasPostingFailComment;
- (BOOL)markObjectFailCommentsReadWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (BOOL)markObjectFailSubCommentsReadWithTid:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (BOOL)deleteObjectFailCommentWithTid:(id)arg1;
- (id)getPostingRootCommentsWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (id)getPostingSubCommentsWithTid:(id)arg1;
- (unsigned long long)getPostingCommentsCountOfTid:(id)arg1;
- (unsigned long long)getPostingCommentsTidCount;
- (id)getPostingCommentFailMergeOfTid;
- (id)getPostingFailCommentWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (BOOL)refreshPostingCommentWithTid:(id)arg1 byFetchComments:(id)arg2;
- (BOOL)addRecommendWithDataItemArray:(id)arg1 scene:(int)arg2;
- (BOOL)updateAsyncRecommendInfo:(id)arg1 withTid:(id)arg2 scene:(int)arg3;
- (id)getRecommendInfoWithTid:(id)arg1 scene:(int)arg2;
- (BOOL)deleteRecommendInfoWithDataItems:(id)arg1;
- (BOOL)deleteHistoryFirstPage;
- (id)getContactExtInfoWithFinderUsername:(id)arg1 exportUsername:(id)arg2;
- (BOOL)updateContactExtInfoUsername:(id)arg1 fansCount:(unsigned long long)arg2 friendFollowCount:(unsigned long long)arg3;
- (id)updateContactExtInfoForUser:(id)arg1 updateBlock:(id /* block */)arg2;
- (BOOL)removeEventInfoFromContactExtInfoWithUsername:(id)arg1;
- (BOOL)updateContextExtInfoWithRemovedNotifceInfo:(id)arg1 username:(id)arg2;
- (BOOL)addFeedPreloadInfoArray:(id)arg1;
- (id)getFeedPreloadObjectInfoWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (BOOL)addSessionBufferWithTid:(id)arg1 scene:(int)arg2 sessionString:(id)arg3;
- (BOOL)addSessionBufferWithTid:(id)arg1 scene:(int)arg2 sessionString:(id)arg3 extraKey:(id)arg4;
- (id)getSessionBufferWithTid:(id)arg1 scene:(int)arg2;
- (id)getSessionBufferWithTid:(id)arg1 scene:(int)arg2 extraKey:(id)arg3;
- (BOOL)addSessionBufferArray:(id)arg1;
- (BOOL)deleteFeedSessionBufferWithDataItems:(id)arg1;
- (BOOL)addFeedTopicInfo:(id)arg1;
- (BOOL)changeFeedTopicInfoFollowStatus:(id)arg1 followStatus:(BOOL)arg2;
- (id)getFeedTopicInfoWithTopicID:(id)arg1;
- (BOOL)updateFeedFriendsLikeInfoListWithTid:(id)arg1 likeInfoArray:(id)arg2 isFirstPage:(BOOL)arg3;
- (BOOL)changeFeedFriendsLikeInfoLikeStatusWithTid:(id)arg1 likeID:(unsigned long long)arg2 likeStatus:(BOOL)arg3;
- (id)likeInfosReduplictionRemoving:(id)arg1;
- (BOOL)insertRecommendCategoryArray:(id)arg1;
- (BOOL)cleanRecommendTopicTable;
- (id)getRecommendCategoryArrayWithLimit:(unsigned long long)arg1;
- (BOOL)updateFeedLikeListWithTid:(id)arg1 finderUsername:(id)arg2 likeInfoFirstPage:(id)arg3;
- (id)getLikeListObjectWithTid:(id)arg1 finderUsername:(id)arg2;
- (BOOL)updateFeedFavListWithTid:(id)arg1 finderUsername:(id)arg2 favInfoFirstPage:(id)arg3;
- (id)getFavListWithTid:(id)arg1 finderUsername:(id)arg2;
- (BOOL)updateVideoPreloadInfoWith:(id)arg1;
- (BOOL)deleteVideoPreloadInfoWithTid:(id)arg1;
- (void)cleanVideoPreloadInfos;
- (id)getPreloadInfoWithTid:(id)arg1;
- (BOOL)updateTimelineCacheWithTabType:(unsigned long long)arg1 dataArray:(id)arg2 feedType:(unsigned long long)arg3 limitCount:(unsigned long long)arg4;
- (BOOL)updateDataItemExtendObject:(id)arg1 updateAction:(id /* block */)arg2;
- (BOOL)deleteTimelineCacheWithTabType:(unsigned long long)arg1 dataArray:(id)arg2 feedType:(unsigned long long)arg3;
- (id)getLocalStreamFirstPage:(int)arg1 feedType:(unsigned long long)arg2;
- (id)getLocalStreamFirstPage:(int)arg1 feedType:(unsigned long long)arg2 limitCount:(unsigned long long)arg3;
- (BOOL)deleteTimelineDataItemWithTabType:(int)arg1;
- (id)getHistoryCachePage:(int)arg1;
- (BOOL)updateLocalBackupFeedArray:(id)arg1 commentScene:(int)arg2 feedSource:(unsigned long long)arg3;
- (BOOL)removeLocalBackupFeedWithTidArray:(id)arg1;
- (BOOL)removeAllLocalBackupFeeds;
- (id)getLocalBackupFeedTidArrayWithPullType:(unsigned long long)arg1 commentScene:(int)arg2 limitCount:(unsigned long long)arg3;
- (id)getLocalBackupFeedsWithPullType:(unsigned long long)arg1 commentScene:(int)arg2 shouldCheckDownload:(BOOL)arg3 limitCount:(unsigned long long)arg4;
- (id)_getLocalBackupFeedInfoArrayWithPullType:(unsigned long long)arg1 commentScene:(int)arg2;
- (BOOL)hasEnoughValidFeeds:(unsigned long long)arg1 pullType:(unsigned long long)arg2 commentScene:(int)arg3;
- (void)cleanExpiredLocalBackupCache;
- (BOOL)updateLikeBufferWithDataItem:(id)arg1 scene:(int)arg2;
- (id)getLikeBufferModelWithTid:(id)arg1 scene:(int)arg2;
- (void)updateLikeBufferIncFriendLikeCount:(long long)arg1 tid:(id)arg2;
- (id)getLikeBufferWithTid:(id)arg1 scene:(int)arg2;
- (BOOL)cleanLikeBufferWithDataItems:(id)arg1;
- (void)cleanExpiredJumpInfo;
- (BOOL)saveJumpInfoArrays:(id)arg1 scene:(int)arg2;
- (id)getJumpInfoArrayWithPrimaryIdArray:(id)arg1 svrSourceType:(unsigned long long)arg2 scene:(int)arg3;
- (BOOL)deleteJumpInfoWithPrimaryId:(id)arg1 svrSourceType:(unsigned long long)arg2 scene:(int)arg3;
- (BOOL)saveAdJumpInfoArray:(id)arg1 tid:(id)arg2 scene:(int)arg3;
- (void)cleanExpiredJumpInfoContainer;
- (BOOL)saveJumpInfoContainer:(id)arg1 withTid:(id)arg2 scene:(int)arg3 config:(id)arg4;
- (id)getLastJumpInfoContainerWithTid:(id)arg1;
- (id)getJumpInfoContainerWithTid:(id)arg1 scene:(int)arg2;
- (id)getJumpInfoContainerWithTid:(id)arg1 scene:(int)arg2 forbidCopy:(BOOL)arg3;
- (BOOL)deleteJumpInfoContainerWithTid:(id)arg1 scene:(int)arg2;
- (BOOL)updatePoiBasicInfo:(id)arg1;
- (id)poiBasicInfoWithPoiId:(id)arg1;
- (void)cleanExpiredPoiBasicInfo;
- (BOOL)updatePoiRecommendDishesInfo:(id)arg1;
- (id)poiRecommendDishesInfoWithPoiId:(id)arg1;
- (void)cleanExpiredPoiRecommendDishesInfo;
- (BOOL)updateClubChatroomMapInfo:(id)arg1;
- (id)clubChatroomMapInfoWithChatroomId:(id)arg1;
- (id)clubContactWithChatroomId:(id)arg1;
- (void)cleanExpiredClubChatroomMapInfo;
- (id)getMPInterestDataWithSessionId:(id)arg1;
- (BOOL)saveMPInterestData:(id)arg1;
- (BOOL)deleteMPInterestDataWithSessionId:(id)arg1;
- (BOOL)removeAllMPInterestData;
- (void)cleanExpiredFinderMPInterestData;
- (BOOL)addFinderMegaVideoWithArray:(id)arg1;
- (BOOL)addFinderMegaVideo:(id)arg1;
- (BOOL)deleteFinderMegaVideoWithVideoId:(id)arg1;
- (BOOL)deleteFinderMegaVideoWithDataItemTid:(id)arg1;
- (BOOL)updateFinderMegaVideo:(id)arg1;
- (BOOL)updateFinderMegaVideo:(id)arg1 isLike:(BOOL)arg2;
- (BOOL)updateFinderMegaVideo:(id)arg1 isFav:(BOOL)arg2;
- (BOOL)updateFinderMegaVideo:(id)arg1 isPrivate:(BOOL)arg2;
- (id)getLocalFinderMegaVideoWithVideoId:(id)arg1;
- (id)getLocalFinderMegaVideoWithDataItemTid:(id)arg1;
- (BOOL)updateFinderMegaVideoFirstPageCacheWithUsername:(id)arg1 pageType:(unsigned long long)arg2 megaVideos:(id)arg3;
- (id)getLocalFirstPageCacheFinderMegaVideosWithUsername:(id)arg1 pageType:(unsigned long long)arg2;
- (id)getLocalFinderMegaVideosWithVideoIds:(id)arg1;
- (void)updateFinderMegaVideoCacheTime:(id)arg1;
- (void)addFinderMegaVideoContact:(id)arg1;
- (BOOL)addFinderMegavideoBulletComment:(id)arg1;
- (BOOL)deleteFinderMegavideoBulletCommentWithVideoId:(id)arg1 commentId:(id)arg2;
- (id)getLocalFinderMegaVideoBulletCommentWithVideoId:(id)arg1;
- (void)updateFinderMegaVideoBulletCommentCacheTime:(id)arg1;
- (BOOL)updateLiveInfoWithDataItem:(id)arg1;
- (BOOL)updateShareLiveInfoWithDataItem:(id)arg1;
- (BOOL)updateShareLiveInfoWithDataItemArray:(id)arg1;
- (BOOL)updateShareLiveInfo:(id)arg1;
- (BOOL)updateShareLiveInfoWithArray:(id)arg1;
- (id)getShareLiveInfoWithTid:(id)arg1 liveId:(id)arg2;
- (id)getShareLiveInfoWithLiveId:(id)arg1;
- (id)getShareLiveInfoWithExportId:(id)arg1;
- (BOOL)addParseContentInfoWithTid:(id)arg1 parseContentModel:(id)arg2;
- (id)getParseContentModelWithTid:(id)arg1;
- (BOOL)cleanParseContentModelWithDataItems:(id)arg1;
- (BOOL)saveDataItemsAndExtraInfo:(id)arg1 entryScene:(int)arg2 scene:(int)arg3;
- (void)mergeDataItemExtraInfoWithDataArray:(id)arg1 entryScene:(int)arg2 scene:(int)arg3;
- (BOOL)insertOrUpdateDataItemMediaInfos:(id)arg1;
- (BOOL)addEventInfoWithModel:(id)arg1;
- (id)getEventInfoWithUsername:(id)arg1;
- (BOOL)addFeedBindEventInfoWithDataArray:(id)arg1;
- (void)cleanExpiredBindEventInfo;
- (id)getFeedBindEventInfoWithEventID:(unsigned long long)arg1;
- (BOOL)feedEventInfoIllegalWithEventID:(unsigned long long)arg1;
- (void)updateWechatContactExtDatasForName:(id)arg1 ensureExists:(BOOL)arg2 traceInfo:(id)arg3 updateBlock:(id /* block */)arg4;
- (id)wechatContactExtDataForName:(id)arg1;
- (BOOL)updateVideoPlayInfoWithTid:(id)arg1 playingTimeRecently:(unsigned long long)arg2 contextID:(id)arg3 mediaPath:(id)arg4 tempPath:(id)arg5 imagePathArray:(id)arg6;
- (BOOL)updateVideoStartPlayTimeWithTid:(id)arg1 playingTimeRecently:(unsigned long long)arg2 contextID:(id)arg3;
- (id)getVideoPlayInfoArrayByPlayingTimeBeforTimestamp:(unsigned long long)arg1;
- (BOOL)deletePlayInfosByPlayingTimeBeforTimestamp:(unsigned long long)arg1;
- (id)getDeletePlayInfosWithoutLastestTenFeeds;
- (id)getPlayInfosWithFeedSet:(id)arg1;
- (id)getLastestPlayFileInfosWithContextIDArray:(id)arg1;
- (void)deleteLastestPlayFileInfosWithInfos:(id)arg1;
- (id)randomVideoFeed;
- (BOOL)updatePlayHadReadStatusWithTid:(id)arg1 scene:(int)arg2;
- (BOOL)checkFeedHadReadInAnySceneWithTid:(id)arg1;
- (BOOL)checkFeedHadReadInSpecialSceneWithTid:(id)arg1 scene:(int)arg2;
- (BOOL)cleanExpiredFeedHadReadStatusWithDataItems:(id)arg1;
- (unsigned long long)feedExposeTimesWithTid:(id)arg1;
- (BOOL)updateFeedExposeTimesWithTid:(id)arg1;
- (void)cleanOverdueExposureTime;
- (unsigned long long)currentDateStrToInteger;
- (id)getDramaInfoWithTopicID:(unsigned long long)arg1;
- (BOOL)updateDramaInfos:(id)arg1;
- (BOOL)deleteDramaInfos:(id)arg1;
- (id)getCourseInfoWithTopicID:(unsigned long long)arg1;
- (BOOL)updateCourseInfos:(id)arg1;
- (BOOL)deleteCourseInfos:(id)arg1;
- (BOOL)addSceneRelatedInfoWithDataItemArray:(id)arg1 scene:(int)arg2;
- (id)getSceneRelatedInfoWithTid:(id)arg1 scene:(int)arg2;
- (BOOL)addPostingFeedWithDataItem:(id)arg1;
- (BOOL)addPostingFeedWithDataItemArray:(id)arg1;
- (BOOL)deletePostingFeedWithTid:(id)arg1;
- (BOOL)deletePostingFeedWithDataItem:(id)arg1;
- (id)getAuthorPostingDataItemWithUsername:(id)arg1;
- (BOOL)updateUserFirstPageWithUsername:(id)arg1 tidArray:(id)arg2;
- (BOOL)insertPostedSuccessFeedTidToProfileCache:(id)arg1 tid:(id)arg2;
- (id)getUserFirstPageWithUsername:(id)arg1;
- (void)updateGlobalPlaybackInfoWithTid:(id)arg1 playbackTime:(double)arg2 maxPlaybackTime:(double)arg3 stopPlayTimestamp:(id)arg4 contentVM:(id)arg5 callBack:(id /* block */)arg6;
- (id)getGlobalPlaybackInfoWithTid:(id)arg1;
- (void)cleanExpiredGlobalPlaybackInfo;
- (id)blackListTableWithUsername:(id)arg1;
- (id)fansTableWithUsername:(id)arg1;
- (id)finderAuthorMentionTableWithUsername:(id)arg1;
- (id)authorFeedLikeListWithUsername:(id)arg1;
- (id)authorFeedFavListWithUsername:(id)arg1;
- (void)cleanOldAccountDataWithUsernamesSet:(id)arg1;
- (id)getFinderMembershipFollowInfoWithUsername:(id)arg1;
- (BOOL)updateFinderMembershipFollowInfo:(id)arg1;
- (BOOL)updateFinderMembershipFollowInfoWithUsername:(id)arg1 visitorStatus:(unsigned long long)arg2;
- (id)getFinderMembershipDetailInfoWithUsername:(id)arg1;
- (BOOL)updateFinderMembershipDetailInfo:(id)arg1;
- (BOOL)updateFinderMembershipFeedFirstPageCacheWithUsername:(id)arg1 pageType:(unsigned long long)arg2 collectionTopicId:(unsigned long long)arg3 dataArray:(id)arg4;
- (id)getLocalFinderMembershipFeedsWithUsername:(id)arg1 pageType:(unsigned long long)arg2 collectionTopicId:(unsigned long long)arg3;
- (BOOL)updateFinderMembershipContactFirstPageCacheWithPageType:(unsigned long long)arg1 contactArray:(id)arg2;
- (id)getLocalFinderMembershipContactsWithPageType:(unsigned long long)arg1;
- (id)dataBase;
- (void)setDataBase:(id)arg1;
- (id)contactTable;
- (void)setContactTable:(id)arg1;
- (id)finderTable;
- (void)setFinderTable:(id)arg1;
- (id)objectMonoDataTable;
- (void)setObjectMonoDataTable:(id)arg1;
- (id)userStickyPageTable;
- (void)setUserStickyPageTable:(id)arg1;
- (id)mentionTable;
- (void)setMentionTable:(id)arg1;
- (id)streamFirstPageTable;
- (void)setStreamFirstPageTable:(id)arg1;
- (id)followingTable;
- (void)setFollowingTable:(id)arg1;
- (id)likeFirstPageTable;
- (void)setLikeFirstPageTable:(id)arg1;
- (id)mentionedFirstPageTable;
- (void)setMentionedFirstPageTable:(id)arg1;
- (id)searchHistoryTable;
- (void)setSearchHistoryTable:(id)arg1;
- (id)postingCommentTable;
- (void)setPostingCommentTable:(id)arg1;
- (id)dataItemRecommendTable;
- (void)setDataItemRecommendTable:(id)arg1;
- (id)historyFirstPageTable;
- (void)setHistoryFirstPageTable:(id)arg1;
- (id)contactExtInfoTable;
- (void)setContactExtInfoTable:(id)arg1;
- (id)feedPreloadObjectTable;
- (void)setFeedPreloadObjectTable:(id)arg1;
- (id)feedSessionTable;
- (void)setFeedSessionTable:(id)arg1;
- (id)refuseLikeListTable;
- (void)setRefuseLikeListTable:(id)arg1;
- (id)shieldLikeListTable;
- (void)setShieldLikeListTable:(id)arg1;
- (id)feedVideoPreloadTable;
- (void)setFeedVideoPreloadTable:(id)arg1;
- (id)timelineTabFeedInfo;
- (void)setTimelineTabFeedInfo:(id)arg1;
- (id)localBackupFeedInfoTable;
- (void)setLocalBackupFeedInfoTable:(id)arg1;
- (id)likeBufferInfoTable;
- (void)setLikeBufferInfoTable:(id)arg1;
- (id)finderParseContentInfoTable;
- (void)setFinderParseContentInfoTable:(id)arg1;
- (id)finderPlayInfoTable;
- (void)setFinderPlayInfoTable:(id)arg1;
- (id)playStatusTable;
- (void)setPlayStatusTable:(id)arg1;
- (id)exposeDataTable;
- (void)setExposeDataTable:(id)arg1;
- (id)postingFeedTable;
- (void)setPostingFeedTable:(id)arg1;
- (id)userpageCacheModel;
- (void)setUserpageCacheModel:(id)arg1;
- (id)globalPlaybackInfoTable;
- (void)setGlobalPlaybackInfoTable:(id)arg1;
- (id)feedCommentListTable;
- (void)setFeedCommentListTable:(id)arg1;
- (id)finderMegaVideoTable;
- (void)setFinderMegaVideoTable:(id)arg1;
- (id)finderMegaVideoFirstPageCacheTable;
- (void)setFinderMegaVideoFirstPageCacheTable:(id)arg1;
- (id)finderMegaVideoBulletCommentTable;
- (void)setFinderMegaVideoBulletCommentTable:(id)arg1;
- (id)finderEventInfoTable;
- (void)setFinderEventInfoTable:(id)arg1;
- (id)finderBindEventInfoTable;
- (void)setFinderBindEventInfoTable:(id)arg1;
- (id)finderAuthorDataBase;
- (void)setFinderAuthorDataBase:(id)arg1;
- (id)authorTableUnitDict;
- (void)setAuthorTableUnitDict:(id)arg1;
- (id)feedTopicInfoTable;
- (void)setFeedTopicInfoTable:(id)arg1;
- (id)recommendCategoryStringTable;
- (void)setRecommendCategoryStringTable:(id)arg1;
- (id)finderShareLiveInfoTable;
- (void)setFinderShareLiveInfoTable:(id)arg1;
- (id)finderWechatExtDatasTable;
- (void)setFinderWechatExtDatasTable:(id)arg1;
- (id)finderFeedDraftTable;
- (void)setFinderFeedDraftTable:(id)arg1;
- (id)finderLocalDraftTable;
- (void)setFinderLocalDraftTable:(id)arg1;
- (id)finderBrandMapTable;
- (void)setFinderBrandMapTable:(id)arg1;
- (id)finderObjectContainerInfoTable;
- (void)setFinderObjectContainerInfoTable:(id)arg1;
- (id)poiBasicInfoTable;
- (void)setPoiBasicInfoTable:(id)arg1;
- (id)poiRecommendDishesInfoTable;
- (void)setPoiRecommendDishesInfoTable:(id)arg1;
- (id)finderContactOneTimeInfoTable;
- (void)setFinderContactOneTimeInfoTable:(id)arg1;
- (id)finderKeywordConfigTable;
- (void)setFinderKeywordConfigTable:(id)arg1;
- (id)finderJumpInfoContainerTable;
- (void)setFinderJumpInfoContainerTable:(id)arg1;
- (id)finderMPInterestDataTable;
- (void)setFinderMPInterestDataTable:(id)arg1;
- (id)finderCommentMentionContactTable;
- (void)setFinderCommentMentionContactTable:(id)arg1;
- (id)finderJumpInfoTable;
- (void)setFinderJumpInfoTable:(id)arg1;
- (id)finderClubChatroomMapInfoTable;
- (void)setFinderClubChatroomMapInfoTable:(id)arg1;
- (id)finderLiveShopWindowShareInfoTable;
- (void)setFinderLiveShopWindowShareInfoTable:(id)arg1;
- (id)finderMembershipFollowInfoTable;
- (void)setFinderMembershipFollowInfoTable:(id)arg1;
- (id)finderMembershipDetailInfoTable;
- (void)setFinderMembershipDetailInfoTable:(id)arg1;
- (id)finderMembershipFeedFirstPageCacheTable;
- (void)setFinderMembershipFeedFirstPageCacheTable:(id)arg1;
- (id)finderMembershipContactFirstPageCacheTable;
- (void)setFinderMembershipContactFirstPageCacheTable:(id)arg1;
- (id)finderCourseInfoTable;
- (void)setFinderCourseInfoTable:(id)arg1;
- (id)finderDramaInfoTable;
- (void)setFinderDramaInfoTable:(id)arg1;
- (id)finderSceneRelatedInfoTable;
- (void)setFinderSceneRelatedInfoTable:(id)arg1;
- (void)setExposeDateFormatter:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setCleanQueue:(id)arg1;
- (id)jumpInfoContainerSafeCache;
- (void)setJumpInfoContainerSafeCache:(id)arg1;
- (id)jumpInfoContainerLastSafeCache;
- (void)setJumpInfoContainerLastSafeCache:(id)arg1;
- (id)finderPrefetchFeatureTable;
- (void)setFinderPrefetchFeatureTable:(id)arg1;
- (BOOL)replaceFinderObjectByVersion;
- (void)setReplaceFinderObjectByVersion:(BOOL)arg1;
- (void).cxx_destruct;
@end
