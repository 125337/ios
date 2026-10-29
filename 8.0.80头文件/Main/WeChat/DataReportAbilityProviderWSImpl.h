@interface DataReportAbilityProviderWSImpl : NSObject <SRWebSocketDelegate, AmoebaAbilityProviderWS>
{
    SRWebSocket * _webSocket; // +0x8
    NSString * _url; // +0x10
    id <AmoebaWSMessageDelegate> _delegate; // +0x18
}
- (void)connect:(id)arg1 delegate:(id)arg2;
- (void)sendString:(id)arg1;
- (void)sendData:(id)arg1;
- (void)close;
- (void)webSocket:(id)arg1 didReceiveMessage:(id)arg2;
- (void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(BOOL)arg4;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocket:(id)arg1 didReceivePong:(id)arg2;
- (id)webSocket;
- (void)setWebSocket:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
