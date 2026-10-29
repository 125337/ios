@interface LuggageTestPlatformRunnerCallback : NSObject
{
    LuggageTestPlatformRunnerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(LuggageTestPlatformRunnerDispatcherBridgeObjcImpl *)arg1;
- (void)onRunTestComplete:(unsigned long long)arg1 result:(id)arg2;
@end
