@interface KSCrashReportFilterCombine : NSObject <KSCrashReportFilter>
{
    NSArray * _filters; // +0x8
    NSArray * _keys; // +0x10
}
+ (id /* block */)argBlockWithFilters:(id)arg1 andKeys:(id)arg2;
+ (id)filterWithFiltersAndKeys:(id)arg1;
- (id)initWithFilters:(id)arg1 keys:(id)arg2;
- (id)initWithFiltersAndKeys:(id)arg1;
- (void)filterReports:(id)arg1 onCompletion:(id /* block */)arg2;
- (id)filters;
- (void)setFilters:(id)arg1;
- (id)keys;
- (void)setKeys:(id)arg1;
- (void).cxx_destruct;
@end

