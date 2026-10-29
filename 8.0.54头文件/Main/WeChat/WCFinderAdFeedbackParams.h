@interface WCFinderAdFeedbackParams : NSObject
{
    NSString * _reportData; // +0x8
    NSString * _reportBypData; // +0x10
    unsigned long long _businessType; // +0x18
}
- (id)reportData;
- (void)setReportData:(id)arg1;
- (id)reportBypData;
- (void)setReportBypData:(id)arg1;
- (unsigned long long)businessType;
- (void)setBusinessType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

