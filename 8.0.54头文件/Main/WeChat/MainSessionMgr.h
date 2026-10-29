@interface MainSessionMgr : MMUserService <IMMNewSessionMgrExt, MMServiceProtocol>
{
    long long _minTopCountToFold; // +0x8
    NSMutableArray * _topSessions; // +0x10
    NSMutableArray * _normalSessions; // +0x18
    NSMutableArray * _allTopSessions; // +0x20
    long long _totalTopSessionCount; // +0x28
    long long _chatBoxMinIndex; // +0x30
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)updateChatBoxEntryMinIndex:(long long)arg1;
- (long long)chatBoxMinIndex;
- (id)visibleSessionEnumerator;
- (id)forwardableSessionEnumerator;
- (long long)visibleTopSessionCount;
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
- (BOOL)canFoldTopSession;
- (BOOL)isFoldTopSession;
- (void)onNeedReload;
- (void)rebuildMainSessions;
- (long long)minTopCountToFold;
- (void)setMinTopCountToFold:(long long)arg1;
- (id)topSessions;
- (void)setTopSessions:(id)arg1;
- (id)normalSessions;
- (void)setNormalSessions:(id)arg1;
- (id)allTopSessions;
- (void)setAllTopSessions:(id)arg1;
- (void)setTotalTopSessionCount:(long long)arg1;
- (void)setChatBoxMinIndex:(long long)arg1;
- (void).cxx_destruct;
@end

