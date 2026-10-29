@interface ChatHistoryAuthQueryScope : NSObject
{
    ChatHistoryAuthChatScope * _chats; // +0x8
    ChatHistoryAuthQuotaScope * _quota; // +0x10
    ChatHistoryAuthMessageScope * _messages; // +0x18
}
- (id)init;
- (id)chats;
- (void)setChats:(id)arg1;
- (id)quota;
- (void)setQuota:(id)arg1;
- (id)messages;
- (void)setMessages:(id)arg1;
- (void).cxx_destruct;
@end
