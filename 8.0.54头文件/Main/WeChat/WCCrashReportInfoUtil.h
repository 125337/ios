@interface WCCrashReportInfoUtil : NSObject
{
    NSMutableArray * _binaryImages; // +0x8
    NSDictionary * _systemInfo; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (void)setupSystemInfo;
- (void)setupBinaryImages;
- (id)getBinaryImages;
- (id)getSystemInfo;
- (id)binaryImages;
- (void)setBinaryImages:(id)arg1;
- (id)systemInfo;
- (void)setSystemInfo:(id)arg1;
- (void).cxx_destruct;
@end

