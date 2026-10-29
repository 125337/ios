@interface WAJSDebuggerConnection : NSObject <IWAJSDebuggerConnection>
{
    WAJSCoreService * _service; // +0x8
}
- (id)initWithService:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)onMessage:(id)arg1;
- (void)sendCustomMessage:(id)arg1 payload:(id)arg2;
- (void)onCustomMessage:(id)arg1 payload:(id)arg2;
- (void)onReceiveNetworkHeader:(id)arg1;
- (id)service;
- (void)setService:(id)arg1;
- (void).cxx_destruct;
@end
