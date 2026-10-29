@interface SessionSortLogic : NSObject
{
    SessionSortCache * _oSessionSortCache; // +0x8
    SessionFoldCache * _oSessionFoldCache; // +0x10
    NSString * _oldCachePath; // +0x18
    NSString * _newCachePath; // +0x20
    NSString * _foldCachePath; // +0x28
}
- (id)init;
- (void)saveSortDataInternal;
- (void)saveFoldDataInternal;
- (void)loadSortDataInternal;
- (void)loadFoldDataInternal;
- (void)LoadCache;
- (void)SaveCache;
- (id)getCurrentDate;
- (void)TopSession:(id)arg1;
- (void)UntopSession:(id)arg1;
- (void)RemoveUntopSession;
- (id)getTopTime:(id)arg1;
- (id)getUntopTime:(id)arg1;
- (id)getSortTimeForUser:(id)arg1;
- (void)updateSortTimeForUser:(id)arg1;
- (BOOL)isTopSession:(id)arg1;
- (BOOL)isTopSessionCountExceed;
- (unsigned long long)getTopSessionCount;
- (BOOL)hasMergeFlag;
- (void)setMergeFlag;
- (void)setFoldWithSessions:(id)arg1;
- (void)foldSessionByName:(id)arg1;
- (void)unfoldSession:(id)arg1;
- (void)unfoldSessions:(id)arg1;
- (void)unfoldAllSessions;
- (BOOL)isSessionFold:(id)arg1;
- (long long)foldSessionCount;
- (BOOL)isFolded;
- (void).cxx_destruct;
@end

