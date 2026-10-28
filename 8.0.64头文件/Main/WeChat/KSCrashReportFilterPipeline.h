@interface KSCrashReportFilterPipeline : NSObject <KSCrashReportFilter>
{
    NSArray * _filters; // +0x8
}
+ (id)filterWithFilters:(id)arg1;
- (id)initWithFilters:(id)arg1;
- (id)initWithFiltersArray:(id)arg1;
- (void)addFilter:(id)arg1;
- (void)filterReports:(id)arg1 onCompletion:(id /* block */)arg2;
- (id)filters;
- (void)setFilters:(id)arg1;
- (void).cxx_destruct;
@end
