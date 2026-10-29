@interface ContactManagerCallback : NSObject
{
    ContactManagerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(ContactManagerDispatcherBridgeObjcImpl *)arg1;
- (void)onGetContactEnsureComplete:(unsigned long long)arg1 ret:(int)arg2 contact:(id)arg3;
@end
