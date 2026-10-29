@interface ScanPayCodeOcrReporter : NSObject <ScanCodeOCRReporter>
- (BOOL)needReport:(id)arg1 reportType:(unsigned long long)arg2;
- (void)reportOcr:(id)arg1 withOcrResult:(id)arg2;
@end
