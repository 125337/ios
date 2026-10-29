@interface EmoticonBoardDataEventCenterCallback : NSObject
{
    EmoticonBoardDataEventCenterDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(EmoticonBoardDataEventCenterDispatcherBridgeObjcImpl *)arg1;
- (void)onOnEmoticonThumbUpdatedComplete:(unsigned long long)arg1;
@end
