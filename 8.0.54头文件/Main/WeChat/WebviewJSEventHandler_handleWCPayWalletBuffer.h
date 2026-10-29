@interface WebviewJSEventHandler_handleWCPayWalletBuffer : WebviewJSEventHandlerBase <WCPayIBGCheckJSAPICgiDelegate>
{
    NSString * _action; // +0x8
    long long _region; // +0x10
    NSString * _buffer; // +0x18
    NSString * _currentBuffer; // +0x20
    WCPayIBGCheckJSAPICgi * _cgi; // +0x28
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)ibgCheckJSAPICgi:(id)arg1 didGetResponse:(id)arg2;
- (void)ibgCheckJSAPICgi:(id)arg1 didFailWithError:(id)arg2;
- (id)mmkvBufferKeyWithRegion:(long long)arg1;
- (id)currentBuffer;
- (void)callFail;
- (void)handleSaveBuffer;
- (void)handleFetchBuffer;
- (id)action;
- (void)setAction:(id)arg1;
- (long long)region;
- (void)setRegion:(long long)arg1;
- (id)buffer;
- (void)setBuffer:(id)arg1;
- (void)setCurrentBuffer:(id)arg1;
- (id)cgi;
- (void)setCgi:(id)arg1;
- (void).cxx_destruct;
@end

