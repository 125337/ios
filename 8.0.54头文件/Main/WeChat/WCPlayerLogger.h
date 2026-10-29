@interface WCPlayerLogger : NSObject
{
    unsigned long long _loggerPtr; // +0x8
}
+ (void)initialize;
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (BOOL)shouldLog:(int)arg1;
- (void)logWithLevel:(int)arg1 module:(const char *)arg2 errorCode:(unsigned int)arg3 file:(const char *)arg4 line:(int)arg5 func:(const char *)arg6 message:(id)arg7;
- (void)logToFile:(int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 func:(const char *)arg5 message:(id)arg6;
@end

