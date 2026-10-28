@interface WCOSLogger : NSObject
{
    unsigned long long _loggerPtr; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (unsigned long long)getLoggerPtr;
- (void)logToFile:(const char *)arg1;
@end
