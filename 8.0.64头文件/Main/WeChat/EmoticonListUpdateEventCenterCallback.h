@interface EmoticonListUpdateEventCenterCallback : NSObject
{
    EmoticonListUpdateEventCenterDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(EmoticonListUpdateEventCenterDispatcherBridgeObjcImpl *)arg1;
- (void)onOnEmoticonListUpdatedComplete:(unsigned long long)arg1;
@end
