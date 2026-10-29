@interface BoxAffBizDynamicCardMrgEventCallback : NSObject
{
    BoxAffBizDynamicCardMrgEventDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(BoxAffBizDynamicCardMrgEventDispatcherBridgeObjcImpl *)arg1;
- (void)onCallOnAdServerInfoComplete:(int)arg1;
- (void)onCallOnRecFeedsAdServerInfoComplete:(int)arg1;
- (void)onCallOnDynamicCardInfoComplete:(int)arg1;
@end
