@interface WxpayDebugCaller : NSObject
{
    unsigned int _appUuid; // +0x8
    NSString * _appId; // +0x10
    unsigned long long _callId; // +0x18
    UIViewController * _viewController; // +0x20
}
+ (id)callerWithAppId:(id)arg1 appUuid:(unsigned int)arg2 callId:(unsigned long long)arg3 viewController:(id)arg4;
- (id)initWithAppId:(id)arg1 appUuid:(unsigned int)arg2 callId:(unsigned long long)arg3;
- (id)appId;
- (unsigned int)appUuid;
- (unsigned long long)callId;
- (id)viewController;
- (void).cxx_destruct;
@end
