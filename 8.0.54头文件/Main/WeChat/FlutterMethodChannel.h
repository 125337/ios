@interface FlutterMethodChannel : NSObject
{
    NSObject<FlutterBinaryMessenger> * _messenger; // +0x8
    NSString * _name; // +0x10
    NSObject<FlutterMethodCodec> * _codec; // +0x18
    long long _connection; // +0x20
    NSObject<FlutterTaskQueue> * _taskQueue; // +0x28
}
+ (id)methodChannelWithName:(id)arg1 binaryMessenger:(id)arg2;
+ (id)methodChannelWithName:(id)arg1 binaryMessenger:(id)arg2 codec:(id)arg3;
- (id)initWithName:(id)arg1 binaryMessenger:(id)arg2 codec:(id)arg3;
- (id)initWithName:(id)arg1 binaryMessenger:(id)arg2 codec:(id)arg3 taskQueue:(id)arg4;
- (void)invokeMethod:(id)arg1 arguments:(id)arg2;
- (void)invokeMethod:(id)arg1 arguments:(id)arg2 result:(id /* block */)arg3;
- (void)setMethodCallHandler:(id /* block */)arg1;
- (void)resizeChannelBuffer:(long long)arg1;
- (void).cxx_destruct;
@end

