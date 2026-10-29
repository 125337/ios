@interface MainSessionMgr : MMUserService <IMMNewSessionMgrExt, MainSessionDelayDeleteTaskDelegate, MMServiceProtocol>
{
    BOOL _enableAggregation; // +0x8
    BOOL _aggregationLongPress; // +0x9
    BOOL _reserveSessionEnable; // +0xa
    long long _minTopCountToFold; // +0x10
    long long _visibleUnreadNotifyChatSessionCount; // +0x18
    long long _visibleUnreadSlienceChatSessionCount; // +0x20
    NSMutableArray * _topSessions; // +0x28
    NSMutableArray * _normalSessions; // +0x30
    NSMutableArray * _allTopSessions; // +0x38
    long long _totalTopSessionCount; // +0x40
    long long _chatBoxMinIndex; // +0x48
    NSMutableArray * _delayDeleteTasks; // +0x50
}
+ (BOOL)canShowInMainFrame:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)updateChatBoxEntryMinIndex:(long long)arg1;
- (long long)chatBoxMinIndex;
- (id)visibleSessionEnumerator;
- (long long)visibleSessionIndexForUsername:(id)arg1;
- (id)forwardableSessionEnumerator;
- (long long)visibleTopSessionCount;
- (long long)visibleUnreadNotifyChatSessionCount;
- (long long)visibleUnreadSlienceChatSessionCount;
- (long long)totalTopSessionCount;
- (long long)visibleNormalSessionCount;
- (long long)visibleSessionCount;
- (long long)unreadTopSessionCount;
- (id)topSessionEnumerator;
- (long long)indexOfTopSession:(id)arg1;
- (long long)indexOfNormalSession:(id)arg1;
- (id)getTopSessionAtIndex:(long long)arg1;
- (id)getTopBaseSessionAtIndex:(long long)arg1;
- (id)getTopSessionAtIndex:(long long)arg1 fulFilled:(BOOL)arg2;
- (id)getNormalSessionAtIndex:(long long)arg1;
- (id)getNormalBaseSessionAtIndex:(long long)arg1;
- (id)getNormalSessionAtIndex:(long long)arg1 fulFilled:(BOOL)arg2;
- (void)updateMainSessionList;
- (void)updateMainSessionListNotify:(BOOL)arg1;
- (BOOL)removeSessionWithUserName:(id)arg1;
- (BOOL)hasUnreadVisibleSingleChatSession;
- (BOOL)isAggregationEnable;
- (BOOL)isAggregationLongPress;
- (BOOL)canFoldTopSession;
- (BOOL)isFoldTopSession;
- (void)onNeedReload;
- (void)rebuildMainSessions;
- (BOOL)isReserveSessionEnable;
- (BOOL)isSessionShouldReserve:(id)arg1;
- (void)delayDeleteSession:(id)arg1;
- (void)cancelDelayDelete:(id)arg1;
- (void)commitDelayDelete;
- (long long)delayDeleteWaitingCount;
- (void)onServiceTerminate;
- (void)onDelayDeleteTaskFinish:(id)arg1;
- (long long)minTopCountToFold;
- (void)setMinTopCountToFold:(long long)arg1;
- (void)setVisibleUnreadNotifyChatSessionCount:(long long)arg1;
- (void)setVisibleUnreadSlienceChatSessionCount:(long long)arg1;
- (id)topSessions;
- (void)setTopSessions:(id)arg1;
- (id)normalSessions;
- (void)setNormalSessions:(id)arg1;
- (id)allTopSessions;
- (void)setAllTopSessions:(id)arg1;
- (void)setTotalTopSessionCount:(long long)arg1;
- (void)setChatBoxMinIndex:(long long)arg1;
- (BOOL)enableAggregation;
- (void)setEnableAggregation:(BOOL)arg1;
- (BOOL)aggregationLongPress;
- (void)setAggregationLongPress:(BOOL)arg1;
- (id)delayDeleteTasks;
- (void)setDelayDeleteTasks:(id)arg1;
- (BOOL)reserveSessionEnable;
- (void)setReserveSessionEnable:(BOOL)arg1;
- (void).cxx_destruct;
@end
