@interface GCMessageRequestServer : NSObject
{
    GCChatRoomServer * _chatRoomServer; // +0x8
    long long _channelId; // +0x10
    long long _requestSeq; // +0x18
}
- (id)initWithChatRoomServer:(id)arg1;
- (void)invalidatePreviousRequest;
- (void)loadMessageLtSeq:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;
- (void)loadMessageGtSeq:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;
- (void)getChatRoomMsg:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)clearMinAndMaxMsgSeq;
- (id)chatRoomServer;
- (void)setChatRoomServer:(id)arg1;
- (long long)channelId;
- (void)setChannelId:(long long)arg1;
- (long long)requestSeq;
- (void)setRequestSeq:(long long)arg1;
- (void).cxx_destruct;
@end
