@interface SREReporter : NSObject
+ (id)sharedInstance;
- (BOOL)reportInvokeSiri;
- (void)reportSendStatus:(BOOL)arg1;
- (void)reportSendMsgType:(unsigned int)arg1;
- (void)reportReceiverType:(unsigned int)arg1;
- (void)reportMatchStatus:(unsigned int)arg1;
- (void)reportMultiReceiverOp:(unsigned int)arg1;
- (BOOL)updataLatestReportData:(unsigned int)arg1 value:(unsigned int)arg2;
@end

