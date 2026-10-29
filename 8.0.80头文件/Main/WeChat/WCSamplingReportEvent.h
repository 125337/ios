@interface WCSamplingReportEvent : NSObject
{
    WCSamplingStatData * _stackReportData; // +0x8
    WCSamplingStatData * _kvReportData; // +0x10
    MMGPUSamplingTraceInfo * _samplingTraceInfo; // +0x18
    NSRecursiveLock * _lock; // +0x20
}
+ (id)GenerateReportItemWithEventList:(id)arg1;
- (id)initWithSamplingTraceInfo:(id)arg1;
- (void)updateWithSamplingTraceInfo:(id)arg1;
- (void)reportToMMData;
- (BOOL)shouldReportStack;
- (id)generateStackReportItem;
- (id)stackReportData;
- (void)setStackReportData:(id)arg1;
- (id)kvReportData;
- (void)setKvReportData:(id)arg1;
- (id)samplingTraceInfo;
- (void)setSamplingTraceInfo:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
