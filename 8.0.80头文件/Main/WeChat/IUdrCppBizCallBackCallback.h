@interface IUdrCppBizCallBackCallback : NSObject
{
    IUdrCppBizCallBackDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(IUdrCppBizCallBackDispatcherBridgeObjcImpl *)arg1;
- (void)onOnCallBackCheckSuccessComplete:(unsigned long long)arg1;
- (void)onOnCallBackSuccessComplete:(unsigned long long)arg1;
- (void)onOnCallBackFailComplete:(unsigned long long)arg1;
@end
