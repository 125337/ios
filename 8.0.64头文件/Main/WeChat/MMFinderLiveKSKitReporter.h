@interface MMFinderLiveKSKitReporter : NSObject <TSKReportReceiving>
- (void)reportManager:(id)arg1 didReceiveEvent:(id)arg2 andParams:(id)arg3;
- (void)dealloc;
- (void)reportEvent:(id)arg1 andParams:(id)arg2;
- (id)replaceCommaToSemicolon:(id)arg1;
@end
