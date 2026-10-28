@interface WADelayToForegroundExecuter : NSObject
{
    WAWebViewController * _ownerWebViewController; // +0x8
    id /* block */ _handler; // +0x10
    NSString * _jsapiName; // +0x18
}
- (id)ownerWebViewController;
- (void)setOwnerWebViewController:(id)arg1;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;
- (id)jsapiName;
- (void)setJsapiName:(id)arg1;
- (void).cxx_destruct;
@end
