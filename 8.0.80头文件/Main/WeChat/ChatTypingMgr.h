@interface ChatTypingMgr : MMUserService <MMKernelExt, MMServiceProtocol>
{
    BOOL _isSyncing; // +0x8
    NSMutableOrderedSet * _pendingSync; // +0x10
    TypingSyncKeyBuff * _syncBuff; // +0x18
    WCTDatabase * _database; // +0x20
    WCTTable * _table; // +0x28
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)syncWithActionNotifyData:(id)arg1;
- (id)getTicket:(id)arg1;
- (void)tryGetTypingTicket;
- (void)getTypingTicket:(int)arg1;
- (id)syncBuff;
- (void)setSyncKey:(unsigned long long)arg1;
- (id)mergeBuffer:(id)arg1 newBuffer:(id)arg2;
- (id)getSyncBuffFilePath;
- (id)getDBPath;
- (BOOL)insertOrUpdateItem:(id)arg1;
- (void)onAuthOK;
- (BOOL)isSyncing;
- (void)setIsSyncing:(BOOL)arg1;
- (id)pendingSync;
- (void)setPendingSync:(id)arg1;
- (void)setSyncBuff:(id)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)table;
- (void)setTable:(id)arg1;
- (void).cxx_destruct;
@end
