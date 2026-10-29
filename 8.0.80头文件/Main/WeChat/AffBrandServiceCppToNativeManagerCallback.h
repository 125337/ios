@interface AffBrandServiceCppToNativeManagerCallback : NSObject
{
    AffBrandServiceCppToNativeManagerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(AffBrandServiceCppToNativeManagerDispatcherBridgeObjcImpl *)arg1;
- (void)onGetResortContextComplete:(int)arg1 context:(id)arg2;
@end
