@interface RoomToolsAlterTodoCgi : WCBaseCgi
{
    id <RoomToolsAlterTodoDelegate> _delegate; // +0x8
    NSString * _identifier; // +0x10
    ChatRoomToolMessageEventInfo * _eventInfo; // +0x18
    CMessageWrap * _message; // +0x20
}
- (id)init;
- (void)cgiUpdateTodo:(id)arg1 chatName:(id)arg2;
- (void)cgiRevokeTodo:(id)arg1 chatName:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)identifier;
- (id)eventInfo;
- (void)setEventInfo:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (void).cxx_destruct;
@end

