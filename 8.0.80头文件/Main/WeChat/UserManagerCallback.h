@interface UserManagerCallback : NSObject
{
    UserManagerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(UserManagerDispatcherBridgeObjcImpl *)arg1;
- (void)onLoginStateChangeEvent:(int)arg1 type:(int)arg2 errorCode:(int)arg3;
@end
