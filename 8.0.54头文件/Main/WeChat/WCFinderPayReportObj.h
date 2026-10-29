@interface WCFinderPayReportObj : NSObject
{
    NSString * _contextid; // +0x8
    id _reportData; // +0x10
}
- (id)initWithReportData:(id)arg1 contextid:(id)arg2;
- (id)contextid;
- (void)setContextid:(id)arg1;
- (id)reportData;
- (void)setReportData:(id)arg1;
- (void).cxx_destruct;
@end

