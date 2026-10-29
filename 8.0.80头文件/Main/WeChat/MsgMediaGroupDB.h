@interface MsgMediaGroupDB : NSObject
{
    WCTDatabase * _db; // +0x8
    WCTTable * _metaTable; // +0x10
    WCTTable * _unreadTable; // +0x18
    WCTTable * _notifyTable; // +0x20
}
- (id)init;
- (void)dealloc;
- (id)dbPath;
- (void)openDB;
- (void)setupTable;
- (void)clearExpiredMetaRecords;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)closeDB;
- (void)deleteAllForChatName:(id)arg1;
- (id)getMetaRecord:(id)arg1 chatName:(id)arg2;
- (id)getMetaRecord:(id)arg1;
- (id)addMetaRecord:(id)arg1;
- (id)getUnreadRecord:(id)arg1;
- (id)addUnreadRecord:(id)arg1;
- (void)clearUnread:(id)arg1;
- (id)getNotifyRecord:(id)arg1;
- (id)addNotifyRecord:(id)arg1;
- (void)clearNotify:(id)arg1;
- (id)allNotifyForChatName:(id)arg1;
- (void)clearNotifyForChatName:(id)arg1;
- (id)db;
- (void)setDb:(id)arg1;
- (id)metaTable;
- (void)setMetaTable:(id)arg1;
- (id)unreadTable;
- (void)setUnreadTable:(id)arg1;
- (id)notifyTable;
- (void)setNotifyTable:(id)arg1;
- (void).cxx_destruct;
@end
