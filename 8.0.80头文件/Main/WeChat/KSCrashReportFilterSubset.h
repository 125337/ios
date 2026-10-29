@interface KSCrashReportFilterSubset : NSObject <KSCrashReportFilter>
{
    NSArray * _keyPaths; // +0x8
}
+ (id)filterWithKeys:(id)arg1;
- (id)initWithKeys:(id)arg1;
- (id)initWithKeysArray:(id)arg1;
- (void)filterReports:(id)arg1 onCompletion:(id /* block */)arg2;
- (id)keyPaths;
- (void)setKeyPaths:(id)arg1;
- (void).cxx_destruct;
@end
