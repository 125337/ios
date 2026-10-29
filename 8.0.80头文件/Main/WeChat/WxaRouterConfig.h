@interface WxaRouterConfig : NSObject
{
    NSString * _entryPoint; // +0x8
    NSString * _initialRoute; // +0x10
    NSArray * _entryPointArgs; // +0x18
    NSMutableSet * _consumerSet; // +0x20
    NSMutableSet * _pluginSet; // +0x28
    NSArray * _dartVmArgs; // +0x30
}
- (id)init;
- (void)addMethodConsumer:(id)arg1;
- (void)removeMethodConsumer:(id)arg1;
- (void)addFlutterPlugin:(id)arg1;
- (id)entryPoint;
- (void)setEntryPoint:(id)arg1;
- (id)initialRoute;
- (void)setInitialRoute:(id)arg1;
- (id)entryPointArgs;
- (void)setEntryPointArgs:(id)arg1;
- (id)consumerSet;
- (void)setConsumerSet:(id)arg1;
- (id)pluginSet;
- (void)setPluginSet:(id)arg1;
- (id)dartVmArgs;
- (void)setDartVmArgs:(id)arg1;
- (void).cxx_destruct;
@end
