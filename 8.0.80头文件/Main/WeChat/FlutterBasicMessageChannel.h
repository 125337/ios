@interface FlutterBasicMessageChannel : NSObject
{
    NSObject<FlutterBinaryMessenger> * _messenger; // +0x8
    NSString * _name; // +0x10
    NSObject<FlutterMessageCodec> * _codec; // +0x18
    long long _connection; // +0x20
    NSObject<FlutterTaskQueue> * _taskQueue; // +0x28
}
+ (id)messageChannelWithName:(id)arg1 binaryMessenger:(id)arg2;
+ (id)messageChannelWithName:(id)arg1 binaryMessenger:(id)arg2 codec:(id)arg3;
+ (void)resizeChannelWithName:(id)arg1 binaryMessenger:(id)arg2 size:(long long)arg3;
+ (void)setWarnsOnOverflow:(BOOL)arg1 forChannelWithName:(id)arg2 binaryMessenger:(id)arg3;
- (id)initWithName:(id)arg1 binaryMessenger:(id)arg2 codec:(id)arg3;
- (id)initWithName:(id)arg1 binaryMessenger:(id)arg2 codec:(id)arg3 taskQueue:(id)arg4;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 reply:(id /* block */)arg2;
- (void)setMessageHandler:(id /* block */)arg1;
- (void)resizeChannelBuffer:(long long)arg1;
- (void)setWarnsOnOverflow:(BOOL)arg1;
- (void).cxx_destruct;
@end
