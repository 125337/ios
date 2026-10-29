@interface ApplicationCallback : NSObject
{
    ApplicationDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(ApplicationDispatcherBridgeObjcImpl *)arg1;
- (void)onForegroundChangedEvent:(BOOL)arg1;
@end
