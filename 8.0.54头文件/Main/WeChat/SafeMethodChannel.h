@interface SafeMethodChannel : NSObject
{
    BOOL _isReady; // +0x8
    FlutterMethodChannel * _channel; // +0x10
    id /* block */ _handler; // +0x18
    NSMutableArray * _mWaitingInvokeCall; // +0x20
}
+ (id)methodChannelWithName:(id)arg1 binaryMessenger:(id)arg2;
- (id)init;
- (void)setMethodCallHandler:(id /* block */)arg1;
- (void)invokeMethod:(id)arg1 arguments:(id)arg2;
- (void)invokeMethod:(id)arg1 arguments:(id)arg2 result:(id /* block */)arg3;
- (void)notifyReady;
- (BOOL)isReady;
- (void)setIsReady:(BOOL)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;
- (id)mWaitingInvokeCall;
- (void)setMWaitingInvokeCall:(id)arg1;
- (void).cxx_destruct;
@end

