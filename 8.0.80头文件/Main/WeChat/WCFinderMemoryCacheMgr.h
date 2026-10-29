@interface WCFinderMemoryCacheMgr : NSObject
{
    BOOL _canShowLikeFirecrackerEffect; // +0x8
    double _shareListShowNetTipsTimestap; // +0x10
    WCFinderFeedContentVM * _lastExposeContentVM; // +0x18
    WCFinderVideoPlayDisplayReportInfo * _currentDisplayVideoInfo; // +0x20
    MMLRUCache * _hotCommentInfoCache; // +0x28
    MMLRUCache * _mediaCommentInfoCache; // +0x30
    MMLRUCache * _originalSoundInfoCache; // +0x38
    MMLRUCache * _surveyTaskDataWrapCache; // +0x40
    MMLRUCache * _dataReportSDKCgiInfoCache; // +0x48
    FinderCheckPrefetchConfig * _chekcPrefetchConfig; // +0x50
    MMLRUCache * _clubInfoCache; // +0x58
    MMLRUCache * _jumpCarouselInfoCache; // +0x60
    MMLRUCache * _interestFeedsCache; // +0x68
    MMLRUCache * _liveStateCache; // +0x70
    MMLRUCache * _exportIdFeedCache; // +0x78
    MMLRUCache * _promotionInfoCache; // +0x80
    MMLRUCache * _alertInfosCache; // +0x88
    MMLRUCache * _extendDynmicWordingCache; // +0x90
    MMLRUCache * _halfSheetInfoCache; // +0x98
    MMLRUCache * _showPlayAnchorCache; // +0xa0
    NSMutableArray * _fastSwipeTimeStampArray; // +0xa8
    NSMutableArray * _swipeActionTimeStampArray; // +0xb0
    long long _lastFastSwipeFeedIndex; // +0xb8
    long long _lastFastSwipeTabType; // +0xc0
    NSMutableDictionary * _pathRedDotDic; // +0xc8
    NSMutableSet * _nextLiveNotificationSet; // +0xd0
    NSMutableDictionary * _reserveStatusByNoticeIdDic; // +0xd8
    NSString * _commentVCEmotionTabID; // +0xe0
    NSMutableDictionary * _exitCacheInfoDict; // +0xe8
    MMLRUCache * _adInfoCache; // +0xf0
    unsigned long long _showScrollTipsTimestamp; // +0xf8
    NSMutableDictionary * _lastPathRedDotTipsUuidDic; // +0x100
    MMLRUCache * _columnDataSourceCache; // +0x108
    MMLRUCache * _authorInteractionInfoCache; // +0x110
    MMLRUCache * _displayingLikeMilestoneCache; // +0x118
    WCFinderThreadSafeLRUCache * _dupIdentifierLastPlayCache; // +0x120
    MMLRUCache * _progressAnchorInfoCache; // +0x128
}
- (id)init;
- (void)updateInterestFeedsCacheWithIDStr:(id)arg1 interestFeedListVM:(id)arg2;
- (id)interestFeedsCacheForIDStr:(id)arg1;
- (void)updateJumpCarouselListWithFeedID:(id)arg1 jumpInfoList:(id)arg2;
- (id)jumpInfoListForTid:(id)arg1;
- (void)setLiveClosedWithTid:(id)arg1;
- (BOOL)isLiveClosedWithTid:(id)arg1;
- (void)updateHotCommentListWithFeedID:(id)arg1 hotCommentList:(id)arg2;
- (void)cleanHotCommentListWithFeedID:(id)arg1;
- (id)hotCommentListForTid:(id)arg1;
- (void)updateMediaCommentListWithFeedID:(id)arg1 mediaCommentList:(id)arg2;
- (void)cleanMediaCommentListWithFeedID:(id)arg1;
- (id)mediaCommentListForTid:(id)arg1;
- (id)getAllSurveyTaskDataWraps;
- (void)updateOriginalSoundInfoWithFeedID:(id)arg1 originalSoundInfo:(id)arg2;
- (id)originalSoundInfoForFeedID:(id)arg1;
- (void)setSurveyTaskDataWrap:(id)arg1 forTaskID:(id)arg2;
- (id)surveyTaskDataWrapForTaskID:(id)arg1;
- (void)setDataReportCache:(id)arg1 value:(id)arg2;
- (id)getDataReportCache:(id)arg1;
- (id)getSrtingDataReportCache:(id)arg1 defaultValue:(id)arg2;
- (unsigned long long)getUInt64DataReportCache:(id)arg1 defaultValue:(unsigned long long)arg2;
- (BOOL)getBoolDataReportCache:(id)arg1 defaultValue:(BOOL)arg2;
- (void)updateCheckFeedValidityConfig:(id)arg1;
- (id)feedValidityConfig;
- (id)getClubChatRoomInfoWithChatRoomId:(id)arg1;
- (void)setClubChatRoomInfo:(id)arg1 chatRoomId:(id)arg2;
- (id)cacheKeyWithTid:(id)arg1 commentScene:(int)arg2;
- (void)updateExitCacheInfo:(id)arg1 commentScene:(int)arg2;
- (id)exitCacheInfoWithTid:(id)arg1 commentScene:(int)arg2;
- (void)updateAdInfoWithDataArray:(id)arg1 commentScene:(int)arg2;
- (id)adInfoWithTid:(id)arg1 commentScene:(int)arg2;
- (void)updateFeedKey:(id)arg1 exportIdValue:(id)arg2;
- (id)getExportIdForFeedKey:(id)arg1;
- (void)updateCurrentPlayVideoInfo:(id)arg1 playbackInfo:(id)arg2;
- (void)stopCurrentPlayVideoInfo:(id)arg1;
- (void)dottingFastSwipeActionAtSection:(long long)arg1 contentTid:(id)arg2;
- (void)resetFastSwipeContainer;
- (long long)getRecentFastSwipeDottingCountFrom:(long long)arg1;
- (void)dottingSwipeFeedAction;
- (void)resetSwipeFeedContainer;
- (long long)getRecentSwipeFeedCountFrom:(long long)arg1;
- (void)updatePromotionWithTid:(id)arg1 promotion:(id)arg2;
- (id)getPromotionWithTid:(id)arg1;
- (BOOL)hasShowExtendDynamicWordingWithTid:(id)arg1;
- (void)setShowExtendDynamicWordingWithTid:(id)arg1;
- (BOOL)canShowHalfSheet:(id)arg1 tid:(id)arg2;
- (void)setShowHalfSheet:(id)arg1 tid:(id)arg2;
- (id)getLiveRedDotCtrlInfosWithPath:(id)arg1;
- (void)setLiveRedDotCtrlInfos:(id)arg1 withPath:(id)arg2;
- (void)updateWarningAlertInfoWithTid:(id)arg1 alertInfo:(id)arg2;
- (id)getAlertInfoWithTid:(id)arg1;
- (BOOL)canShowPlayAnchorCacheWithUniqID:(id)arg1;
- (void)updateShowPlayAnchorWithUniqID:(id)arg1;
- (id)progressAnchorInfoWithTid:(id)arg1 commentScene:(int)arg2;
- (void)updateProgressAnchorInfoWithDataArray:(id)arg1 commentScene:(int)arg2;
- (id)lastCommentVCEmotionTabID;
- (void)updateCommentVCEmotionTabID:(id)arg1;
- (BOOL)hasShowNextLiveNotificationWithTid:(id)arg1;
- (void)setShowNextLiveNotificationWithTid:(id)arg1;
- (id)reserveStatusForNoticeId:(id)arg1;
- (void)setReserveStatus:(long long)arg1 forNoticeId:(id)arg2;
- (id)getLastRenderTipsUuidAtPath:(id)arg1;
- (void)updateLastRenderTipsUuidAtPath:(id)arg1 tipsUuid:(id)arg2;
- (id)getColumnCellVMDataSource:(id)arg1;
- (void)updateColumnCellVMDataSource:(id)arg1 tid:(id)arg2;
- (id)lastDupIdentifierWithTid:(id)arg1 commentScene:(int)arg2;
- (void)saveLastDupIdentifierWithTid:(id)arg1 commentScene:(int)arg2 dupIdentifier:(id)arg3;
- (id)getAuthorInteractionInfoForUsername:(id)arg1;
- (BOOL)updateAuthorInteractionInfo:(id)arg1 forUsername:(id)arg2 isFakeClientData:(BOOL)arg3 logDetail:(BOOL)arg4;
- (void)updateAuthorInteractionInfosWithDataArray:(id)arg1;
- (void)updateAuthorInteractionFakeTotalFavCountForUsername:(id)arg1 version:(unsigned long long)arg2 isIncrease:(BOOL)arg3;
- (void)updateAuthorInteractionFakeTotalLikeCountForUsername:(id)arg1 version:(unsigned long long)arg2 isIncrease:(BOOL)arg3;
- (BOOL)isAuthorInteractionInfoClientFakeData:(id)arg1;
- (void)setAuthorInteractionInfo:(id)arg1 isClientFakeData:(BOOL)arg2;
- (id)displayingMilestoneForFeedID:(id)arg1;
- (void)setDisplayingMilestone:(id)arg1 forFeedID:(id)arg2;
- (double)shareListShowNetTipsTimestap;
- (void)setShareListShowNetTipsTimestap:(double)arg1;
- (id)lastExposeContentVM;
- (void)setLastExposeContentVM:(id)arg1;
- (id)currentDisplayVideoInfo;
- (void)setCurrentDisplayVideoInfo:(id)arg1;
- (BOOL)canShowLikeFirecrackerEffect;
- (void)setCanShowLikeFirecrackerEffect:(BOOL)arg1;
- (id)hotCommentInfoCache;
- (void)setHotCommentInfoCache:(id)arg1;
- (id)mediaCommentInfoCache;
- (void)setMediaCommentInfoCache:(id)arg1;
- (id)originalSoundInfoCache;
- (void)setOriginalSoundInfoCache:(id)arg1;
- (id)surveyTaskDataWrapCache;
- (void)setSurveyTaskDataWrapCache:(id)arg1;
- (id)dataReportSDKCgiInfoCache;
- (void)setDataReportSDKCgiInfoCache:(id)arg1;
- (id)chekcPrefetchConfig;
- (void)setChekcPrefetchConfig:(id)arg1;
- (id)clubInfoCache;
- (void)setClubInfoCache:(id)arg1;
- (id)jumpCarouselInfoCache;
- (void)setJumpCarouselInfoCache:(id)arg1;
- (id)interestFeedsCache;
- (void)setInterestFeedsCache:(id)arg1;
- (id)liveStateCache;
- (void)setLiveStateCache:(id)arg1;
- (id)exportIdFeedCache;
- (void)setExportIdFeedCache:(id)arg1;
- (id)promotionInfoCache;
- (void)setPromotionInfoCache:(id)arg1;
- (id)alertInfosCache;
- (void)setAlertInfosCache:(id)arg1;
- (id)extendDynmicWordingCache;
- (void)setExtendDynmicWordingCache:(id)arg1;
- (id)halfSheetInfoCache;
- (void)setHalfSheetInfoCache:(id)arg1;
- (id)showPlayAnchorCache;
- (void)setShowPlayAnchorCache:(id)arg1;
- (id)fastSwipeTimeStampArray;
- (void)setFastSwipeTimeStampArray:(id)arg1;
- (id)swipeActionTimeStampArray;
- (void)setSwipeActionTimeStampArray:(id)arg1;
- (long long)lastFastSwipeFeedIndex;
- (void)setLastFastSwipeFeedIndex:(long long)arg1;
- (long long)lastFastSwipeTabType;
- (void)setLastFastSwipeTabType:(long long)arg1;
- (id)pathRedDotDic;
- (void)setPathRedDotDic:(id)arg1;
- (id)nextLiveNotificationSet;
- (void)setNextLiveNotificationSet:(id)arg1;
- (id)reserveStatusByNoticeIdDic;
- (void)setReserveStatusByNoticeIdDic:(id)arg1;
- (id)commentVCEmotionTabID;
- (void)setCommentVCEmotionTabID:(id)arg1;
- (id)exitCacheInfoDict;
- (void)setExitCacheInfoDict:(id)arg1;
- (id)adInfoCache;
- (void)setAdInfoCache:(id)arg1;
- (unsigned long long)showScrollTipsTimestamp;
- (void)setShowScrollTipsTimestamp:(unsigned long long)arg1;
- (id)lastPathRedDotTipsUuidDic;
- (void)setLastPathRedDotTipsUuidDic:(id)arg1;
- (id)columnDataSourceCache;
- (void)setColumnDataSourceCache:(id)arg1;
- (id)authorInteractionInfoCache;
- (void)setAuthorInteractionInfoCache:(id)arg1;
- (id)displayingLikeMilestoneCache;
- (void)setDisplayingLikeMilestoneCache:(id)arg1;
- (id)dupIdentifierLastPlayCache;
- (void)setDupIdentifierLastPlayCache:(id)arg1;
- (id)progressAnchorInfoCache;
- (void)setProgressAnchorInfoCache:(id)arg1;
- (void).cxx_destruct;
@end
