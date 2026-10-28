@interface _TtC9WeAppCore14CDPEventSender : NSObject
{
     webView; // +0x8
     eventQueue; // +0x10
     serialQueue; // +0x18
     currentEventID; // +0x20
}
- (id)webView;
- (void)setWebView:(id)arg1;
- (void)enqueueEventWithCommand:(id)arg1;
- (void)handleDomEventWithParam:(id)arg1 webViewID:(unsigned int)arg2;
- (id)init;
- (void).cxx_destruct;
@end
