@interface KvReportBaseItem : NSObject
- (unsigned int)reportKvId;
- (unsigned int)__reportKvId;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportNSStringPreprocessType;
- (void)doReport;
- (void)doReportImmediately;
- (id)convertFieldArrToReportStr:(id)arg1;
@end

