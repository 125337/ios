@interface WeDropManager : MMUserService <MMServiceProtocol>
{
    id <WeDropBaseSession> _currentSession; // +0x8
    WeDropCachedSendInfo * _cachedInfo; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)isSenderFirstInShown;
- (BOOL)isReceiverFirstInShown;
- (void)setSenderDidFirstIn;
- (void)setReceiverDidFirstIn;
- (void)setFileDestinationBookmark:(id)arg1;
- (id)getFileDestinationBookmark;
- (void)startSendSession:(id)arg1 withViewController:(id)arg2 block:(id /* block */)arg3;
- (void)startReceiveSession:(id)arg1 moduleLifeHelper:(id)arg2;
- (id)getSendSession;
- (id)getReceiveSession;
- (void)endCurrentSession;
- (id)getLastSendInfo;
- (void)setLastSendInfo:(id)arg1;
- (id)currentSession;
- (void)setCurrentSession:(id)arg1;
- (id)cachedInfo;
- (void)setCachedInfo:(id)arg1;
- (void).cxx_destruct;
@end
