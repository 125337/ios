@interface WAProvideApiConfig : NSObject
{
    JSContext * _jsContext; // +0x8
    id <WAProvideApiDelegate> _delegate; // +0x10
    NSString * _appId; // +0x18
    NSString * _userName; // +0x20
    NSThread * _thread; // +0x28
    MMUIViewController * _parentViewController; // +0x30
    id _userData; // +0x38
}
- (id)jsContext;
- (void)setJsContext:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)thread;
- (void)setThread:(id)arg1;
- (id)parentViewController;
- (void)setParentViewController:(id)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (void).cxx_destruct;
@end
