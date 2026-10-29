@interface FunctionCallPlatformServiceCallback : NSObject
{
    FunctionCallPlatformServiceDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(FunctionCallPlatformServiceDispatcherBridgeObjcImpl *)arg1;
- (void)onNotifyFlutterThumbUpOpComplete:(unsigned long long)arg1;
- (void)onNotifyFlutterLikeOpComplete:(unsigned long long)arg1;
- (void)onShareToFavWithTingItemComplete:(unsigned long long)arg1 success:(BOOL)arg2;
@end
