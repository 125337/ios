@interface RoomToolsReplyTodoCgi : WCBaseCgi
{
    id <RoomToolsReplyTodoDelegate> _delegate; // +0x8
    NSString * _identifier; // +0x10
    ChatRoomToolMessageEventInfo * _eventInfo; // +0x18
}
- (id)init;
- (BOOL)setChatRoomToolsReplyTodo:(id)arg1 withMessageEventInfo:(id)arg2;
- (void)cgiReplyTodo:(id)arg1 chatName:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)identifier;
- (id)eventInfo;
- (void)setEventInfo:(id)arg1;
- (void).cxx_destruct;
@end
