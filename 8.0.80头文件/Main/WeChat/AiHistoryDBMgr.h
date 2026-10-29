@interface AiHistoryDBMgr : MMUserService <MMServiceProtocol>
{
    WCTDatabase * _database; // +0x8
    WCTTable * _msgTable; // +0x10
    WCTTable * _chatTable; // +0x18
    WCTTable * _statusTable; // +0x20
    NSObject<OS_dispatch_queue> * _dbQueue; // +0x28
    NSMutableSet * _ftsDisableSet; // +0x30
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)addOrUpdateMsg:(id)arg1 completion:(id /* block */)arg2;
- (void)getMsgsWithSearchId:(id)arg1 chatId:(id)arg2 offset:(int)arg3 completion:(id /* block */)arg4;
- (void)deleteMsg:(id)arg1 completion:(id /* block */)arg2;
- (void)getAllMsgsWithCompletion:(id /* block */)arg1;
- (void)clearAllMsgsWithCompletion:(id /* block */)arg1;
- (id)getUnindexedMsgs:(long long)arg1;
- (id)getMsgs:(id)arg1;
- (void)addOrUpdateChat:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteChat:(id)arg1 completion:(id /* block */)arg2;
- (void)getChatsWithChatId:(id)arg1 chatType:(int)arg2 offset:(int)arg3 completion:(id /* block */)arg4;
- (void)deleteChatIfEmpty:(id)arg1 completion:(id /* block */)arg2;
- (void)updateIndexStatus:(id)arg1;
- (void)clearAllMsgStatusWithCompletion:(id /* block */)arg1;
- (void)ftsDisableSetAddMsg:(id)arg1;
- (void)ftsDisableSetRemoveMsg:(id)arg1;
- (BOOL)ftsDisableSetCheckMsg:(id)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)msgTable;
- (void)setMsgTable:(id)arg1;
- (id)chatTable;
- (void)setChatTable:(id)arg1;
- (id)statusTable;
- (void)setStatusTable:(id)arg1;
- (id)dbQueue;
- (void)setDbQueue:(id)arg1;
- (id)ftsDisableSet;
- (void)setFtsDisableSet:(id)arg1;
- (void).cxx_destruct;
@end
