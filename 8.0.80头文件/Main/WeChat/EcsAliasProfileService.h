@interface EcsAliasProfileService : MMUserService <MMServiceProtocol>
{
    unsigned int _pendingFetchEventId; // +0x8
    EcsAliasProfileInfo * _cachedProfile; // +0x10
    long long _seqCounter; // +0x18
    NSMutableArray * _pendingFetchCompletions; // +0x20
}
- (id)pendingFetchCompletions;
- (void)reportStability:(id)arg1 value:(int)arg2 stage:(id)arg3 errCode:(int)arg4 errMsg:(id)arg5;
- (void)flushPendingFetchCompletionsWithInfo:(id)arg1 error:(id)arg2;
- (id)currentProfile;
- (void)loadCachedProfileFromMMKV;
- (void)persistProfile:(id)arg1;
- (void)fetchCurrentProfileWithCompletion:(id /* block */)arg1;
- (id)decodeBypProfileBuf:(id)arg1;
- (void)modifyCurrentToProfile:(id)arg1 completion:(id /* block */)arg2;
- (void)applySyncProfile:(id)arg1;
- (void)applyAuthoritativeProfile:(id)arg1 origin:(id)arg2;
- (void)broadcastChangedInfo:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)cachedProfile;
- (void)setCachedProfile:(id)arg1;
- (long long)seqCounter;
- (void)setSeqCounter:(long long)arg1;
- (unsigned int)pendingFetchEventId;
- (void)setPendingFetchEventId:(unsigned int)arg1;
- (void)setPendingFetchCompletions:(id)arg1;
- (void).cxx_destruct;
@end
