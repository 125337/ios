@interface EmoticonStoreEventCenterCallback : NSObject
{
    EmoticonStoreEventCenterDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(EmoticonStoreEventCenterDispatcherBridgeObjcImpl *)arg1;
- (void)onOnEmoticonStoreItemInstallFinishedComplete:(unsigned long long)arg1;
- (void)onOnEmoticonStoreItemInstallFailedComplete:(unsigned long long)arg1;
- (void)onOnEmoticonStoreItemChangedComplete:(unsigned long long)arg1;
@end
