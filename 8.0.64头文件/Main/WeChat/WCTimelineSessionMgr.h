@interface WCTimelineSessionMgr : MMUserService <MMServiceProtocol, TimelineSessionSwizzleExt>
{
    MMTableView * m_tableView; // +0x8
    WCTimelineSessionStatItem * sessionStatItem; // +0x10
    unsigned int pId; // +0x18
    NSString * pName; // +0x20
    unsigned int seq; // +0x28
    NSObject<OS_dispatch_queue> * queue; // +0x30
    double screenHeight; // +0x38
    CGRect statusRect; // +0x40
    UIWindow * uiWindow; // +0x60
    double statusNavHeight; // +0x68
    double realScreenHeight; // +0x70
    unsigned long long lastEnterBackgroundTime; // +0x78
    BOOL isNowInTimelinePage; // +0x80
    BOOL isHasScroll; // +0x81
    unsigned long long reloadTime; // +0x88
    NSMutableArray * lastVisiableFeeds; // +0x90
    NSString * _lastAdSessionID; // +0x98
    NSString * didLoadSessionId; // +0xa0
    BOOL _isInSession; // +0xa8
    BOOL _isActive; // +0xa9
    NSDate * _mediaTimeDate; // +0xb0
    NSDate * _enterBackgroundTime; // +0xb8
    double _backgroundTime; // +0xc0
    NSString * _curFeedId; // +0xc8
    NSString * _redDotInfoStr; // +0xd0
    WCMomentsCommentBrowseAggreReport * _commentBrowseAggreReporter; // +0xd8
}
- (void)onServiceInit;
- (void)dealloc;
- (void)onViewDidBePopedOrDismissed:(BOOL)arg1;
- (void)onViewWillBePushed:(BOOL)arg1;
- (void)onViewDealloc;
- (void)onViewDidLoad;
- (void)onSessionStart;
- (void)onSessionEnd;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)onReloadDataWrap;
- (void)onViewDidPopOrDismiss:(BOOL)arg1 withVC:(id)arg2;
- (void)onViewDidAppear:(BOOL)arg1 withVC:(id)arg2;
- (void)onViewDidDisappear:(BOOL)arg1;
- (void)enterTimelinePage;
- (void)exitTimelinePage;
- (void)reconstructSessionStatItem:(unsigned long long)arg1;
- (void)reportSessionStatItem:(unsigned long long)arg1;
- (id)formatJsonStr:(id)arg1;
- (id)getTimelineSessionStatItemAttrStr:(id)arg1;
- (id)getTimelineSessionStatItemAttr:(id)arg1 withDataArrays:(id)arg2 withSubSeq:(unsigned long long)arg3 withSubSeqSum:(unsigned long long)arg4;
- (id)getFeedExposureDataAttr:(id)arg1;
- (void)onScrollViewDidEndDecelerating:(id)arg1;
- (void)onScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)onScrollViewDidScroll:(id)arg1;
- (void)initTableViewAndHeight:(id)arg1;
- (id)getTableView;
- (id)getTimelineSessionStatItem;
- (id)getTimelineExposureFeedId:(id)arg1;
- (void)calcFeedExposureSizeAndTime:(id)arg1 withStayed:(BOOL)arg2 withTime:(unsigned long long)arg3;
- (void)calcFeedExposureSizeAndTime:(id)arg1 withEntered:(BOOL)arg2 withTime:(unsigned long long)arg3;
- (void)calcFeedExposureSizeAndTime2:(id)arg1 withTime:(unsigned long long)arg2;
- (void)checkItemExposed:(id)arg1;
- (double)tsTableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tsTableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tsTableView:(id)arg1 calcDataItemIndex:(long long)arg2;
- (id)getNowViewController;
- (id)findTableView:(id)arg1;
- (void)reportTimelinePerformanceDataByIDKey:(unsigned long long)arg1 withTotalCostTime:(unsigned long long)arg2 withCallNum:(unsigned long long)arg3;
- (id)getSessionId;
- (void)updateIsActive:(BOOL)arg1;
- (BOOL)getIsActive;
- (void)RecordEnterBackground;
- (void)RecordEnterForegorund;
- (void)startMediaTime:(id)arg1;
- (void)stopMediaTime;
- (void)addCommentOnFeed:(id)arg1;
- (void)addLikeOnFeed:(id)arg1;
- (void)addMediaTime:(double)arg1 feedId:(id)arg2;
- (void)addClickOnFeed:(unsigned long long)arg1 feedId:(id)arg2;
- (void)checkScrollEnd:(id)arg1;
- (void)onTimelineRequest:(id)arg1 didFinishWithResponse:(id)arg2;
- (void)onTimelineRequest:(id)arg1 didPrepareWithPageType:(long long)arg2;
- (void)_recordNextPageLocationsWithRequest:(id)arg1 pageType:(long long)arg2;
- (id)commentBrowseAggreReporter;
- (BOOL)isInSession;
- (id)mediaTimeDate;
- (void)setMediaTimeDate:(id)arg1;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (id)enterBackgroundTime;
- (void)setEnterBackgroundTime:(id)arg1;
- (double)backgroundTime;
- (void)setBackgroundTime:(double)arg1;
- (id)curFeedId;
- (void)setCurFeedId:(id)arg1;
- (id)redDotInfoStr;
- (void)setRedDotInfoStr:(id)arg1;
- (void)setCommentBrowseAggreReporter:(id)arg1;
- (void).cxx_destruct;
@end
