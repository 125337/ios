@interface LiteAppReporterDependencyImpl : NSObject <MMLiteAppReporterDependency>
- (id)getMetricsInfo;
- (void)kvlog:(int)arg1 logString:(id)arg2;
- (id)generateUUID;
- (BOOL)calcIsSample;
- (BOOL)calcIsTemporarySample;
- (BOOL)useNewSampling;
@end
