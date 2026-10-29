@interface WARemoteDebugWANChannel : WARemoteDebugChannel <SRWebSocketDelegate>
{
    SRWebSocket * _webSocket; // +0x8
}
+ (id)sharedQueue;
- (BOOL)isConnected;
- (void)openChannel;
- (void)closeChannel;
- (void)sendData:(id)arg1;
- (void)webSocketDidOpen:(id)arg1;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(BOOL)arg4;
- (void)webSocket:(id)arg1 didReceiveMessageWithData:(id)arg2;
- (void).cxx_destruct;
@end
