@interface WCMatrixLogger : MMRootService <MMServiceProtocol>
{
    unsigned long long _loggerPtr; // +0x8
}
- (void)onServiceInit;
- (void)setupLogger;
- (void)logToFile:(const char *)arg1;
- (unsigned long long)loggerPtr;
- (void)setLoggerPtr:(unsigned long long)arg1;
@end
