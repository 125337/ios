@interface WxaRouterPlugin : NSObject <FlutterPlugin>
{
    SafeMethodChannel * _channel; // +0x8
    NSMutableSet * _consumers; // +0x10
}
+ (id)pluginName:(id)arg1;
+ (id)registerRegistrar:(id)arg1;
+ (void)registerWithRegistrar:(id)arg1;
- (id)init;
- (void)addMethodConsumer:(id)arg1;
- (void)removeMethodConsumer:(id)arg1;
- (void)setupChannelWithRegistrar:(id)arg1;
- (void)invokeMethod:(id)arg1 arguments:(id)arg2;
- (void)invokeMethod:(id)arg1 arguments:(id)arg2 result:(id /* block */)arg3;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id)consumers;
- (void)setConsumers:(id)arg1;
- (void).cxx_destruct;
@end
