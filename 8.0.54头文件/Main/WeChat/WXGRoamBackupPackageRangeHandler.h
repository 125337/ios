@interface WXGRoamBackupPackageRangeHandler : NSObject <IChatLogDataMgrExt>
{
    unsigned long long _totalSize; // +0x8
    NSObject<OS_dispatch_queue> * _rangeQueue; // +0x10
    id /* block */ _completeBlock; // +0x18
    NSObject<OS_dispatch_semaphore> * _calculateSema; // +0x20
    NSArray * _convTimeRangeList; // +0x28
    NSArray * _usernameList; // +0x30
    WXGChatLogSessionUtility * _sessionUtility; // +0x38
    unsigned long long _rangeCulculateTaskCount; // +0x40
    NSRecursiveLock * _taskCountLock; // +0x48
}
- (id)init;
- (id)getRangeTypeName:(int)arg1;
- (void)loadRangeTypeSessionsWithRange:(id)arg1;
- (unsigned long long)getRangeTypeCount:(int)arg1;
- (void)appendComma:(id)arg1;
- (id)getSessionNameByUserName:(id)arg1;
- (id)parseRangeItemToString:(id)arg1;
- (id)parseRangeToSymbolString:(id)arg1;
- (id)parseRangeItemIncludeLabelToString:(id)arg1 atIndex:(long long)arg2;
- (id)parseRangeItemIncludeExactUserToString:(id)arg1 atIndex:(long long)arg2;
- (id)parseRangeItemIncludeToString:(id)arg1 atIndex:(long long)arg2;
- (id)parseRangeItemExcludeToString:(id)arg1 atIndex:(long long)arg2;
- (id)parseUserNameToSessionName:(id)arg1;
- (unsigned long long)parseRangeUsersCount:(id)arg1;
- (void)asyncParseRangeToConvsAndSize:(id)arg1 completeBlock:(id /* block */)arg2;
- (id)parseRangeToUsernameList:(id)arg1;
- (void)parseRangeToConversationList:(id)arg1;
- (void)parseRangeToConversationList:(id)arg1 usernameMap:(id)arg2;
- (void)mergeOrDeleteUserNamesFromHasSpecialFriend:(id)arg1 isMerge:(BOOL)arg2 map:(id)arg3;
- (void)mergeOrDeleteUserNamesFromInSpecialLabel:(id)arg1 isMerge:(BOOL)arg2 map:(id)arg3;
- (void)mergeOrDeleteUserNamesFromGroup:(id)arg1 isMerge:(BOOL)arg2 map:(id)arg3;
- (void)mergeOrDeleteUserNamesIntoMap:(id)arg1 isMerge:(BOOL)arg2 map:(id)arg3 beginTime:(unsigned long long)arg4 endTime:(unsigned long long)arg5;
- (id)rangeQueue;
- (void)asyncGetUsersChatLogSize:(id)arg1;
- (void)onChatLogCalculateBackupChatLogEnd:(unsigned long long)arg1;
- (void)onChatLogCalculateBackupChatLogFilter:(id)arg1 totalSize:(unsigned long long)arg2;
- (void)onChatLogDataLoad:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onChatLogDataLoadFinished;
- (unsigned long long)totalSize;
- (void)setTotalSize:(unsigned long long)arg1;
- (void)setRangeQueue:(id)arg1;
- (id /* block */)completeBlock;
- (void)setCompleteBlock:(id /* block */)arg1;
- (id)calculateSema;
- (void)setCalculateSema:(id)arg1;
- (id)convTimeRangeList;
- (void)setConvTimeRangeList:(id)arg1;
- (id)usernameList;
- (void)setUsernameList:(id)arg1;
- (id)sessionUtility;
- (void)setSessionUtility:(id)arg1;
- (unsigned long long)rangeCulculateTaskCount;
- (void)setRangeCulculateTaskCount:(unsigned long long)arg1;
- (id)taskCountLock;
- (void)setTaskCountLock:(id)arg1;
- (void).cxx_destruct;
@end

