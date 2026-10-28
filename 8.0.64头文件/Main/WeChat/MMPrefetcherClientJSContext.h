@interface MMPrefetcherClientJSContext : MMWebJSContext
{
    id /* block */ _callback; // +0x8
    MMClientJsApiHandler * _clientJsApiHandler; // +0x10
    MMPrefetcherClientJsApiHandler * _clientPrefetcherJsApiHandler; // +0x18
    MMPrefetcherClientADJsApiHandler * _clientPrefetcherAdJsApiHandler; // +0x20
    MMPrefetcherClientJSContextConfig * _config; // +0x28
    JSVirtualMachine * _jsVM; // +0x30
    MMWebJsBasePkgInfo * _bizPkgInfo; // +0x38
}
- (id)initWithConfig:(id)arg1 jvm:(id)arg2 bizPkgInfo:(id)arg3;
- (void)internalInit;
- (id)clientContextId;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (id)clientJsApiHandler;
- (void)setClientJsApiHandler:(id)arg1;
- (id)clientPrefetcherJsApiHandler;
- (void)setClientPrefetcherJsApiHandler:(id)arg1;
- (id)clientPrefetcherAdJsApiHandler;
- (void)setClientPrefetcherAdJsApiHandler:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)jsVM;
- (void)setJsVM:(id)arg1;
- (id)bizPkgInfo;
- (void)setBizPkgInfo:(id)arg1;
- (void).cxx_destruct;
@end
