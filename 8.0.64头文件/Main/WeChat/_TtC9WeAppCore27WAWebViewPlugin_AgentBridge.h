@interface _TtC9WeAppCore27WAWebViewPlugin_AgentBridge : WAWebViewPluginBase
{
     callbacks; // +0x8
     nextId; // +0x10
     lock; // +0x18
     locationHandler; // +0x20
     watchIdToCallbackId; // +0x28
}
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)registerCallbackWithCompletion:(id /* block */)arg1;
- (void)handlePostMessage:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
