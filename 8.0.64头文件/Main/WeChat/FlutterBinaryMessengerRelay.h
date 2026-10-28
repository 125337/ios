@interface FlutterBinaryMessengerRelay : NSObject <FlutterBinaryMessenger>
{
    NSObject<FlutterBinaryMessenger> * _parent; // +0x8
}
- (id)initWithParent:(id)arg1;
- (void)sendOnChannel:(id)arg1 message:(id)arg2;
- (void)sendOnChannel:(id)arg1 message:(id)arg2 binaryReply:(id /* block */)arg3;
- (id)makeBackgroundTaskQueue;
- (long long)setMessageHandlerOnChannel:(id)arg1 binaryMessageHandler:(id /* block */)arg2;
- (long long)setMessageHandlerOnChannel:(id)arg1 binaryMessageHandler:(id /* block */)arg2 taskQueue:(id)arg3;
- (void)cleanUpConnection:(long long)arg1;
- (id)parent;
- (void)setParent:(id)arg1;
- (void).cxx_destruct;
@end
