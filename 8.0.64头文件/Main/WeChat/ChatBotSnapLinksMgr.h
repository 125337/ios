@interface ChatBotSnapLinksMgr : MMUserService <MMServiceProtocol>
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)hasStarData;
- (unsigned int)getStarCount;
- (BOOL)hasSnapshotInfo;
- (id)genDataIdWithIndex:(unsigned int)arg1;
- (void)insertTraceItem:(id)arg1 complete:(id /* block */)arg2;
- (id)minimizedTaskRecordsWithDataChangeDelegate:(id)arg1;
- (void)saveImageAsTraceDataInBackground:(id)arg1 completion:(id /* block */)arg2;
- (void)getAllTraceItemWithType:(int)arg1 completeHandle:(id /* block */)arg2;
@end
