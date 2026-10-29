@interface WCSubTimelineSessionMgr : MMUserService <MMServiceProtocol>
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
    NSString * nowGroupId; // +0x90
    long long m_newFeedCount; // +0x98
    WCMomentsCommentBrowseAggreReport * _commentBrowseAggreReporter; // +0xa0
}
- (void)onServiceInit;
- (void)dealloc;
- (void)setGroupId:(id)arg1;
- (void)setNewFeedCount:(long long)arg1;
- (void)onViewWillBePoped:(BOOL)arg1;
- (void)onViewWillBePushed:(BOOL)arg1;
- (void)onSessionStart;
- (void)onSessionEnd;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)onReloadDataWrap;
- (void)onViewDidAppear:(BOOL)arg1 withVC:(id)arg2;
- (void)onViewDidDisappear:(BOOL)arg1;
- (void)enterTimelinePage;
- (void)exitTimelinePage;
- (void)reconstructSessionStatItem:(unsigned long long)arg1;
- (void)reportSessionStatItem:(unsigned long long)arg1;
- (id)getSessionId;
- (void)addCommentOnFeed:(id)arg1;
- (void)addLikeOnFeed:(id)arg1;
- (void)addMediaTime:(double)arg1 feedId:(id)arg2;
- (void)addClickOnFeed:(unsigned long long)arg1 feedId:(id)arg2;
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
- (double)tsTableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tsTableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tsTableView:(id)arg1 calcDataItemIndex:(long long)arg2;
- (id)findTableView:(id)arg1;
- (id)commentBrowseAggreReporter;
- (void)setCommentBrowseAggreReporter:(id)arg1;
- (void).cxx_destruct;
@end
