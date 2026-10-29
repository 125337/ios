@interface MemoryReportTask : NSObject <PBCoding>
{
    BOOL _generateFail; // +0x8
    BOOL _reportSuccess; // +0x9
    int _retryCount; // +0xc
    unsigned long long _launchTime; // +0x10
    NSDictionary * _customInfo; // +0x18
}
+ (void)PBArrayAdd_launchTime;
+ (void)PBArrayAdd_generateFail;
+ (void)PBArrayAdd_reportSuccess;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_customInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned long long)launchTime;
- (void)setLaunchTime:(unsigned long long)arg1;
- (BOOL)generateFail;
- (void)setGenerateFail:(BOOL)arg1;
- (BOOL)reportSuccess;
- (void)setReportSuccess:(BOOL)arg1;
- (int)retryCount;
- (void)setRetryCount:(int)arg1;
- (id)customInfo;
- (void)setCustomInfo:(id)arg1;
- (void).cxx_destruct;
@end
