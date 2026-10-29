@interface UdrCppGlobalFeatureImpl : NSObject <IUdrCppGlobalFeatureBase>
{
    IUdrCppGlobalFeatureCallback * callback; // +0x8
}
- (void)setCallback:(id)arg1;
- (void)report30863Async:(unsigned long long)arg1 projectId:(id)arg2 name:(id)arg3 version:(int)arg4 scene:(int)arg5 state:(int)arg6 errNo:(int)arg7 errCode:(int)arg8 timeStamp:(long long)arg9 remoteVersion:(int)arg10;
- (void)notifyPeriodCheckAsync:(unsigned long long)arg1 state:(int)arg2;
- (long long)getDuration:(long long)arg1;
- (void).cxx_destruct;
@end
