@interface WCGroupUndoneDatabase : NSObject
{
    WCTDatabase * _database; // +0x8
    WCTTable * _todoTable; // +0x10
}
- (id)init;
- (void)clearDatabase;
- (void)reloadDatabase;
- (void)createTables;
- (id)createTableWithName:(id)arg1 objectClass:(Class)arg2;
- (BOOL)updateChatRoomToolMessageEventInDB:(id)arg1;
- (BOOL)deleteChatRoomToolMessageEventInSameEventId:(id)arg1;
- (BOOL)markDeleteChatRoomToolMessageEventInSameEventId:(id)arg1;
- (BOOL)checkIfDisposeWithSameSvrId:(unsigned long long)arg1 chatroom:(id)arg2;
- (id)getChatRoomToolMessageEventList:(id)arg1 fromEventTime:(unsigned int)arg2 limit:(unsigned int)arg3;
- (id)getChatroomToolMessageEventWithEventId:(id)arg1 chatroom:(id)arg2 limit:(unsigned int)arg3;
- (id)getChatroomToolMessageEventWithSvrId:(long long)arg1 chatroom:(id)arg2 limit:(unsigned int)arg3;
- (id)getAnyChatroomToolMessageEventWithEventId:(id)arg1 chatroom:(id)arg2 limit:(unsigned int)arg3;
- (id)getAnyChatroomToolMessageEventWithSvrId:(long long)arg1 chatroom:(id)arg2 limit:(unsigned int)arg3;
- (BOOL)deleteChatRoomToolMessageEventInSameRelatedMesSvrID:(id)arg1;
- (id)getChatRoomToolEvent:(id)arg1 withAppUserName:(id)arg2 limit:(unsigned int)arg3;
- (BOOL)deleteChatRoomToolMessageEvent:(id)arg1;
- (BOOL)deleteExpiredEventInfoForChatroom:(id)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)todoTable;
- (void)setTodoTable:(id)arg1;
- (void).cxx_destruct;
@end

