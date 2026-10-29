@interface WXGRoamLogger : NSObject
{
    unsigned long long _loggerPtr; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (BOOL)shouldLog:(int)arg1;
- (void)logWithLevel:(int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 func:(const char *)arg5 message:(id)arg6;
@end

