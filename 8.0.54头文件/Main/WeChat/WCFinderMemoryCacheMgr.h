@interface WCFinderMemoryCacheMgr : NSObject
{
    double _shareListShowNetTipsTimestap; // +0x8
    WCFinderFeedContentVM * _lastExposeContentVM; // +0x10
    WCFinderVideoPlayDisplayReportInfo * _currentDisplayVideoInfo; // +0x18
    MMLRUCache * _hotCommentInfoCache; // +0x20
    MMLRUCache * _originalSoundInfoCache; // +0x28
    MMLRUCache * _surveyTaskDataWrapCache; // +0x30
    MMLRUCache * _dataReportSDKCgiInfoCache; // +0x38
    FinderCheckPrefetchConfig * _chekcPrefetchConfig; // +0x40
    MMLRUCache * _clubInfoCache; // +0x48
    MMLRUCache * _jumpCarouselInfoCache; // +0x50
    MMLRUCache * _interestFeedsCache; // +0x58
    MMLRUCache * _liveStateCache; // +0x60
    MMLRUCache * _exportIdFeedCache; // +0x68
    MMLRUCache * _promotionInfoCache; // +0x70
    MMLRUCache * _alertInfosCache; // +0x78
    MMLRUCache * _extendDynmicWordingCache; // +0x80
    NSMutableArray * _fastSwipeTimeStampArray; // +0x88
    NSMutableArray * _swipeActionTimeStampArray; // +0x90
    long long _lastFastSwipeFeedIndex; // +0x98
    long long _lastFastSwipeTabType; // +0xa0
    NSMutableDictionary * _pathRedDotDic; // +0xa8
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
- (id)getLiveRedDotCtrlInfosWithPath:(id)arg1;
- (void)setLiveRedDotCtrlInfos:(id)arg1 withPath:(id)arg2;
- (void)updateWarningAlertInfoWithTid:(id)arg1 alertInfo:(id)arg2;
- (id)getAlertInfoWithTid:(id)arg1;
- (double)shareListShowNetTipsTimestap;
- (void)setShareListShowNetTipsTimestap:(double)arg1;
- (id)lastExposeContentVM;
- (void)setLastExposeContentVM:(id)arg1;
- (id)currentDisplayVideoInfo;
- (void)setCurrentDisplayVideoInfo:(id)arg1;
- (id)hotCommentInfoCache;
- (void)setHotCommentInfoCache:(id)arg1;
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
- (void).cxx_destruct;
@end

