@interface HandOffReporter : NSObject
+ (void)DoReportAction:(unsigned long long)arg1;
+ (void)DoReportHandOffOp:(long long)arg1;
+ (void)DoReportReceiveHandOffOp:(long long)arg1;
+ (void)DoReportSendHandOffOp:(long long)arg1;
+ (void)DoReportPCLifecycle:(long long)arg1 items:(id)arg2;
+ (void)reportPCLifecycle:(int)arg1 item:(id)arg2 isOpen:(BOOL)arg3;
+ (int)convertExtReportType:(long long)arg1;
@end
