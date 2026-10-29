@interface FLTJavaScriptChannel : NSObject <WKScriptMessageHandler>
{
    FlutterMethodChannel * _methodChannel; // +0x8
    NSString * _javaScriptChannelName; // +0x10
}
- (id)initWithMethodChannel:(id)arg1 javaScriptChannelName:(id)arg2;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void).cxx_destruct;
@end

