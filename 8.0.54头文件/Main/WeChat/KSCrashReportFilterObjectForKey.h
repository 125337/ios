@interface KSCrashReportFilterObjectForKey : NSObject <KSCrashReportFilter>
{
    BOOL _allowNotFound; // +0x8
    id _key; // +0x10
}
+ (id)filterWithKey:(id)arg1 allowNotFound:(BOOL)arg2;
- (id)initWithKey:(id)arg1 allowNotFound:(BOOL)arg2;
- (void)filterReports:(id)arg1 onCompletion:(id /* block */)arg2;
- (id)key;
- (void)setKey:(id)arg1;
- (BOOL)allowNotFound;
- (void)setAllowNotFound:(BOOL)arg1;
- (void).cxx_destruct;
@end

