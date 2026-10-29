@interface ChatRoomHistoryDB : NSObject
{
    WCTDatabase * _database; // +0x8
    WCTTable * _processTagTable; // +0x10
    WCTTable * _historyMsgTable; // +0x18
    WCTTable * _processingMsgTable; // +0x20
}
- (id)init;
- (BOOL)reloadDataBase;
- (void)createTables;
- (BOOL)createProcessTagTable;
- (BOOL)addProcessTagWithHistoryID:(unsigned long long)arg1 chatName:(id)arg2;
- (BOOL)isHistoryHaveProcessTag:(unsigned long long)arg1;
- (void)deleteAllProcessTag:(id)arg1;
- (void)deleteProcessTag:(unsigned long long)arg1;
- (BOOL)createProcessingMsgTable;
- (BOOL)addProcessingInviteMsg:(id)arg1;
- (BOOL)isMsgProcessing:(id)arg1;
- (void)deleteProcessingInvitedMsgWrap:(id)arg1;
- (void)deleteAllProcessingMsgWithChatName:(id)arg1;
- (id)getAllProcessingInvitedMsgWrap;
- (BOOL)createHistoryMsgTable;
- (BOOL)addHistoryMsgObjs:(id)arg1 historyInfo:(id)arg2;
- (void)deleteHistroyMsg:(id)arg1;
- (void)deleteAllHistroyMsgWithChatName:(id)arg1;
- (void)deleteAllHistoryObjWithHistoryID:(unsigned long long)arg1;
- (id)getHistoryMsgWithMsgWrap:(id)arg1;
- (id)getAllHistoryMsgWithHistoryID:(unsigned long long)arg1;
- (void)didRecoverDatabase;
- (void)willRecoverDatabase;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)processTagTable;
- (void)setProcessTagTable:(id)arg1;
- (id)historyMsgTable;
- (void)setHistoryMsgTable:(id)arg1;
- (id)processingMsgTable;
- (void)setProcessingMsgTable:(id)arg1;
- (void).cxx_destruct;
@end

