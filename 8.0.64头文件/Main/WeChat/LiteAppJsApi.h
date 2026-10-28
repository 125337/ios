@interface LiteAppJsApi : NSObject
{
    double _timeInterval; // +0x8
    LiteAppJsApiCallback * _callBack; // +0x10
    UIViewController * _controller; // +0x18
    unsigned int _localId; // +0x20
    NSString * _appId; // +0x28
    NSString * _apiName; // +0x30
}
- (id)init;
- (void)setCallBack:(id)arg1;
- (id)controller;
- (void)setController:(id)arg1;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (BOOL)invokeInMainThread;
- (double)timeInterval;
- (void)setTimeInterval:(double)arg1;
- (id)callBack;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)apiName;
- (void)setApiName:(id)arg1;
- (void).cxx_destruct;
@end
