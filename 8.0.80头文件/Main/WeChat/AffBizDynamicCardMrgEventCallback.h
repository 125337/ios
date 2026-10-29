@interface AffBizDynamicCardMrgEventCallback : NSObject
{
    AffBizDynamicCardMrgEventDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(AffBizDynamicCardMrgEventDispatcherBridgeObjcImpl *)arg1;
- (void)onCallOnAdServerInfoComplete:(int)arg1;
- (void)onCallOnRecFeedsAdServerInfoComplete:(int)arg1;
- (void)onCallOnDynamicCardInfoComplete:(int)arg1;
- (void)onCallOnOftenReadAdCardsComplete:(int)arg1;
- (void)onCallOnOftenReadFlowStateChangeComplete:(int)arg1;
@end
