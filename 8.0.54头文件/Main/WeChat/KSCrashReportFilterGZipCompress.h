@interface KSCrashReportFilterGZipCompress : NSObject <KSCrashReportFilter>
{
    int _compressionLevel; // +0x8
}
+ (id)filterWithCompressionLevel:(int)arg1;
- (id)initWithCompressionLevel:(int)arg1;
- (void)filterReports:(id)arg1 onCompletion:(id /* block */)arg2;
- (int)compressionLevel;
- (void)setCompressionLevel:(int)arg1;
@end

