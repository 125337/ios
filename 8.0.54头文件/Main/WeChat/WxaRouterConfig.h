@interface WxaRouterConfig : NSObject
{
    BOOL _isPreloadEngine; // +0x8
    BOOL _isPreloadNextEngine; // +0x9
    BOOL _isAutoReleaseEngine; // +0xa
    BOOL _isReleaseDefaultEngineWhenEmptyView; // +0xb
    NSString * _entryPoint; // +0x10
    NSString * _initialRoute; // +0x18
    NSArray * _entryPointArgs; // +0x20
    NSMutableSet * _consumerSet; // +0x28
    NSMutableSet * _pluginSet; // +0x30
    NSArray * _dartVmArgs; // +0x38
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
- (BOOL)isPreloadEngine;
- (void)setIsPreloadEngine:(BOOL)arg1;
- (BOOL)isPreloadNextEngine;
- (void)setIsPreloadNextEngine:(BOOL)arg1;
- (BOOL)isAutoReleaseEngine;
- (void)setIsAutoReleaseEngine:(BOOL)arg1;
- (BOOL)isReleaseDefaultEngineWhenEmptyView;
- (void)setIsReleaseDefaultEngineWhenEmptyView:(BOOL)arg1;
- (void).cxx_destruct;
@end

