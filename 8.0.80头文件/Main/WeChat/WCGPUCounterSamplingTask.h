@interface WCGPUCounterSamplingTask : NSObject <PBCoding>
{
    BOOL _reportSuccess; // +0x8
    BOOL _isReportDirectly; // +0x9
    unsigned int _reportTime; // +0xc
    int _reportRetryCount; // +0x10
    unsigned long long _reportID; // +0x18
    NSString * _reportData; // +0x20
}
+ (void)PBArrayAdd_reportID;
+ (void)PBArrayAdd_reportTime;
+ (void)PBArrayAdd_reportSuccess;
+ (void)PBArrayAdd_reportRetryCount;
+ (void)PBArrayAdd_reportData;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned long long)reportID;
- (void)setReportID:(unsigned long long)arg1;
- (unsigned int)reportTime;
- (void)setReportTime:(unsigned int)arg1;
- (BOOL)reportSuccess;
- (void)setReportSuccess:(BOOL)arg1;
- (BOOL)isReportDirectly;
- (void)setIsReportDirectly:(BOOL)arg1;
- (int)reportRetryCount;
- (void)setReportRetryCount:(int)arg1;
- (id)reportData;
- (void)setReportData:(id)arg1;
- (void).cxx_destruct;
@end
