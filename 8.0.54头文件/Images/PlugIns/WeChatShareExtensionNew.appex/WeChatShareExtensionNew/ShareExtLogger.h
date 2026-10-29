@interface ShareExtLogger : NSObject
{
    unsigned long long _loggerPtr; // +0x8
}
+ (void)initialize;
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)logWithLevel:(int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 func:(const char *)arg5 message:(id)arg6;
- (void)doNSLog:(id)arg1;
- (void)logToConsoleWithModule:(const char *)arg1 file:(const char *)arg2 line:(int)arg3 func:(const char *)arg4 message:(id)arg5;
- (void)logToFile:(int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 func:(const char *)arg5 message:(id)arg6;
- (void)flush;
@end

