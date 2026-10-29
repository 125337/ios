@interface VoipmpCoreImplServiceCallback : NSObject
{
    VoipmpCoreImplServiceDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(VoipmpCoreImplServiceDispatcherBridgeObjcImpl *)arg1;
- (void)onaudioUIRouteToComplete:(unsigned long long)arg1;
- (void)onrecordStateUpdateToComplete:(unsigned long long)arg1;
- (void)onrecErrorToComplete:(unsigned long long)arg1;
- (void)onupdateAudioMenuComplete:(unsigned long long)arg1;
- (void)ononConfEventComplete:(unsigned long long)arg1;
- (void)ononVideoFrameComplete:(unsigned long long)arg1;
- (void)ononReportDataComplete:(unsigned long long)arg1 ret:(int)arg2 reportInfo:(id)arg3;
- (void)ondeviceRouteToComplete:(unsigned long long)arg1 succ:(BOOL)arg2;
- (void)onbindSocketToNetWorkComplete:(unsigned long long)arg1;
@end

