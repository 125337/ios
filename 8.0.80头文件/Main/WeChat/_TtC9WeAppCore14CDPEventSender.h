@interface _TtC9WeAppCore14CDPEventSender : NSObject
{
    void * webView; // +0x8
    void * appTask; // +0x10
     eventQueue; // +0x18
     serialQueue; // +0x20
     currentEvent; // +0x28
}
- (id)webView;
- (void)setWebView:(id)arg1;
- (id)appTask;
- (void)setAppTask:(id)arg1;
- (void)enqueueEventWithCommand:(id)arg1 completion:(id /* block */)arg2;
- (void)handleDomEventWithParam:(id)arg1 webViewID:(unsigned int)arg2;
- (id)init;
- (void).cxx_destruct;
@end
