@interface WeVisLogger : NSObject
{
    id <WeVisLogAdapterDelegate> _adapter; // +0x8
}
+ (id)sharedLogger;
- (void)logWithLevel:(long long)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 funcName:(const char *)arg5 message:(id)arg6;
- (void * *)getLogCallback;
- (void)setLogAdapter:(id)arg1;
- (id)adapter;
- (void)setAdapter:(id)arg1;
- (void).cxx_destruct;
@end

