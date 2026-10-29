@interface MessageManagerCallback : NSObject
{
    MessageManagerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(MessageManagerDispatcherBridgeObjcImpl *)arg1;
- (void)onReceiveNewXmlMessageEvent:(id)arg1 msgType:(id)arg2 msgSubType:(id)arg3 newXmlMsg:(id)arg4 createTime:(int)arg5;
@end
