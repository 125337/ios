@interface MMFootprintHelper : NSObject
+ (BOOL)isEnable;
+ (unsigned long long)threshold;
+ (id)jsFootprintInfo;
+ (void)addFootprintLog:(unsigned long long)arg1;
+ (void)dumpToLog;
@end

