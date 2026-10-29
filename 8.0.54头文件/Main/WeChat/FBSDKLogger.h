@interface FBSDKLogger : NSObject
{
    BOOL _active; // +0x8
    unsigned long long _loggerSerialNumber; // +0x10
    NSString * _loggingBehavior; // +0x18
    NSMutableString * _internalContents; // +0x20
}
+ (unsigned long long)generateSerialNumber;
+ (void)singleShotLogEntry:(id)arg1 logEntry:(id)arg2;
+ (void)singleShotLogEntry:(id)arg1 formatString:(id)arg2;
+ (void)singleShotLogEntry:(id)arg1 timestampTag:(id)arg2 formatString:(id)arg3;
+ (void)registerCurrentTime:(id)arg1 withTag:(id)arg2;
+ (void)registerStringToReplace:(id)arg1 replaceWith:(id)arg2;
- (id)initWithLoggingBehavior:(id)arg1;
- (id)contents;
- (void)setContents:(id)arg1;
- (void)appendString:(id)arg1;
- (void)appendFormat:(id)arg1;
- (void)appendKey:(id)arg1 value:(id)arg2;
- (void)emitToNSLog;
- (unsigned long long)loggerSerialNumber;
- (id)loggingBehavior;
- (BOOL)isActive;
- (id)internalContents;
- (void).cxx_destruct;
@end

