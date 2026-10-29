@interface IUdrCppBizFeatureCallback : NSObject
{
    IUdrCppBizFeatureDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(IUdrCppBizFeatureDispatcherBridgeObjcImpl *)arg1;
- (void)onPostProcessComplete:(unsigned long long)arg1;
- (void)onHaveSpecifiedResourceComplete:(unsigned long long)arg1;
- (void)onOnCallBackStartPeriodComplete:(unsigned long long)arg1;
- (void)onOnCallBackCheckSuccessComplete:(unsigned long long)arg1;
- (void)onOnCallBackSuccessComplete:(unsigned long long)arg1;
- (void)onOnCallBackFailComplete:(unsigned long long)arg1;
@end
