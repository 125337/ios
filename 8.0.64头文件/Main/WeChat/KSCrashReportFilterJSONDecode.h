@interface KSCrashReportFilterJSONDecode : NSObject <KSCrashReportFilter>
{
    int _encodeOptions; // +0x8
}
+ (id)filterWithOptions:(int)arg1;
- (id)initWithOptions:(int)arg1;
- (void)filterReports:(id)arg1 onCompletion:(id /* block */)arg2;
- (int)decodeOptions;
- (void)setDecodeOptions:(int)arg1;
@end
