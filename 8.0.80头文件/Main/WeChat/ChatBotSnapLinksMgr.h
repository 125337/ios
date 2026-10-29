@interface ChatBotSnapLinksMgr : MMUserService <MMServiceProtocol>
{
    BOOL _hasFetchedUserToolList; // +0x8
    BOOL _isFetchingUserToolList; // +0x9
    UserToolListInfo * _toolListInfoCache; // +0x10
    NSMutableArray * _fetchCompletionBlocks; // +0x18
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)fetchCompletionBlocks;
- (BOOL)hasStarData;
- (unsigned int)getStarCount;
- (BOOL)hasSnapshotInfo;
- (id)genDataIdWithIndex:(unsigned int)arg1;
- (void)insertTraceItem:(id)arg1 complete:(id /* block */)arg2;
- (id)minimizedTaskRecordsWithDataChangeDelegate:(id)arg1;
- (void)saveImageAsTraceDataInBackground:(id)arg1 completion:(id /* block */)arg2;
- (void)getAllTraceItemWithType:(int)arg1 completeHandle:(id /* block */)arg2;
- (void)fetchUserToolList;
- (void)updateUserToolListWithInfo:(id)arg1;
- (void)tryFirstFetchUserToolList;
- (void)fetchUserToolListWithCompletion:(id /* block */)arg1;
- (id)cachedUserToolListInfo;
- (id)cachedUserToolList;
- (BOOL)isUserToolExistsWithAppId:(id)arg1;
- (unsigned int)cachedMaxToolCount;
- (id)cachedJumpCreateWeapp;
- (id)cachedCreateLimitToast;
- (void)deleteUserToolAtIndex:(long long)arg1 toolInfo:(id)arg2;
- (void)addUserTool:(id)arg1 completion:(id /* block */)arg2;
- (void)manageUserToolWithRequest:(id)arg1 logPrefix:(id)arg2 completion:(id /* block */)arg3 failure:(id /* block */)arg4;
- (void)logUserToolListAndNotifyChanged;
- (BOOL)hasFetchedUserToolList;
- (void)setHasFetchedUserToolList:(BOOL)arg1;
- (id)toolListInfoCache;
- (void)setToolListInfoCache:(id)arg1;
- (BOOL)isFetchingUserToolList;
- (void)setIsFetchingUserToolList:(BOOL)arg1;
- (void)setFetchCompletionBlocks:(id)arg1;
- (void).cxx_destruct;
@end
