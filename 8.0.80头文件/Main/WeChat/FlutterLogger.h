@interface FlutterLogger : NSObject
{
     outputWriter; // +0x8
     logLevel; // +0x10
}
+ (id)outputWriter;
+ (void)setOutputWriter:(id)arg1;
+ (long long)logLevel;
+ (void)setLogLevel:(long long)arg1;
+ (void)logInfo:(id)arg1;
+ (void)logImportant:(id)arg1;
+ (void)logWarning:(id)arg1;
+ (void)logError:(id)arg1;
+ (void)logFatal:(id)arg1;
+ (void)logDirect:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
