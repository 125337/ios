@interface MMPrefetcherClientJsApiHandler : NSObject
{
    unsigned int _userHash; // +0x8
    NSString * _clientId; // +0x10
    id /* block */ _callback; // +0x18
}
- (void)setupApiWithJSContext:(id)arg1;
- (void)addApi_getId:(id)arg1;
- (void)addApi_getUserHash:(id)arg1;
- (void)addApi_request:(id)arg1;
- (void)doRequestWithUrl:(id)arg1 method:(id)arg2 header:(id)arg3 body:(id)arg4 callback:(id)arg5;
- (void)handleHTTPURLResponse:(id)arg1 data:(id)arg2 error:(id)arg3 callback:(id)arg4;
- (id)clientId;
- (void)setClientId:(id)arg1;
- (unsigned int)userHash;
- (void)setUserHash:(unsigned int)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

