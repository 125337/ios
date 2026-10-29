@interface EmoticonPackageListUpdateEventCenterCallback : NSObject
{
    EmoticonPackageListUpdateEventCenterDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(EmoticonPackageListUpdateEventCenterDispatcherBridgeObjcImpl *)arg1;
- (void)onOnEmoticonPackageListUpdatedComplete:(unsigned long long)arg1;
@end
