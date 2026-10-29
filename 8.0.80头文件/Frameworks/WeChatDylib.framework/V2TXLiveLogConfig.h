@interface V2TXLiveLogConfig : NSObject <NSCopying>
{
    BOOL _enableObserver; // +0x8
    BOOL _enableConsole; // +0x9
    BOOL _enableLogFile; // +0xa
    long long _logLevel; // +0x10
    NSString * _logPath; // +0x18
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (long long)logLevel;
- (void)setLogLevel:(long long)arg1;
- (BOOL)enableObserver;
- (void)setEnableObserver:(BOOL)arg1;
- (BOOL)enableConsole;
- (void)setEnableConsole:(BOOL)arg1;
- (BOOL)enableLogFile;
- (void)setEnableLogFile:(BOOL)arg1;
- (id)logPath;
- (void)setLogPath:(id)arg1;
- (void).cxx_destruct;
@end
