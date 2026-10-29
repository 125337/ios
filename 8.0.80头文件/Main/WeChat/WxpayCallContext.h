@interface WxpayCallContext : NSObject
{
    unsigned long long _callId; // +0x8
    NSString * _scene; // +0x10
    NSString * _appId; // +0x18
    unsigned long long _appUuid; // +0x20
    unsigned long long _pageId; // +0x28
    NSSet * _capabilities; // +0x30
    UIViewController * _viewController; // +0x38
}
+ (id)contextWithCallId:(unsigned long long)arg1 scene:(id)arg2 appId:(id)arg3 appUuid:(unsigned long long)arg4 pageId:(unsigned long long)arg5 viewController:(id)arg6;
- (unsigned long long)callId;
- (void)setCallId:(unsigned long long)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned long long)appUuid;
- (void)setAppUuid:(unsigned long long)arg1;
- (unsigned long long)pageId;
- (void)setPageId:(unsigned long long)arg1;
- (id)capabilities;
- (void)setCapabilities:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void).cxx_destruct;
@end
