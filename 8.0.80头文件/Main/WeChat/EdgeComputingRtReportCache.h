@interface EdgeComputingRtReportCache : NSObject
- (BOOL)cache:(id)arg1 withLogID:(unsigned int)arg2 withContent:(id)arg3;
- (id)read;
- (id)keyForRtReportData:(id)arg1 withLogID:(id)arg2;
- (void)clear;
@end
