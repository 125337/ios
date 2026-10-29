@interface KSCrashReportFilterConcatenate : NSObject <KSCrashReportFilter>
{
    NSString * _separatorFmt; // +0x8
    NSArray * _keys; // +0x10
}
+ (id)filterWithSeparatorFmt:(id)arg1 keys:(id)arg2;
- (id)initWithSeparatorFmt:(id)arg1 keys:(id)arg2;
- (id)initWithSeparatorFmt:(id)arg1 keysArray:(id)arg2;
- (void)filterReports:(id)arg1 onCompletion:(id /* block */)arg2;
- (id)separatorFmt;
- (void)setSeparatorFmt:(id)arg1;
- (id)keys;
- (void)setKeys:(id)arg1;
- (void).cxx_destruct;
@end

