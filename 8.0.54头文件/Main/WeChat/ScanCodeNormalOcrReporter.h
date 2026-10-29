@interface ScanCodeNormalOcrReporter : NSObject <ScanCodeOCRReporter, PBMessageObserverDelegate>
- (BOOL)needReport:(id)arg1;
- (void)reportOcr:(id)arg1 withOcrResult:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onReportOcrCGIEnd:(id)arg1;
@end

