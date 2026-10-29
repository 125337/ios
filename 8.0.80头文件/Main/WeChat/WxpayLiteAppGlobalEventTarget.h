@interface WxpayLiteAppGlobalEventTarget : NSObject
{
    long long _callId; // +0x8
    NSString * _scene; // +0x10
    NSString * _appId; // +0x18
}
+ (id)targetWithCallId:(long long)arg1 scene:(id)arg2 appId:(id)arg3;
- (long long)callId;
- (id)scene;
- (id)appId;
- (void).cxx_destruct;
@end
