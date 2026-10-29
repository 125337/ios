@interface IUdrCppGlobalFeatureCallback : NSObject
{
    IUdrCppGlobalFeatureDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(IUdrCppGlobalFeatureDispatcherBridgeObjcImpl *)arg1;
- (void)onReport30863Complete:(unsigned long long)arg1;
- (void)onNotifyPeriodCheckComplete:(unsigned long long)arg1;
@end
