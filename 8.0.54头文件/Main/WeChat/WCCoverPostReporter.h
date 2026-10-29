@interface WCCoverPostReporter : NSObject
{
    long long _contentSource; // +0x8
}
+ (id)attachedReporterFromObject:(id)arg1;
- (void)reportWithUploadTask:(id)arg1;
- (void)clearContext;
- (void)attachReporterToObject:(id)arg1;
- (long long)contentSource;
- (void)setContentSource:(long long)arg1;
@end

