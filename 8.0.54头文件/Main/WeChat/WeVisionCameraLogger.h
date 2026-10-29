@interface WeVisionCameraLogger : MMUserService <XEffectLogAdapterDelegate, WeVisLogAdapterDelegate, MMServiceProtocol>
- (id)init;
- (void)setup;
- (void)xeffectLogWithLevel:(long long)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 funcName:(const char *)arg5 message:(id)arg6;
- (void)logWithLevel:(long long)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 funcName:(const char *)arg5 message:(id)arg6;
@end

