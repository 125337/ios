@interface ChatBotHistoryMessageItem : ChatBotHistoryItem
{
    GetBotChatHistoryResponse_ChatHistory_ChatHistoryItem * _messageContent; // +0x20
}
- (id)init;
- (id)messageContent;
- (void)setMessageContent:(id)arg1;
- (void).cxx_destruct;
@end
