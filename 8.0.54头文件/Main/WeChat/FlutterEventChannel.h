@interface FlutterEventChannel : NSObject
{
    NSObject<FlutterBinaryMessenger> * _messenger; // +0x8
    NSString * _name; // +0x10
    NSObject<FlutterMethodCodec> * _codec; // +0x18
    NSObject<FlutterTaskQueue> * _taskQueue; // +0x20
    long long _connection; // +0x28
}
+ (id)eventChannelWithName:(id)arg1 binaryMessenger:(id)arg2;
+ (id)eventChannelWithName:(id)arg1 binaryMessenger:(id)arg2 codec:(id)arg3;
- (id)initWithName:(id)arg1 binaryMessenger:(id)arg2 codec:(id)arg3;
- (id)initWithName:(id)arg1 binaryMessenger:(id)arg2 codec:(id)arg3 taskQueue:(id)arg4;
- (void)setStreamHandler:(id)arg1;
- (void).cxx_destruct;
@end

